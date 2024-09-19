public class SillaVictoriana extends Silla {
    public SillaVictoriana(String material, String color) {
        super(material, color);
    }

    public String toString() {
        return "Silla victoriana de " + this.getMaterial() + " color " + this.getColor();
    }
}
