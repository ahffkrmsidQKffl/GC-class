import java.awt.event.*;
import java.awt.*;
import javax.swing.*;

public class KeyPad extends JFrame implements ActionListener {
	private JPanel panel;
	private JTextField tField;
	private JButton[] buttons;
	private String[] buttonLabels = { 
			"ㅂ", "ㅈ", "ㄷ", "ㄱ", "ㅅ", "ㅛ", "ㅕ", "ㅑ", "ㅐ", "ㅔ", "7", "8", "9",
			"ㅁ", "ㄴ", "ㅇ", "ㄹ", "ㅎ", "ㅗ", "ㅓ", "ㅏ", "ㅣ", ";", "4", "5", "6",
			"ㅋ", "ㅌ", "ㅊ", "ㅍ", "ㅠ", "ㅜ", "ㅡ", ",", "Enter", "0", "1", "2", "3",
	};
	
	public KeyPad() {
		tField = new JTextField(39);
		panel = new JPanel();		
		panel.setLayout(new GridLayout(0, 13, 3, 3)); // 행 자동계산, 열, hG,vG
		buttons = new JButton[39];
		int index = 0;

		for (int rows = 0; rows < 3; rows++) {
			for (int cols = 0; cols < 13; cols++) {
				buttons[index] = new JButton(buttonLabels[index]);
				buttons[index].addActionListener(this);
				if( rows == 2 ) {
					if (cols >= 9)
						buttons[index].setForeground(Color.red);
					else
						buttons[index].setForeground(Color.blue);
				}
				else {
					if (cols >= 10)
						buttons[index].setForeground(Color.red);
					else
						buttons[index].setForeground(Color.blue);
 
				}
					
				buttons[index].setBackground(Color.yellow);
				panel.add(buttons[index]);
				index++;
			}
		}
		add(tField, BorderLayout.NORTH);
		add(panel, BorderLayout.CENTER);
		setVisible(true);
		pack();
	}
		public void actionPerformed(ActionEvent e) {
			String actionCommand = e.getActionCommand();
			
			if (actionCommand == "Enter") {
				tField.setText(tField.getText()+"\n");
				
			}
			else {
			tField.setText(tField.getText()+actionCommand);
		
			}
		}
		public static void main(String args[]) {
			KeyPad k = new KeyPad();
		}
	}

