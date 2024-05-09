import java.util.NoSuchElementException;
import java.util.Vector;

public class Cola {
    private Vector<Integer> elementos = new Vector<>();

	public Vector<Integer> getElementos() {
		return elementos;
	}
	public void setElementos(Vector<Integer> elementos) {
		this.elementos = elementos;
	}

    public void encolar(int elemento) {
        this.getElementos().add(elemento);
    }

    public int desencolar() {
        if(!this.isEmpty()) {
            int primer = this.getElementos().elementAt(0);
            this.getElementos().removeElementAt(0);
            return primer;
        }

        throw new NoSuchElementException("La cola está vacía. No se puede desencolar.");
    }

    public boolean isEmpty() {
        return this.getElementos().isEmpty();
    }

    public int first() {
        return this.getElementos().firstElement();
    }

    public int last() {
        return this.getElementos().lastElement();
    }

    public int size() {
        return this.getElementos().size();
    }

    public static void main(String[] args) {
        Cola cola = new Cola();

        cola.encolar(12);
        cola.encolar(14);
        cola.encolar(16);
        cola.encolar(18);
        cola.encolar(20);

        System.out.println(cola.desencolar());
        System.out.println(cola.desencolar());
        System.out.println(cola.isEmpty());
        System.out.println(cola.desencolar());
        System.out.println(cola.desencolar());
        System.out.println(cola.desencolar());
        System.out.println(cola.isEmpty());
        System.out.println(cola.desencolar());
    }
}
