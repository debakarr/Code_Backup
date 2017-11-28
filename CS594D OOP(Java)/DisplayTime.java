import java.awt.*;
import java.applet.*;
import java.util.Date;

public class DisplayTime extends Applet {

	public void paint(Graphics g) {
		g.setColor(Color.blue);
		int x_axis = Integer.parseInt(getParameter("x"));
		int y_axis = Integer.parseInt(getParameter("y"));

		g.drawString("Current Date and time: ", x_axis, y_axis);

		g.setColor(Color.yellow);
		Date d = new Date();

		g.drawString(d.toString(), x_axis, y_axis + 50);

		showStatus("My Applet");
	}
}