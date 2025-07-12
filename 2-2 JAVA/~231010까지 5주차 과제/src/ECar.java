class ECarStation {
	public static int totalCharged=0;
	private	int battery;
	private int neededBattery;
	private	String name;
	
	public ECarStation(String name, int battery) {
		this.name = name;
		this.battery = battery;
		this.neededBattery = 100 - battery;
	}
	
	
	
	void charge() {
		totalCharged = totalCharged + this.neededBattery;
		System.out.print("*" + this.name + "\n배터리: " + this.battery + "%" + "\n충전할 에너지:" + this.neededBattery + "\n충전소에서 충전한 총 에너지: " + totalCharged + "\n");
	}
}

public class ECar {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ECarStation ecar1 = new ECarStation("EV6", 30);
		ECarStation ecar2 = new ECarStation("Ionic6", 50);
		ecar1.charge();
		ecar2.charge();
		
	 	
	}

}
