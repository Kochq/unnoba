import java.util.NoSuchElementException;
import java.util.Vector;

public class Pila {
    private Vector<Integer> elementos = new Vector<>();

	public Vector<Integer> getElementos() {
		return elementos;
	}
	public void setElementos(Vector<Integer> elementos) {
		this.elementos = elementos;
	}

    public void apilar(int elemento) {
        this.getElementos().add(elemento);
    }

    public int desapilar() {
        if(!this.isEmpty()) {
            int lastIndex = this.getElementos().size() - 1;
            int elementoEliminado = this.getElementos().elementAt(lastIndex);
            this.getElementos().removeElementAt(lastIndex);

            return elementoEliminado;
        }

        throw new NoSuchElementException("La cola está vacía. No se puede desencolar.");
    }

    public boolean isEmpty() {
        return this.getElementos().isEmpty();
    }

    public int top() {
        return this.getElementos().lastElement();
    }

    public int size() {
        return this.getElementos().size();
    }

    public static void main(String[] args) {
        Pila pilita = new Pila();

        pilita.apilar(12);
        pilita.apilar(14);
        pilita.apilar(16);
        pilita.apilar(18);
        pilita.apilar(20);

        System.out.println(pilita.size());
        System.out.println(pilita.desapilar());
        System.out.println(pilita.desapilar());
        System.out.println(pilita.size());
        System.out.println(pilita.isEmpty());
        System.out.println(pilita.desapilar());
        System.out.println(pilita.desapilar());
        System.out.println(pilita.desapilar());
        System.out.println(pilita.isEmpty());
        System.out.println(pilita.desapilar());
    }
}
