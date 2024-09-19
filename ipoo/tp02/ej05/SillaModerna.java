public class SillaModerna extends Silla {
    public SillaModerna(String material, String color) {
        super(material, color);
    }

    public String toString() {
        return "Silla moderna de " + this.getMaterial() + " color " + this.getColor();
    }
}
