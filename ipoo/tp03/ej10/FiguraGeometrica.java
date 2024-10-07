public interface FiguraGeometrica {
    public double area();
    public void mover(int value, Direccion direccion);
    public String nombre();
    public String color();

    default void imprimir() {
        System.out.println(nombre() + " de color " + color() + " con area " + area());
    }
}
