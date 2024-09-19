public class SofaVictoriano extends Sofa {
    public SofaVictoriano(String material, String color) {
        super(material, color);
    }

    public String toString() {
        return "Sofá victoriano de " + this.getMaterial() + " color " + this.getColor();
    }
}
