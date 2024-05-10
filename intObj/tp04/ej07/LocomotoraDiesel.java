public class LocomotoraDiesel extends Locomotora {
    static private int consumo;

    public LocomotoraDiesel(double peso, double potenciaMax, double velocidadMax) {
        super(peso, potenciaMax, velocidadMax);
    }

    public static int getConsumo() {
		return consumo;
	}
	public static void setConsumo(int consumo) {
		LocomotoraDiesel.consumo = consumo;
	}

    public double cantidadDeLitrosNecesarios(int km) {
        return LocomotoraDiesel.getConsumo() * km;
    }
}
