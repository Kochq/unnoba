public class Auto {
    private String marca;
    private String modelo;
    private double valuacion;

    public Auto(String marca, String modelo, double valuacion) {
        this.setMarca(marca);
        this.setModelo(modelo);
        this.setValuacion(valuacion);
    }

	public String getMarca() {
		return marca;
	}
	public void setMarca(String marca) {
		this.marca = marca;
	}

	public String getModelo() {
		return modelo;
	}
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public double getValuacion() {
		return valuacion;
	}
	public void setValuacion(double valuacion) {
		this.valuacion = valuacion;
	}
}
