import javax.swing.*;
import java.util.*;

class Account {
    int ano;
    String anm;
    int aopnbal;
    Vector<Integer> tls;
    boolean astate;

    Account() {
        ano = 0;
        anm = new String();
        aopnbal = 0;
        astate = true;
        tls = new Vector<Integer>();
    }

    int balEnq() {
        int bal = aopnbal, amt = 0;
        int i = 0, n = tls.size();
        while (i < n) {
            Integer obj = tls.get(i);
            amt = obj.intValue();
            bal += amt;
            i++;
        }
        return bal;
    }

    void set(int no) {
        ano = no;
        anm = JOptionPane.showInputDialog(null, "A/C Holder Name: ");
        try {
            aopnbal = Integer.parseInt(JOptionPane.showInputDialog(null, "OPening Balance"));
        } catch (Exception e) {
            aopnbal = 500;
        }
        astate = true;
    }

    public String toString() {
        String a = "\nA/C No: " + ano + "\nName: " + anm + "\nOpening Amt: " + aopnbal + "\nTransactions: " + tls
                + "\nClosing Balance: " + balEnq() + "\nState: " + astate;
        return a;
    }

    void display() {
        JOptionPane.showMessageDialog(null, toString());
    }

    void delRecord() {
        astate = false;
    }

    void deposit() {
        int amt = 0;
        try {
            amt = Integer.parseInt(JOptionPane.showInputDialog(null, "Deposit Amount"));
        } catch (Exception e) {
            amt = -1;
        }
        if (amt <= 0) {
            JOptionPane.showMessageDialog(null, "Invalid");
            return;
        }
        tls.add(amt);
    }

    void withdraw() {
        int amt = 0;
        try {
            amt = Integer.parseInt(JOptionPane.showInputDialog(null, "Withdraw Amount"));
        } catch (Exception e) {
            amt = -1;
        }
        if (amt <= 0) {
            JOptionPane.showMessageDialog(null, "Invalid");
            return;
        }
        int bal = balEnq() - amt;
        if (bal < 500) {
            JOptionPane.showMessageDialog(null, "Below 500");
            return;
        }

        tls.add(-amt);
    }

    void closeAccount() {
        int bal = balEnq();
        tls.add(-bal);
        delRecord();
    }
}
