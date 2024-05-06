class ClaseB extends ClaseA {
    public int m1() {
        return 8;
    }

    public int m4() {
        return this.m7() + super.m3();
    }

    public int m3() {
        return 1;
    }

    public int m6() {
        return this.m2();
    }
}
