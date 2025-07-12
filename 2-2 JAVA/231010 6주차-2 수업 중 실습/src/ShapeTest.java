class Shape {
	int x=5, y=5;
	public void draw() {System.out.println("Shape Draw");}
	}

class Rectangle extends Shape {
	private int width, height;
	
	Rectangle(int x, int y, int w, int h) {
	this.x = x;
	this.y = y;
	this.width = w;
	this.height = h;
	}

	public void draw() {
		System.out.println("(" + x + ", " + y + ") 위치에 가로:" + width + " 세로:" + height + " Rectangle을 그립니다.");
	}
	}

class Triangle extends Shape {
	private int base, height;
	
	Triangle(int x, int y, int b, int h) {
		this.x = x;
		this.y = y;
		this.base = b;
		this.height = h;
	}  
	public void draw() {
		System.out.println("(" + x + ", " + y + ") 위치에 base:" + base + " height:" + height + " Triangle을 그립니다.");
	}
}

class Circle extends Shape {
	private int radius;
	Circle(int x, int y, int r) {
		this.x = x;
		this.y = y;
		this.radius = r;
	}
	  
	public void draw() {
		System.out.println("(" + x + ", " + y + ") 위치에 radius:" + radius + " Circle을 그립니다.");
	}
	}

public class ShapeTest {
	public static void main(String arg[]) {
		Shape[] arrayOfShapes = new Shape[3];
		arrayOfShapes[0] = new Rectangle(6, 6, 10, 20);
		arrayOfShapes[1] = new Triangle(7, 7, 30, 40);
		arrayOfShapes[2] = new Circle(8, 8, 50);
		for (int i = 0; i < arrayOfShapes.length; i++) {
			arrayOfShapes[i].draw();
			}
		}
	}