import java.awt.Graphics;
import java.awt.Color;
import java.applet.Applet;

public class hutMoon extends Applet{
	public void paint(Graphics g){
		g.drawLine(200, 200, 1000, 200);
		g.drawLine(200, 200, 50, 400);
		g.drawLine(200, 200, 350, 400);
		g.drawLine(1000, 200, 1150, 400);
		g.drawLine(50, 400, 1150, 400);
		g.drawLine(50, 400, 50, 800);
	}
}