import java.awt.*;
import java.applet.*;
import java.util.*;

public class AppletDisplay extends Applet{
	public void paint(Graphics g){
		Date d = new Date();
		g.setColor(Color.red);
		g.drawString("Display System Date and Time", 150, 20);
		g.setColor(Color.blue);
		g.drawString(d.toString(), 150, 60);
		showStatus("Applet status");	
	}
}
