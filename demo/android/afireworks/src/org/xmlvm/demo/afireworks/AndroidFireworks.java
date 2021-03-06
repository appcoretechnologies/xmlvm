/* Copyright (c) 2002-2011 by XMLVM.org
 *
 * Project Info:  http://www.xmlvm.org
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */

package org.xmlvm.demo.afireworks;

import android.app.Activity;
import android.content.Intent;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.view.Display;
import android.view.Menu;
import android.view.MenuItem;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.view.View.OnTouchListener;

/**
 * The main class/activity of the Fireworks application.
 * 
 */
public class AndroidFireworks extends Activity {
	/**
	 * UI Text for inviting people to visit XMLVM.org.
	 */
	public static final String VISIT_XMLVM = "Visit Project XMLVM.org";
	/**
	 * UI Text for inviting people to watch the XMLVM Google TechTalk.
	 */
	public static final String WATCH_YOUTUBE = "Watch Google TechTalk";
	/**
	 * The URL to XMLVM.org
	 */
	public static final String XMLVM_URL = "http://www.xmlvm.org";
	/**
	 * The URL to the XMLVM YouTube video.
	 */
	public static final String YOUTUBE_XMLVM_URL = "http://www.youtube.com/watch?v=s8nMpi5-P-I";

	private ViewGroup layout;
	private Fireworks fireworks;
	private Environment environment = new Environment();
	private Handler updater = new Handler();
	private Runnable updateFw;

	@Override
	public void onContentChanged() {
		WindowManager w = getWindowManager();
		Display d = w.getDefaultDisplay();
		environment.windowWidth = d.getWidth();
		environment.windowHeight = d.getHeight();
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		menu.add(VISIT_XMLVM).setIcon(R.drawable.xmlvm);
		menu.add(WATCH_YOUTUBE).setIcon(R.drawable.youtube);
		return true;
	}

	@Override
	public boolean onOptionsItemSelected(MenuItem item) {
		if (item.getTitle().equals(VISIT_XMLVM)) {
			viewUri(Uri.parse(XMLVM_URL));
			return true;
		} else if (item.getTitle().equals(WATCH_YOUTUBE)) {
			viewUri(Uri.parse(YOUTUBE_XMLVM_URL));
			return true;
		}
		return false;
	}

	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		updateFw = new Runnable() {
			public void run() {
				fireworks.doUpdate();
				updater.postDelayed(updateFw, Const.UPDATE_DELAY);
				layout.invalidate();
			}
		};
		// No title bar.
		this.requestWindowFeature(Window.FEATURE_NO_TITLE);
		// Switch to fullscreen view, getting rid of the status bar as well.
		this.getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
				WindowManager.LayoutParams.FLAG_FULLSCREEN);
		layout = new ViewGroup(this) {
			@Override
			protected void onLayout(boolean changed, int l, int t, int r, int b) {
				// Nothing to be done.
			}
		};
		setContentView(layout);
		SensorManager sensorManager = (SensorManager) this
				.getSystemService(SENSOR_SERVICE);

		// Register the accelerometer listener.
		sensorManager.registerListener(new SensorEventListener() {
			@Override
			public void onAccuracyChanged(Sensor sensor, int accuracy) {
				// Do nothing.
			}

			@Override
			public void onSensorChanged(SensorEvent event) {
				environment.rotX = event.values[0];
				environment.rotY = event.values[1];
				
			}
		}, sensorManager.getDefaultSensor(Sensor.TYPE_ACCELEROMETER),
				SensorManager.SENSOR_DELAY_FASTEST);

		// Register the touch listener.
		layout.setOnTouchListener(new OnTouchListener() {
			private final int touchMod = 3;
			private int touchCount = 0;

			public boolean onTouch(View v, MotionEvent event) {
				if (event.getAction() == MotionEvent.ACTION_DOWN) {
					touchCount = 0;
				}
				if (touchCount == 0) {
					fireworks.touchExplode((int) event.getX(), (int) event
							.getY());
				}
				touchCount = (touchCount + 1) % touchMod;
				return true;
			}
		});
		fireworks = new Fireworks(layout, environment);
		updater.postDelayed(updateFw, 100);
	}

	/**
	 * Returns the main {@link ViewGroup} for the Fireworks layout.
	 */
	public ViewGroup getLayout() {
		return layout;
	}

	/**
	 * Returns the active Environment.
	 */
	public Environment getEnvironment() {
		return environment;
	}

	private void viewUri(Uri uri) {
		Intent intent = new Intent(Intent.ACTION_VIEW);
		intent.setData(uri);
		startActivity(intent);
	}

	/**
	 * A simple class for keepting basic environmental data.
	 */
	public static class Environment {
		public float rotX = 0;
		public float rotY = 0;
		public int windowHeight = 10;
		public int windowWidth = 10;
	}
}
