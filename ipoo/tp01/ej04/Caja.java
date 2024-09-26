package tp01.ej04;

import java.util.ArrayList;

public class Caja {
    private ArrayList<ProductoSimple> productos = new ArrayList<ProductoSimple>();

    public ArrayList<ProductoSimple> getProductos() {
		return productos;
	}
	public void setProductos(ArrayList<ProductoSimple> productos) {
		this.productos = productos;
	}

    public void agregarProducto(ProductoSimple producto) {
        productos.add(producto);
    }

    public float calcularPesoTotal() {
        float pesoTotal = 0;

        for (ProductoSimple p : this.getProductos()) {
            pesoTotal += p.getPeso();
        }

        return pesoTotal;
    }

    public float calcularValorTotal() {
        float valorTotal = 0;

        for (ProductoSimple p : this.getProductos()) {
            valorTotal += p.getValor();
        }

        return valorTotal;
    }
}
