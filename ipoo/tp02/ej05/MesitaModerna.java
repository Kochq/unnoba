public class MesitaModerna extends Mesita {
    public MesitaModerna(String material, String color) {
        super(material, color);
    }

    public String toString() {
        return "Mesita moderna de " + this.getMaterial() + " de color " + this.getColor();
    }
}
