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

class AccountList {
    LinkedList<Account> ls;
    Account ref;

    AccountList() {
        ref = null;
        ls = new LinkedList<Account>();
    }

    int search(int no) {
        int i = 0, n = ls.size();
        while (i < n) {
            ref = ls.get(i);
            if (ref.ano == no)
                break;
            i++;
        }
        if (i == n) {
            ref = null;
            return -1;
        } else
            return i;
    }

    void add() {
        int no = 0;
        try {
            no = Integer.parseInt(JOptionPane.showInputDialog(null, "A/C No"));
        } catch (Exception e) {
        }
        int pos = search(no);
        if (pos >= 0)
            JOptionPane.showMessageDialog(null, "Record Exists");
        else {
            ref = new Account();
            ref.set(no);
            ls.add(ref);
        }
    }

    void mod() {
        int no = 0;
        try {
            no = Integer.parseInt(JOptionPane.showInputDialog(null, "A/C No"));
        } catch (Exception e) {
        }
        int pos = search(no);
        if (pos == -1)
            JOptionPane.showMessageDialog(null, "Record Not Exists");
        else
            ref.set(no);
    }

    void del() {
        int no = 0;
        try {
            no = Integer.parseInt(JOptionPane.showInputDialog(null, "A/C No"));
        } catch (Exception e) {
        }

        int pos = search(no);
        if (pos == -1 || ref.astate == false)
            JOptionPane.showMessageDialog(null, "Record Not Exists");
        else
            ref.closeAccount();
    }

    void transact() {
        int no = 0;
        try {
            no = Integer.parseInt(JOptionPane.showInputDialog(null, "A/C No"));
        } catch (Exception e) {
        }
        int pos = search(no);
        if (pos == -1 || ref.astate == false) {
            JOptionPane.showMessageDialog(null, "Record Not Exists");
            return;
        }
        int opt = JOptionPane.showOptionDialog(null, "Choose Option", "Transaction", JOptionPane.YES_OPTION,
                JOptionPane.INFORMATION_MESSAGE, null, new String[] { "Depo", "With", "Balance", "Back" }, 0);
        switch (opt) {
            case 0:
                ref.deposit();
                break;
            case 1:
                ref.withdraw();
            case 2:
                JOptionPane.showMessageDialog(null, "Balance:" + ref.balEnq());
        }
    }

    void menu() {
        int opt, sv, res;
        String[] option = new String[] { "Add", "Mod", "Del", "Search", "Transaction", "Exit" };
        while (true) {
            opt = JOptionPane.showOptionDialog(null, "Choose One", "Saving A/C", JOptionPane.YES_OPTION,
                    JOptionPane.INFORMATION_MESSAGE, null, option, 0);
            if (opt == 6)
                break;
            switch (opt) {
                case 0:
                    add();
                    break;
                case 1:
                    mod();
                    break;
                case 2:
                    del();
                    break;
                case 3:
                    try {
                        sv = Integer.parseInt(JOptionPane.showInputDialog(null, "A/C No"));
                    } catch (Exception e) {
                        continue;
                    }
                    res = search(sv);
                    if (res == -1)
                        JOptionPane.showMessageDialog(null, "Invalid A/C");
                    else
                        ref.display();
                    break;
                case 4:
                    transact();
                    break;
                case 5:
                    int i = 0, n = ls.size();
                    while (i < n) {
                        ref = ls.get(i);
                        ref.display();
                        i++;
                    }
            }
        }
    }

    public static void main(String[] args) {
        AccountList a = new AccountList();
        a.menu();
    }
}