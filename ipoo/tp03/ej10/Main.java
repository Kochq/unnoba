public class Main {
    public static void main(String[] args) {
        Punto p1 = new Punto(0, 0);
        Punto p2 = new Punto(0, 10);
        Punto p3 = new Punto(0, 0);
        Punto p4 = new Punto(0, 0);

        Figura r = new Rectangulo(p1, 2, 3, "Rectangulo", "Rojo");
        Figura c = new Cuadrado(p2, 2, "Cuadrado", "Azul");
        Figura t = new Triangulo(p3, 2,"Triangulo", "Verde");
        Figura ci = new Circulo(p4, 2, "Circulo", "Amarillo");

        GraphEditor ge = new GraphEditor();

        ge.addFigura(r);
        ge.addFigura(c);
        ge.addFigura(t);
        ge.addFigura(ci);

        ge.mover(12, Direccion.NORTE);
        System.out.println(c.getOrigen().getY());

        c.imprimir();
    }
}
