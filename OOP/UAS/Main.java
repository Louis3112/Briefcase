package UAS;

interface IShapeCalc{
    double calcArea();
}

abstract class AbsCalc {
    double a, b;

    public AbsCalc(double a, double b) {
        this.a = a;
        this.b = b;
    }

    public abstract double addition(double a, double b);
    public abstract double subtraction(double a, double b);
    public abstract double multiplication(double a, double b);
    public abstract double division(double a, double b);
}

class Calc extends AbsCalc {

    public Calc(double a, double b) {
        super(a, b);
    }

    @Override
    public double addition(double a, double b) {
        return a + b;
    }

    @Override
    public double subtraction(double a, double b) {
        return a - b;
    }

    @Override
    public double multiplication(double a, double b) {
        return a * b;
    }

    @Override
    public double division(double a, double b) {
        return a / b; 
    }
}

class ScientificCalc extends AbsCalc {

    public ScientificCalc(double a, double b) {
        super(a, b);
    }

    @Override
    public double addition(double a, double b) {
        return a + b;
    }

    @Override
    public double subtraction(double a, double b) {
        return a - b;
    }

    @Override
    public double multiplication(double a, double b) {
        return a * b;
    }

    @Override
    public double division(double a, double b) {
        return a / b; 
    }


    public double power(double a, double b) {
        return Math.pow(a, b);
    }

    public double sqrt(double a) {
        return Math.sqrt(a);
    }
}

class Square implements IShapeCalc {
    double length;

    public Square(double length) {
        this.length = length;
    }

    @Override
    public double calcArea() {
        return length * length;
    }
}

class Circle implements IShapeCalc {
    double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double calcArea() {
        return Math.PI * radius * radius;
    }
}

class Triangle implements IShapeCalc {
    double base, height;

    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

    @Override
    public double calcArea() {
        return 0.5 * base * height;
    }
}

public class Main {
    public static void main(String[] args) {
        Calc standardCalc = new Calc(10, 5);
        System.out.println("Standard Calculator:");
        System.out.println("Add: " + standardCalc.addition(10, 5));
        System.out.println("Subtract: " + standardCalc.subtraction(10, 5));
        System.out.println("Divide: " + standardCalc.division(10, 5));

        ScientificCalc scientificCalc = new ScientificCalc(2, 4);
        System.out.println("\nScientific Calculator:");
        System.out.println("Add: " + scientificCalc.addition(2, 4));
        System.out.println("Subtract: " + scientificCalc.subtraction(2, 4));
        System.out.println("Divide: " + scientificCalc.division(2, 4));
        System.out.println("Power: " + scientificCalc.power(2, 4));
        System.out.println("Square Root: " + scientificCalc.sqrt(2));

        IShapeCalc square = new Square(10);
        IShapeCalc circle = new Circle(7);
        IShapeCalc triangle = new Triangle(10, 5);
        
        System.out.println("\nShape Calculators:");
        System.out.println("Square Area: " + square.calcArea());
        System.out.println("Circle Area: " + circle.calcArea());
        System.out.println("Triangle Area: " + triangle.calcArea());
    }
}
