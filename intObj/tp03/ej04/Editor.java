import java.util.Vector;

public class Editor {
    private Vector<Figura> figuras = new Vector<Figura>();

    public Vector getFiguras() {
        return figuras;
    }

    public void setFiguras(Vector figuras) {
        this.figuras = figuras;
    }

    public void addFigura(Figura figura) {
        getFiguras().addElement(figura);
    }
}
