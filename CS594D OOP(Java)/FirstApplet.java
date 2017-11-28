import java.awt.*;
import java.applet.Applet;

public class FirstApplet extends Applet {

	public void paint(Graphics g) {
		g.setColor(Color.yellow);
		g.fillOval(200, 100, 100, 100);
		g.setColor(Color.black);
		g.fillOval(215, 125, 20, 20);
		g.fillOval(265, 125, 20, 20);
		g.drawLine(250, 145, 250, 160);
		g.setColor(Color.red);
		g.fillArc(230, 160, 40, 20, 0, -180);
	}
}