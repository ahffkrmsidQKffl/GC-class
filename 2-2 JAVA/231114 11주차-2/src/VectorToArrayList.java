import java.util.ArrayList;
import java.util.Vector;

public class VectorToArrayList {
	public static void main(String[] args) {
		Vector<String> vector = new Vector<>();
		vector.add("Apple");
		vector.add("Banana");
		vector.add("Orange");
		System.out.println("Vector의 데이터:");
		for (String value : vector) {
			System.out.println(value);
		}
		
		ArrayList<String> arrayList = new ArrayList<>();
		for (int i=0; i<3; i++) {
			arrayList.add(vector.remove(0));
		}
		if (vector.size() == 0) {
			System.out.println("Vector의 데이터는 비었습니다");
		}
		System.out.println("arrayList의 데이터:");
		for (String value : arrayList) {
			System.out.println(value);
		}
	}
}