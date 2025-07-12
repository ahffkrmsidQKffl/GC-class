
public class CircleTest {

	public static void main(String[] args) {
		Circle obj = new Circle();
		obj.radius = 100;
		obj.color = "blue";
		double area = obj.getArea();
		System.out.println("원의 면적=" + area);
		
		Circle objThis = new Circle();
		Circle objThis2 = new Circle(1);
		
		double areaThis = objThis.getArea();
		double areaThis2 = objThis2.getArea();
		
		System.out.println("radius 100의 원의 면적=" + area);
		System.out.println("radius 10의 원의 면적=" + areaThis);
		System.out.println("radius 1의 원의 면적=" + areaThis2);

	}

}

class Circle {
	public int radius;
	public String color;
	public double getArea() {
		return 3.14*radius*radius;
	}
	
	public Circle(int radius) {
		this.radius = radius;
	}
	
	public Circle() {
		this(10);
	}
}
