package UpdUAS;

public class Calc extends AbsCalc {
    Calc(double a, double b){
        this.a = a;
        this.b = b;
    }

    @Override
    public double addition(double a, double b){
        return a + b;
    }

    @Override
    public double subtraction(double a, double b){
        return a - b;
    }

    @Override
    public double multiplication(double a, double b){
        return a * b;
    }

    @Override
    public double division(double a, double b){
        return a / b;
    }
}
