public class MesitaVictoriana extends Mesita {
    public MesitaVictoriana(String material, String color) {
        super(material, color);
    }

    public String toString() {
        return "Mesita victoriana de " + this.getMaterial() + " de color " + this.getColor();
    }
}
