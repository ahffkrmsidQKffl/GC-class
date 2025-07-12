import java.awt.*;
import java.awt.event.MouseAdapter;
import javax.swing.*;
import java.awt.event.*;

public class AllMouse extends JFrame implements MouseListener, MouseMotionListener {
	JPanel panel;
	private JTextField txt1, txt2, txt3, txt4, txt5, txt6;
	
	public AllMouse() {
		setTitle("Mouse Event");
		setSize(300, 200);
		
		panel = new JPanel();
		panel.addMouseMotionListener(new MouseAdapter() {
			public void mouseClicked(MouseEvent e) {
				display("Mouse clicked (# of clicks: " + e.getClickCount() + ")", e);
			}
		});
		panel.addMouseMotionListener(new MouseAdapter() {
			public void mouseDragged(MouseEvent e) {
				System.out.println(e);
			}
		});
		add(panel);
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

	public void mousePressed(MouseEvent e) {
		display("Mouse pressed (# of clicks: " + e.getClickCount() + ")", e);
	}
	
	public void mouseReleased(MouseEvent e) {
		display("Mouse released (# of clicks: " + e.getClickCount() + ")", e);
	}

	public void mouseEntered(MouseEvent e) {
		display("Mouse entered", e);
	}
	
	public void mouseExited(MouseEvent e) {
		display("Mouse exited", e);
	}
	
	public void mouseClicked(MouseEvent e) {
		display("Mouse clicked (# of clicks: " + e.getClickCount() + ")", e);
	}
	
	public void mouseDragged(MouseEvent e) {
		display("Mouse dragged", e);
	}
	
	public void mouseMoved(MouseEvent e) {
		display("Mouse moved", e);
	}
	
	protected void display(String s, MouseEvent e) {
		System.out.println(s + " X=" + e.getX() + " Y=" + e.getY());
	}

	public static void main(String[] args) {
		AllMouse f = new AllMouse();
	}
}