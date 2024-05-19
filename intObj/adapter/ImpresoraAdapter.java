public class ImpresoraAdapter {
    private ImpresoraNueva impresoraNueva;

	public ImpresoraAdapter(ImpresoraNueva impresoraNueva) {
        this.setImpresoraNueva(impresoraNueva);
    }

    public ImpresoraNueva getImpresoraNueva() {
        return impresoraNueva;
    }
    public void setImpresoraNueva(ImpresoraNueva impresoraNueva) {
        this.impresoraNueva = impresoraNueva;
    }

    public void imprimir(String texto) {
        this.getImpresoraNueva().imprimirNuevo(texto);
    }

    public static void main(String[] args) {
        Impresora impresora = new Impresora();
        ImpresoraNueva impresoraNueva = new ImpresoraNueva();
        ImpresoraAdapter adapter = new ImpresoraAdapter(impresoraNueva);

        impresora.imprimir("Hola buenas tardes");
        adapter.imprimir("Hola buenas tardes");
    }
}
