public class firstProg{
    int myAge;
    public firstProg(String name){
        System.out.println("My name is " + name);
    }
    public void setAge(int age){
        myAge = age;
    }
    public int getAge(){
        System.out.println("My age is " + myAge);
        return myAge;
    }
    public static void main(String []args){
        firstProg myName = new firstProg("Arfa");
        // myName.setAge(26);
        myName.getAge();
        System.out.println("Object: " + myName.myAge);
    }

}