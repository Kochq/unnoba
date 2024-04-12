package tp02;

public class Contador {
    private int contador;

    public void iniciar() {
        this.contador = 0;
    }
    public void iniciar(int n) {
        this.contador = n;
    }
    public void sumar(int n) {
        this.contador += n;
    }
    public void sumar() {
        this.contador++;
    }
    public void restar(int n) {
        this.contador -= n;
    }
    public void restar() {
        this.contador--;
    }
    public void imprimir(){
        System.out.println("Valor del contador: " + this.contador);
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
