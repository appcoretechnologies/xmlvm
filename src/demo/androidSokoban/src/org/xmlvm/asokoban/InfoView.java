package org.xmlvm.asokoban;

import android.content.Context;
import android.view.View;
import android.widget.AbsoluteLayout;
import android.widget.Button;
import android.widget.CheckBox;

/**
 * A info view that is shown when the user clicks on the (i) button. It contains
 * playing instructions and settings for the game.
 */
public class InfoView extends SplashView {
    private OnCloseHandler onCloseHandler;

    public InfoView(final Context context, GameView gameView) {
        super(context, gameView, R.drawable.splash_info);

        final CheckBox enableAccelerometer = new CheckBox(context);
        AbsoluteLayout.LayoutParams p = new AbsoluteLayout.LayoutParams(
                AbsoluteLayout.LayoutParams.WRAP_CONTENT, AbsoluteLayout.LayoutParams.WRAP_CONTENT,
                35, 250);
        enableAccelerometer.setLayoutParams(p);
        enableAccelerometer.setChecked(((ASokoban) context).isAccelerometerEnabled());
        addView(enableAccelerometer);

        Button okButton = new Button(context);
        okButton.setText("OK");
        p = new AbsoluteLayout.LayoutParams(AbsoluteLayout.LayoutParams.WRAP_CONTENT,
                AbsoluteLayout.LayoutParams.WRAP_CONTENT, 280, 255);
        okButton.setLayoutParams(p);
        addView(okButton);
        okButton.setOnClickListener(new OnClickListener() {

            @Override
            public void onClick(View view) {
                if (enableAccelerometer.isChecked()) {
                    ((ASokoban) context).enableAccelerometer();
                } else {
                    ((ASokoban) context).disableAccelerometer();
                }

                if (shown) {
                    hide();
                    onCloseHandler.onClose();
                }
            }
        });
    }

    /**
     * Sets the handler that should be called when this dialog is closing.
     */
    public void setOnCloseHandler(OnCloseHandler handler) {
        onCloseHandler = handler;
    }
}