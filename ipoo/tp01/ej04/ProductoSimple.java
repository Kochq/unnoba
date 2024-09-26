package tp01.ej04;

public class ProductoSimple extends Producto {
    private String nombre;
    private String fechaVencimiento;
	private float valor;
    private float peso;

    public ProductoSimple(String nombre, String fechaVencimiento, float valor, float peso) {
        this.setNombre(nombre);
        this.setFechaVencimiento(fechaVencimiento);
        this.setValor(valor);
        this.setPeso(peso);
    }

    public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public String getFechaVencimiento() {
		return fechaVencimiento;
	}
	public void setFechaVencimiento(String fechaVencimiento) {
		this.fechaVencimiento = fechaVencimiento;
	}

    public float getValor() {
        return valor;
    }
	public void setValor(float valor) {
		this.valor = valor;
	}

    public float getPeso() {
        return peso;
    }
	public void setPeso(float peso) {
		this.peso = peso;
	}
}
