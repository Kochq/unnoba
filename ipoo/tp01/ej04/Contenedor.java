import java.util.ArrayList;

public class Contenedor extends Producto {
    private float valor;
	private float peso;
    private String id;
    private String paisDestino;
	private float pesoMaximo;
    private ArrayList<Caja> cajas = new ArrayList<Caja>();
    private ArrayList<ProductoSimple> productosSimples = new ArrayList<ProductoSimple>();

    public Contenedor(String id, String paisDestino, float pesoMaximo) {
        this.setValor(0);
        this.setPeso(0);
        this.setId(id);
        this.setPaisDestino(paisDestino);
        this.setPesoMaximo(pesoMaximo);
    }

	@Override
	public float getValor() {
        return this.calcularValorTotal();
	}
    public void setValor(float valor) {
		this.valor = valor;
	}

	@Override
	public float getPeso() {
        return this.calcularPesoTotal();
	}
    public void setPeso(float peso) {
        this.peso = peso;
    }

    public String getId() {
		return id;
	}
	public void setId(String id) {
		this.id = id;
	}

	public String getPaisDestino() {
		return paisDestino;
	}
	public void setPaisDestino(String paisDestino) {
		this.paisDestino = paisDestino;
	}

	public float getPesoMaximo() {
		return pesoMaximo;
	}
	public void setPesoMaximo(float pesoMaximo) {
		this.pesoMaximo = pesoMaximo;
	}

	public ArrayList<Caja> getCajas() {
		return cajas;
	}
	public void setCajas(ArrayList<Caja> cajas) {
		this.cajas = cajas;
	}

	public ArrayList<ProductoSimple> getProductosSimples() {
		return productosSimples;
	}
	public void setProductosSimples(ArrayList<ProductoSimple> productosSimples) {
		this.productosSimples = productosSimples;
	}

    public void agregarCaja(Caja caja) {
        this.getCajas().add(caja);
    }

    public void agregarProductoSimple(ProductoSimple producto) {
        this.getProductosSimples().add(producto);
    }

    public float calcularPesoTotal() {
        float pesoTotal = 0;

        for (Caja c : this.getCajas()) {
            pesoTotal += c.calcularPesoTotal();
        }
        for (ProductoSimple p : this.getProductosSimples()) {
            pesoTotal += p.getPeso();
        }

        return pesoTotal;
    }

    public float calcularValorTotal() {
        float valorTotal = 0;

        for (Caja c : this.getCajas()) {
            valorTotal += c.calcularValorTotal();
        }
        for (ProductoSimple p : this.getProductosSimples()) {
            valorTotal += p.getValor();
        }

        return valorTotal;
    }
}
