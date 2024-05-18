import java.util.Date;

abstract public class Poliza {
    private String nombreAsegurado;
    private Date fechaAlta;
    private Date fechaValidez;
    private Auto auto;

    public Poliza(String nombreAsegurado, Date fechaAlta, Auto auto) {
        this.setNombreAsegurado(nombreAsegurado);
        this.setFechaAlta(fechaAlta);
        this.setFechaValidez(new Date(fechaAlta.getTime() + 31536000));
        this.setAuto(auto);
    }

	public String getNombreAsegurado() {
		return nombreAsegurado;
	}
	public void setNombreAsegurado(String nombreAsegurado) {
		this.nombreAsegurado = nombreAsegurado;
	}

	public Date getFechaAlta() {
		return fechaAlta;
	}
	public void setFechaAlta(Date fechaAlta) {
		this.fechaAlta = fechaAlta;
	}

	public Date getFechaValidez() {
		return fechaValidez;
	}
	public void setFechaValidez(Date fechaValidez) {
		this.fechaValidez = fechaValidez;
	}

	public Auto getAuto() {
		return auto;
	}
	public void setAuto(Auto auto) {
		this.auto = auto;
	}

    abstract public double calcularValorPoliza();
}
