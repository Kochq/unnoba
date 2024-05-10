public class LocomotoraFuel extends Locomotora {
    static private int consumo;

	public LocomotoraFuel(double peso, double potenciaMax, double velocidadMax) {
        super(peso, potenciaMax, velocidadMax);
    }

    public static int getConsumo() {
		return consumo;
	}
	public static void setConsumo(int consumo) {
		LocomotoraFuel.consumo = consumo;
	}

    public double cantidadDeLitrosNecesarios(int km) {
        return LocomotoraFuel.getConsumo() * km;
    }
}
