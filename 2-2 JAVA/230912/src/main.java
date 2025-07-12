import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // Scanner 객체 생성
		System.out.print("세탁기 초기상태 byte를 입력하세요(0~127) : "); // 줄을 바꾸지 않는다.
		int status = sc.nextInt();
		String str = Integer.toBinaryString(status);
		System.out.print("세탁기 입력 상태 = " + str + "\n");
		System.out.print("전기가 연결되었는지 = " + ((status>>0 & 0b00000001)==0b00000001) + "\n");
		System.out.print("수도가 연결되었는지 = " + ((status>>1 & 0b00000001)==0b00000001) + "\n");
		System.out.print("문이 닫혀있는지 = " + ((status>>2 & 0b00000001)==0b00000001) + "\n");
		System.out.print("빨래가 들어있는지 = " + ((status>>3 & 0b00000001)==0b00000001) + "\n");
		System.out.print("빨래가 너무 많이 들어있지 않은지 = " + ((status>>4 & 0b00000001)==0b00000001) + "\n");
		System.out.print("배수관이 막혀 있지 않은지= " + ((status>>5 & 0b00000001)==0b00000001) + "\n");
		System.out.print("빨래가 한쪽에 치우쳐 있지 않은지 = " + ((status>>6 & 0b00000001)==0b00000001) + "\n");
		
		
	}

}
