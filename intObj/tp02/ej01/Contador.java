 

public class Contador {
    private int contador;

    public int getContador() {
		return contador;
	}
	public void setContador(int contador) {
		this.contador = contador;
	}

    public void iniciar() {
        setContador(0);
    }
    public void iniciar(int n) {
        setContador(n);
    }
    public void sumar(int n) {
        setContador(getContador() + n);
    }
    public void sumar() {
        setContador(getContador() + 1);
    }
    public void restar(int n) {
        setContador(getContador() - n);
    }
    public void restar() {
        setContador(getContador() - 1);
    }
    public void imprimir(){
        System.out.println("Valor del contador: " + getContador());
    }

    public static void main(String[] args){
        Contador contador = new Contador();

        contador.iniciar();
        contador.imprimir();

        contador.sumar(19);
        contador.imprimir();

        contador.restar(8);
        contador.imprimir();

        contador.iniciar(8);
        contador.imprimir();
    }
}
