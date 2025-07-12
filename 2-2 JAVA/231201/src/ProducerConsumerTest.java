class synchSM {
	private int synchSMSize = 10; 
	int stockSM =0;
	int sum = 0;
	
	public synchronized void producer(String producerName, int producerNo) {
		while (stockSM==synchSMSize) {
			try { wait();
			}catch (InterruptedException e) {}
		}
		stockSM++;
		System.out.println(producerName+ "("+producerNo+")"+" stockSM=" + stockSM);
		if (producerName == "p1") {
			sum = sum + producerNo;
		}
		else if (producerName == "p2") {
			sum = sum + producerNo+5;
		}
		System.out.println(" sum=" + sum);
		notifyAll();
	}
	
	public synchronized void comsumer(String consumerName, int consumerNo) {
		while ( stockSM ==0) {
			try { wait();
			} catch (InterruptedException e) {}
		}
		stockSM--;
		System.out.println(consumerName+ "("+consumerNo+")"+" stockSM=" + stockSM);
		notifyAll();
	}
}

class Producer implements Runnable {
	private synchSM synchsm;
	String producerName;
	public Producer(synchSM synchsm, String producerName) {
		this.synchsm = synchsm;
		this.producerName= producerName;
	}
	
	public void run() {
		for (int i = 1; i <=5; i++) {
			synchsm.producer(producerName, i);
			try {
			Thread.sleep((int) (Math.random() * 1));
			} catch (InterruptedException e) {}
		} 
	} 
}

class Consumer implements Runnable { // 쓰레드를 생성하고 실행
	private synchSM synchsm;
	String consumerName;
	public Consumer(synchSM synchsm, String consumerName) {
		this.synchsm= synchsm;
		this.consumerName= consumerName;
	}
	public void run() {
		for (int i = 1; i <= 3; i++) {
			synchsm.comsumer(consumerName, i);
			try {
				Thread.sleep((int) (Math.random() * 100));
			} catch (InterruptedException e) {}
		}
	}
}



public class ProducerConsumerTest {
	public static void main(String[] args) {
		synchSM synchsm = new synchSM();
		Thread p1 = new Thread(new Producer(synchsm, "p1"));
		Thread p2 = new Thread(new Producer(synchsm, "p2"));
		p1.start(); 
		p2.start();
	}
}

