package Inheritance;


public class PrimeMembers extends Member{
    int joiningYear;
    int joiningFees;
    boolean isActive;

    PrimeMembers(String name, int age, String phone_no, String address, double salary,int joinYear,
                 int joinFees, boolean isActive ) {
        super(name, age, phone_no, address, salary);

        this.joiningYear = joinYear;
        this.joiningFees = joinFees;
        this.isActive = isActive;
    }

    void displayAll() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Phone No: " + phone_no);
        System.out.println("Address: " + address);
        System.out.println("Salary: " + salary);
        System.out.println("Joining Year: " + joiningYear);
        System.out.println("Joining Fees: " + joiningFees);
    }

    public int getJoiningYear() {
        return joiningYear;
    }

    public void setJoiningYear(int joiningYear) {
        this.joiningYear = joiningYear;
    }

    public int getJoiningFees() {
        return joiningFees;
    }

    public void setJoiningFees(int joiningFees) {
        this.joiningFees = joiningFees;
    }

    public boolean isActive() {
        return isActive;
    }

    public void setActive(boolean isActive) {
        this.isActive = isActive;
    }





}
