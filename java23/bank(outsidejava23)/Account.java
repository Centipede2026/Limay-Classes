package bank;

import mypkg.Util;
import mypkg.DataIO;
import java.io.*;

public class Account implements DataIO, Serializable {
    int no;
    String nm;
    int balance;

    public Account() {
        no = 0;
        balance = 0;
        nm = new String();
    }

    public void setData() {
        no = Util.iInput("A/C No");
        nm = Util.sInput("Name");
        balance = Util.iInput("Balance");
    }

    public void setData(int n) {
        no = n;
        nm = Util.sInput("Name");
        balance = Util.iInput("Balance");
    }

    public String toString() {
        String s = "A/C No:" + no + "\nName" + nm + "\nBalance" + balance;
        return s;
    }

    public void display() {
        Util.display(toString());
    }

    public int getNo() {
        return no;
    }

    public String getName() {
        return nm;
    }

    public int getBalance() {
        return balance;
    }
}