public class CarpinteriaVictoriana extends Carpinteria {
    public CarpinteriaVictoriana() {
        super();
    }

    public Mesita fabricarMesita(String material, String color) {
        return new MesitaVictoriana(material, color);
    }

    public Silla fabricarSilla(String material, String color) {
        return new SillaVictoriana(material, color);
    }

    public Sofa fabricarSofa(String material, String color) {
        return new SofaVictoriano(material, color);
    }
}
