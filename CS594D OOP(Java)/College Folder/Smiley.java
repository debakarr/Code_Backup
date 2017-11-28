import java.awt.*;
import java.applet.*;

public class Smiley extends Applet{
	public void paint(Graphics g){
		g.setColor(Color.yellow);
		g.fillOval(200, 100, 100, 100);
		g.setColor(Color.black);
		g.fillOval(220, 120, 20, 20);
		g.fillOval(260, 120, 20, 20);
		g.drawLine(250, 150, 250, 160);
		g.setColor(Color.pink);
		g.fillArc(220, 165, 60, 20, 0, -180);
	}
}
