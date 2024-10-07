import java.util.ArrayList;

public class GraphEditor {
    private ArrayList<Figura> figuras = new ArrayList<Figura>();

    public ArrayList<Figura> getFiguras() {
		return figuras;
	}
	public void setFiguras(ArrayList<Figura> figuras) {
		this.figuras = figuras;
	}

    public void addFigura(Figura f) {
        figuras.add(f);
    }

	public void mover(int value, Direccion dir) {
        for (Figura f : this.getFiguras()) {
            f.mover(value, dir);
        }
    }
}
