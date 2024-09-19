abstract public class Pan {
    private int porcentajeGrano;

    public Pan() {
        this.comprobarTemperatura();
        this.prepararAguaConSal();
        this.prepararLevadura();
        this.anadirAguaYMezclar();
        this.anadirHarinaYRemover();
        this.amasar();
        this.dejarReposar();
        this.cortarMasa();
        this.llevarAlHorno();
    }

    public int getPorcentajeGrano() {
        return porcentajeGrano;
    }
    public void setPorcentajeGrano(int porcentajeGrano) {
        this.porcentajeGrano = porcentajeGrano;
    }

    abstract public void detallePan();

    public void comprobarTemperatura() {
        System.out.println("Comprobando temperatura");
    }
    public void prepararAguaConSal() {
        System.out.println("Preparando agua con sal");
    }
    public void prepararLevadura() {
        System.out.println("Preparando levadura");
    }
    public void anadirAguaYMezclar() {
        System.out.println("Añadiendo agua y mezclando");
    }
    public void anadirHarinaYRemover() {
        System.out.println("Añadiendo harina y removiendo");
    }
    public void amasar() {
        System.out.println("Amasando");
    }
    public void dejarReposar() {
        System.out.println("Dejando reposar");
    }
    public void cortarMasa() {
        System.out.println("Cortando masa");
    }
    public void llevarAlHorno() {
        System.out.println("Llevando al horno");
    }

    public void hacerPan() {
        comprobarTemperatura();
        prepararAguaConSal();
        prepararLevadura();
        anadirAguaYMezclar();
        anadirHarinaYRemover();
        amasar();
        dejarReposar();
        cortarMasa();
        llevarAlHorno();
    }
}
