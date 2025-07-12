import javax.swing.*;
import java.awt.*;

public class MyFrame extends JFrame {
	JButton b1, b2, b3;
	Container cPane; // ContentPane
	CardLayout cLayoutm; 
	public MyFrame() {
		setTitle("BoarderLayoutTest");
		setSize(300, 150);
		Container cPane = getContentPane();
		JPanel cardPanel = new JPanel();
		CardLayout cLayoutm = new CardLayout();
		setLayout(cLayoutm); // (1)
		JButton b1 = new JButton("Card #1");
		JButton b2 = new JButton("Card #2");
		JButton b3 = new JButton("Card #3");
		add(b1);
		add(b2);
		add(b3);
		b1.addActionListener(e-> cLayoutm.next(cPane)); // e : event
		b2.addActionListener(e-> cLayoutm.next(cPane));
		b3.addActionListener(e-> cLayoutm.next(cPane));
		setVisible(true);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
}

