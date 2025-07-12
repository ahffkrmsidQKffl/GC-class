import javax.swing.JLabel;
import javax.swing.JFrame;
import javax.swing.ImageIcon;

public class CarGame extends JFrame {
	class MyThread extends Thread {
		private JLabel label;
		private int x, y;
		public MyThread(String fname, int x, int y) {
			this.x = x;
			this.y = y;
			label = new JLabel();
			label.setIcon(new ImageIcon(fname));
			label.setBounds(x, y, 100, 100); // 절대 위치와 크기 지정
			add(label);
			label = new JLabel();
			label.setText(fname + "!!!");
			label.setBounds(0, y, 100, 100);
			add(label);
		}
		
		public void run() {
			for (int i = 0; i < 200; i++) {
				x += 10 * Math.random();
				label.setBounds(x, y, 100, 100);
				repaint(); //화면을 갱신하고 다시 그리도록 요청하는 메소드
				try {
					Thread.sleep(100);
				} 
				catch (InterruptedException e) {
					e.printStackTrace();
				}
			}
		}
	}
	
	public CarGame() {
		setTitle("CarRace");
		setSize(600, 200);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setLayout(null);
		(new MyThread("car1.gif", 100, 0)).start();
		//Thread c1 = new MyThread("car1.gif", 100, 0); 
		//c1.start();
		(new MyThread("car2.gif", 100, 50)).start();
		(new MyThread("car3.gif", 100, 100)).start();
		setVisible(true);
	}
	
	public static void main(String[] args) {
		CarGame carGame = new CarGame();
	}
}
