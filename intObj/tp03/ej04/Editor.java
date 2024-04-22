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
}
