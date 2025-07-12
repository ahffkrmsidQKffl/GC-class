import java.util.*;

public class ArrayListTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<String> list = new ArrayList<>();
		list.add("철수");
		list.add("영희");
		list.add("순신");
		list.add("자영");
		
		ArrayList<String> list2 = new ArrayList<>();
		Scanner sc = new Scanner(System.in);
		while (true) {
			System.out.print("이름을 입력하시오: ");
			String name = sc.next();
			if (name.equals("0"))
				break;
			else
				list2.add(name);               
		}
		for (String obj : list) {
			System.out.print(obj + " ");
		}
		System.out.print("\n");
		
		for (String obj2 : list2) {
			System.out.print(obj2 + " ");
		}
		System.out.print("\n");
		
		int a = list.size();
		int b = list2.size();
		
		for (int i = a - 1; i >= 0; i--) { //챗지피티에 검색했는데 뭔지 모르겠네, 암튼 역순으로 하면 요소를 지우면서 for 루프 돌려도 문제가 안 생긴다네요...
		    for (int j = 0; j < b; j++) {
		        if (list.get(i).equals(list2.get(j))) {
		            list.remove(i);
		            break; 
		        }
		    }
		}
		
		for (String obj3 : list) {
			System.out.print(obj3 + " ");
		}
	}
}
