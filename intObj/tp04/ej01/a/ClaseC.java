class ClaseC extends ClaseB {
    public int m1() {
        return this.m4();
    }

    public int m2() {
        return 9;
    }

    public int m7() {
        return super.m6();
    }

    public static void main(String[] args) {
        ClaseC unObjeto = new ClaseC();

        System.out.println(unObjeto.m2());
        System.out.println(unObjeto.m7());
        System.out.println(unObjeto.m1());
        System.out.println(unObjeto.m4());
        System.out.println(unObjeto.m6());
    }
}
