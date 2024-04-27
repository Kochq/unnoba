import java.util.Vector;

public class Editor {
    private Vector<Figura> figuras = new Vector<Figura>();

    public Vector<Figura> getFiguras() {
        return figuras;
    }

    public void setFiguras(Vector<Figura> figuras) {
        this.figuras = figuras;
    }

    public void addFigura(Figura figura) {
        getFiguras().addElement(figura);
    }

    public double calcularArea() {
        double total = 0;
        for(Figura figura : getFiguras()) {
            total += figura.getArea();
        }

        return total;
    }

    public void pintar() {
        for(Figura figura : getFiguras()) {
            figura.pintar();
        }
    }
}
