package tp03.ej07;

public class PizzaMargaritaBuilder implements PizzaBuilder {
    private Pizza pizza = new Pizza();

    public PizzaMargaritaBuilder() { }

    public Pizza getPizza() {
        return pizza;
    }
    public void setPizza(Pizza pizza) {
        this.pizza = pizza;
    }

	@Override
	public void ponerMasa(String tipoMasa) {
        this.getPizza().setTipoMasa(tipoMasa);
	}

	@Override
	public void ponerSalsa(Boolean tieneSalsa) {
        this.getPizza().setSalsa(tieneSalsa);
	}

	@Override
	public void ponerQueso(String tipoQueso) {
        this.getPizza().setTipoQueso(tipoQueso);
	}

	@Override
	public void ponerPepperoni(Boolean tienePepperoni) {
        this.getPizza().setPepperoni(tienePepperoni);
	}

	@Override
	public void ponerChampiñones(Boolean tieneChampiñones) {
        this.getPizza().setChampiñones(tieneChampiñones);
	}

	@Override
	public Pizza construirPizza() {
        return this.getPizza();
	}
}
