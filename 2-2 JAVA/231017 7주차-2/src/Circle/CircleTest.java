package Circle;
import java.util.Scanner;

class Circle {
	int radius;
	public Circle(int radius) { this.radius = radius; }
	
	public double CircleNulbe() {
		return this.radius*this.radius*3.14;
	}
	
	public void equals(Circle c1) {
		if (this.radius == c1.radius) {
			System.out.println("두개의 원은 넓이가 같습니다.");
		}
		else {
			System.out.println("두개의 원은 넓이가 다릅니다.");
			if (this.radius > c1.radius) {
				System.out.println("원1는(은) " + this.CircleNulbe()/c1.CircleNulbe() + "배 더 큽니다.");
			}
				
			else {
				System.out.println("원2는(은) " + c1.CircleNulbe()/this.CircleNulbe() + "배 더 큽니다.");
			}
			
		}
		
	}
}

public class CircleTest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int radius1, radius2;
		System.out.print("첫 번째 원의 반지름을 입력하세요: ");
		radius1 = sc.nextInt();
		System.out.print("두 번째 원의 반지름을 입력하세요: ");
		radius2 = sc.nextInt();
		Circle obj1 = new Circle(radius1);
		Circle obj2 = new Circle(radius2);
		obj1.equals(obj2);

	}

}
