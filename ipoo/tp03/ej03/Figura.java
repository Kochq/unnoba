abstract public class Figura implements FiguraGeometrica {
    private Punto origen;

    public Figura(Punto origen) {
        this.setOrigen(origen);
    }

    public Punto getOrigen() {
        return origen;
    }
    public void setOrigen(Punto origen) {
        this.origen = origen;
    }

    @Override
    public void mover(int value, Direccion direccion) {
        switch(direccion) {
            case NORTE:
                this.getOrigen().setY(this.getOrigen().getY() + value);
                break;
            case SUR:
                this.getOrigen().setY(this.getOrigen().getY() - value);
                break;
            case ESTE:
                this.getOrigen().setX(this.getOrigen().getX() + value);
                break;
            case OESTE:
                this.getOrigen().setX(this.getOrigen().getX() - value);
                break;
        }
    }

    abstract public double area();
}
