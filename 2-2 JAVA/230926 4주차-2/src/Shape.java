class Shape {
	protected int x, y;
	void print() {
		System.out.println("x좌표: " + x + " y좌표: " + y);
	}
}
public class Rectangle extends Shape {
int width, height;
double calcArea() {
return width * height;
}
void draw() {
System.out.println("(" + x + "," + y + ") 위치에 " + "가로: " + width
+ " 세로: " + height);
}
}
