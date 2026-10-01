package Inheritance;


public class Program {

    public static void main(String[] args) {
        //Question 1
        Parent pObj = new Parent();
        pObj.displayParent();
        Child cObj = new Child();
        cObj.displayChild();
        cObj.displayParent();

        System.out.println();

        //Question 2
//		System.out.println("Enter Details for Member:");
//		String name = ConsoleInput.getString();
//		int age = ConsoleInput.getInteger();
//		String phone_no = ConsoleInput.getString();
//		String address = ConsoleInput.getString();
//		double salary = ConsoleInput.getDouble();
//
//		Member member = new Member(name, age, phone_no, address, salary);
//		member.displayMemberDetails();
//
//		System.out.println();
//		//Question 3
//		PrimeMembers pMember = new PrimeMembers(name, age, phone_no, address, salary, 2004, 52000, true);
//		pMember.displayAll();
//
//		System.out.println();

        //Question 4
        Rectangle rObj = new Rectangle(4, 5);
        System.out.println("Area of rectangle:" + rObj.getAreaRectangle());
        System.out.println("Perimeter of rectangle:" + rObj.getPerimeterRectangle());
        Square sObj = new Square(3, 6, 6);
        System.out.println("Area of Square:" + sObj.getAreaSquare());
        System.out.println("Perimeter of Square:" + sObj.getPerimeterSquare());

        //Question 5
        Square sObj1 = new Square(3, 4, 5);
        sObj1.displayShape();
        sObj1.displayRectangle();
    }

}