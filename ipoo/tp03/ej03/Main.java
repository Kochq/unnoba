package tp03.ej03;

public class Main {
    public static void main(String[] args) {
        Punto p1 = new Punto(0, 0);
        Punto p2 = new Punto(0, 10);
        Punto p3 = new Punto(0, 0);
        Punto p4 = new Punto(0, 0);

        Figura r = new Rectangulo(p1, 2, 3);
        Figura c = new Cuadrado(p2, 2);
        Figura t = new Triangulo(p3, 2);
        Figura ci = new Circulo(p4, 2);

        GraphEditor ge = new GraphEditor();

        ge.addFigura(r);
        ge.addFigura(c);
        ge.addFigura(t);
        ge.addFigura(ci);

        ge.mover(12, Direccion.NORTE);
        System.out.println(c.getOrigen().getY());
    }
}
