public class LocomotoraElectrica extends Locomotora {
    static private int consumo;

    public LocomotoraElectrica(double peso, double potenciaMax, double velocidadMax) {
        super(peso, potenciaMax, velocidadMax);
    }

    public static int getConsumo() {
		return consumo;
	}
	public static void setConsumo(int consumo) {
		LocomotoraElectrica.consumo = consumo;
	}

    public double cantidadDeLitrosNecesarios(int km) {
        return LocomotoraElectrica.getConsumo() * km;
    }
}
