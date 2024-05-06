class ClaseA {
    public int m1() {
        return 1;
    }

    public int m2() {
        return 90;
    }

    public int m3() {
        return this.m6();
    }

    public int m7() {
        return 5+this.m1();
    }

    public int m6() {
        return 0;
    }
}
