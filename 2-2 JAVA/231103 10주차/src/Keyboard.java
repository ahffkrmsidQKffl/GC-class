import java.awt.*;
import javax.swing.*;

public class Keyboard extends JFrame{
	private JPanel panel;
	private JTextField tField;
	private JButton[] buttons;
	private String[] buttonLabels = { 
			"ㅂ", "ㅈ", "ㄷ", "ㄱ", "ㅅ", "ㅛ", "ㅕ", "ㅑ", "ㅐ", "ㅔ", "7", "8", "9",
			"ㅁ", "ㄴ", "ㅇ", "ㄹ", "ㅎ", "ㅗ", "ㅓ", "ㅏ", "ㅣ", ";", "4", "5", "6",
			"ㅋ", "ㅌ", "ㅊ", "ㅍ", "ㅠ", "ㅜ", "ㅡ", ",", "Enter", "0", "1", "2", "3",
	};
	
	public Keyboard() {
		tField = new JTextField(39);
		panel = new JPanel();
		tField.setText("ㅎ ㅏ ㄴ ㄱ ㅡ ㄹ 2023");
		tField.setEnabled(false); //비활성화, 입력불가
		
		panel.setLayout(new GridLayout(0, 13, 3, 3)); // 행 자동계산, 열, hG,vG
		buttons = new JButton[39];
		int index = 0;

		for (int rows = 0; rows < 3; rows++) {
			for (int cols = 0; cols < 13; cols++) {
				buttons[index] = new JButton(buttonLabels[index]);
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
	
		public static void main(String args[]) {
			Keyboard k = new Keyboard();
		}
	}

