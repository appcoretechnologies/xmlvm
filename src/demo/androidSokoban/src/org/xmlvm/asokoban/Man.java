package org.xmlvm.asokoban;

/**
 * A Man is special subclass of {@link MovableGamePiece} that represents the
 * character that is moved across the screen by the player.
 */
public class Man extends MovableGamePiece {
    public Man(GameView view, int x, int y) {
        super(view, R.drawable.man, x, y);
        image.bringToFront();
    }
}