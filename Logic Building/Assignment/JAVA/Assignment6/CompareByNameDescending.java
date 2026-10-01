package Utils;
import Employee_Assignment.Employee;

//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//


import java.util.Comparator;

public class CompareByNameDescending implements Comparator<Employee> {
    public CompareByNameDescending() {
    }

    public int compare(Employee o1, Employee o2) {
        int compareResult = o1.getName().compareTo(o2.getName());
        if (compareResult == 0) {
            return 0;
        } else {
            return compareResult >= 1 ? -1 : 1;
        }
    }
}
