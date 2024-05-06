class ClaseC extends ClaseB {
    public int m1() {
        return this.m7();
    }

    public int m2() {
        return 5 + super.m3();
    }

    public int m7() {
        return this.m6();
    }

    public static void main(String[] args) {
        ClaseC unObjeto = new ClaseC();

        System.out.println(unObjeto.m1());
        System.out.println(unObjeto.m2());
        System.out.println(unObjeto.m7());

        ClaseB unObjetoB = new ClaseB();

        System.out.println(unObjetoB.m2());
        System.out.println(unObjetoB.m4());
    }
}
