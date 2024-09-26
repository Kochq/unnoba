package tp02.ej02;

public class Partido {
    private Equipo equipo1;
    private Equipo equipo2;
    private Estadio estadio;
    private double valorEntrada;

    public Partido(Equipo equipo1, Equipo equipo2, Estadio estadio, double valorEntrada) {
        this.setEquipo1(equipo1);
        this.setEquipo2(equipo2);
        this.setEstadio(estadio);
        this.setValorEntrada(valorEntrada);
    }

	public Equipo getEquipo1() {
		return equipo1;
	}
	public void setEquipo1(Equipo equipo1) {
		this.equipo1 = equipo1;
	}

	public Equipo getEquipo2() {
		return equipo2;
	}
	public void setEquipo2(Equipo equipo2) {
		this.equipo2 = equipo2;
	}

	public Estadio getEstadio() {
		return estadio;
	}
	public void setEstadio(Estadio estadio) {
		this.estadio = estadio;
	}

	public double getValorEntrada() {
		return valorEntrada;
	}
	public void setValorEntrada(double valorEntrada) {
		this.valorEntrada = valorEntrada;
	}
}
