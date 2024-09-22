public class Pizza {
    private String tipoMasa;
    private Boolean salsa;
    private String tipoQueso;
    private Boolean pepperoni;
    private Boolean champiñones;

    public Pizza() {
        this.setTipoMasa("");
        this.setSalsa(false);
        this.setTipoQueso("");
        this.setPepperoni(false);
        this.setChampiñones(false);
    }

    public String toString() {
        return "Pizza [tipoMasa=" + this.getTipoMasa() + ", salsa=" + this.getSalsa() + ", tipoQueso=" + this.getTipoQueso() + ", pepperoni=" + this.getPepperoni() + ", champiñones=" + this.getChampiñones() + "]";
    }

	public String getTipoMasa() {
		return tipoMasa;
	}
	public void setTipoMasa(String tipoMasa) {
		this.tipoMasa = tipoMasa;
	}

	public Boolean getSalsa() {
		return salsa;
	}
	public void setSalsa(Boolean salsa) {
		this.salsa = salsa;
	}

	public String getTipoQueso() {
		return tipoQueso;
	}
	public void setTipoQueso(String tipoQueso) {
		this.tipoQueso = tipoQueso;
	}

	public Boolean getPepperoni() {
		return pepperoni;
	}
	public void setPepperoni(Boolean pepperoni) {
		this.pepperoni = pepperoni;
	}

	public Boolean getChampiñones() {
		return champiñones;
	}
	public void setChampiñones(Boolean champiñones) {
		this.champiñones = champiñones;
	}
}
