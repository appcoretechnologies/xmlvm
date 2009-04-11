
package org.xmlvm.iphone;

import java.awt.Color;
import java.awt.Font;
import java.awt.FontMetrics;
import java.awt.GradientPaint;
import java.awt.Graphics2D;

import org.xmlvm.iphone.internal.*;



public class UISwitch
    extends UIView
    implements GestureListener
{

    private boolean   isOn;
    final private int INSET = 8;
    private Font font;



    public UISwitch()
    {
        super(new CGRect(0, 0, 0, 0));
        init();
	}



    public UISwitch(CGRect rect)
    {
        super(rect);
        init();
    }



	private void init() {
        Simulator.addGestureListener(this);
		// Set a default font
		font = new Font("Arial", Font.BOLD, 16);
		this.setOn(false);
	}


	public void setOn(boolean on)
    {
    	this.isOn = on;
    }
    
    
    
    public boolean isOn()
    {
    	return isOn;
    }



    public void drawRect(CGRect rect)
    {
        Graphics2D g = CGContext.theContext.graphicsContext;
        g.setFont(font);
        CGRect displayRect = getDisplayRect();
        int x = (int) displayRect.origin.x;
        int y = (int) displayRect.origin.y;
        int w = (int) displayRect.size.width;
        int h = (int) displayRect.size.height;
        GradientPaint blueGradient = new GradientPaint(
                0,
                y,
                new Color(61, 89, 171),
                0,
                y + h,
                new Color(100, 149, 237));
        GradientPaint whiteGradient = new GradientPaint(
                0,
                y,
                new Color(220, 220, 220),
                0,
                y + h,
                Color.WHITE);
        GradientPaint grayGradient = new GradientPaint(
                0,
                y,
                Color.LIGHT_GRAY,
                0,
                y + h,
                Color.WHITE);
        g.setPaint(isOn ? blueGradient : whiteGradient);
        g.fillRoundRect(x, y,
                w, h,
                INSET, INSET);
        g.setColor(Color.LIGHT_GRAY);
        g.drawRoundRect(x, y,
                w, h,
                INSET, INSET);
        CGRect knob = new CGRect(displayRect);
        float halfWidth = w / 2;
        knob.size.width = halfWidth;
        if (isOn)
            knob.origin.x += halfWidth;
        g.drawRoundRect((int) knob.origin.x, (int) knob.origin.y,
                (int) knob.size.width, (int) knob.size.height, INSET, INSET);
        g.setPaint(grayGradient);
        g.fillRoundRect((int) knob.origin.x, (int) knob.origin.y,
                (int) knob.size.width, (int) knob.size.height, INSET, INSET);
        String label = "ON";
        knob.origin.x = x;
        g.setColor(Color.WHITE);
        if (!isOn) {
            knob.origin.x += halfWidth;
            g.setColor(Color.GRAY);
            label = "OFF";
        }
        FontMetrics fm = g.getFontMetrics();
        g.drawString(label, knob.origin.x + INSET, knob.origin.y
                + (h - fm.getHeight()) / 2 + fm.getHeight() - fm.getDescent());
    }



    public void mouseClicked(int x, int y)
    {
        CGRect rect = getDisplayRect();
        int inX = x - (int) rect.origin.x;
        int inY = y - (int) rect.origin.y;
        if (inX >= 0 && inX < frame.size.width / 2 && inY >= 0
                && inY < frame.size.height)
            setOn(true);
        if (inX > frame.size.width / 2 && inX < frame.size.width
                && inY >= 0 && inY < frame.size.height)
            setOn(false);
        Simulator.redrawDisplay();
    }



    public void gestureDragged(int dx, int dy)
    {
        // TODO Auto-generated method stub

    }



}