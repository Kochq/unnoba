public class ColaDoble {
    private Cola cola1;
    private Cola cola2;

	public Cola getCola1() {
		return cola1;
	}
	public void setCola1(Cola cola1) {
		this.cola1 = cola1;
	}

	public Cola getCola2() {
		return cola2;
	}
	public void setCola2(Cola cola2) {
		this.cola2 = cola2;
	}

    public void encolar(int elemento) {
        if(getCola1().size() <= getCola2().size()) {
            this.getCola1().encolar(elemento);
        } else {
            this.getCola2().encolar(elemento);
        }
    }

    public int desencolar() {
        if(getCola1().size() >= getCola2().size()) {
            return this.getCola1().desencolar();
        } else {
            return this.getCola2().desencolar();
        }
    }

    public boolean isEmpty() {
        return this.getCola1().isEmpty() && this.getCola2().isEmpty();
    }

    public int first() {
        if(getCola1().size() >= getCola2().size()) {
            return this.getCola1().last();
        } else {
            return this.getCola2().last();
        }
    }

    public int last() {
        if(getCola2().size() >= getCola1().size()) {
            return this.getCola2().last();
        } else {
            return this.getCola1().last();
        }
    }

    public int size() {
        return this.getCola1().size() + this.getCola2().size();
    }
}
