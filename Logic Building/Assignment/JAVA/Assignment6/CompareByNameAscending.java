package Utils;

import java.util.Comparator;
import Employee_Assignment.Employee;


    //
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//






    public class CompareByNameAscending implements Comparator<Employee> {
        public CompareByNameAscending() {
        }

        public int compare(Employee o1, Employee o2) {
            int compareResult = o1.getName().compareTo(o2.getName());
            if (compareResult == 0) {
                return 0;
            } else {
                return compareResult >= 1 ? 1 : -1;
            }
        }
    }


