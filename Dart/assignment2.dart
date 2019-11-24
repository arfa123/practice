import 'dart:io';

class Person {
	String name;
	String age;
	String email;
	String phoneNumber;
	String address;

	Person({this.name="", this.age="", this.email="", this.phoneNumber="", this.address=""});
}

class Task {
	List students = [];
	List teachers = [];

	menu() {
		print("\nPress 1 to Add Student\nPress 2 to Add Teacher\nPress 3 to List Students\nPress 4 to List Teachers\nPress 5 to Search student\nPress 6 to Search teacher");
		String selectedOption = stdin.readLineSync();
		switch(selectedOption) {
			case "1":
				this.addStudent();
				break;
			case "2":
				this.addTeacher();
				break;
			case "3":
				this.listStudents();
				break;
			case "4":
				this.listTeachers();
				break;
			case "5":
				this.searchStudent();
				break;
			case "6":
				this.searchTeacher();
				break;
			default:
				print("\nInvalid option selected. Try again");
				break;
		}
	}

	addStudent() {
		print("\nEnter Student name: ");
		String name = stdin.readLineSync();
		print("\nEnter Student age: ");
		String age = stdin.readLineSync();
		print("\nEnter Student email: ");
		String email = stdin.readLineSync();
		print("\nEnter Student phone number: ");
		String phoneNumber = stdin.readLineSync();
		print("\nEnter Student address: ");
		String address = stdin.readLineSync();
		print("\nEnter Student roll no: ");
		String rollNo = stdin.readLineSync();
		print("\nEnter Student batch: ");
		String batch = stdin.readLineSync();

		Student newStudent = new Student(name, age, email, phoneNumber, address, rollNo, batch);
		students.add(newStudent);
	}

	addTeacher() {
		print("\nEnter Teacher name: ");
		String name = stdin.readLineSync();
		print("\nEnter Teacher age: ");
		String age = stdin.readLineSync();
		print("\nEnter Teacher email: ");
		String email = stdin.readLineSync();
		print("\nEnter Teacher phone number: ");
		String phoneNumber = stdin.readLineSync();
		print("\nEnter Teacher address: ");
		String address = stdin.readLineSync();
		print("\nEnter Teacher roll no: ");
		String rollNo = stdin.readLineSync();
		print("\nEnter Teacher batch: ");
		String batch = stdin.readLineSync();

		Teacher newTeacher = new Teacher(name, age, email, phoneNumber, address, rollNo, batch);
		teachers.add(newTeacher);
	}

	listStudents() {
		print("\nList of Students: ");
		students.forEach((student) => print("\nName: ${student.name}, Age: ${student.age}, Email: ${student.email}, Phone Number: ${student.phoneNumber}, Address: ${student.address}, Roll No: ${student.rollNo}, Batch: ${student.batch}"));
	}

	listTeachers() {
		print("\nLsit of Teachers: ");
		teachers.forEach((teacher) => print("\nName: ${teacher.name}, Age: ${teacher.age}, Email: ${teacher.email}, Phone Number: ${teacher.phoneNumber}, Address: ${teacher.address}, Roll No: ${teacher.rollNo}, Batch: ${teacher.batch}"));
	}

	searchStudent() {
		print("\nEnter Student name to find: ");
		String name = stdin.readLineSync();
		Student findedStudent = students.firstWhere((student) => student.name == name, orElse: () => print("\nNo Student found"));
		if(findedStudent != null) {
			print("\nName: ${findedStudent.name}, Age: ${findedStudent.age}, Email: ${findedStudent.email}, Phone Number: ${findedStudent.phoneNumber}, Address: ${findedStudent.address}, Roll No: ${findedStudent.rollNo}, Batch: ${findedStudent.batch}");
		}
	}

	searchTeacher() {
		print("\nEnter Teacher name to find: ");
		String name = stdin.readLineSync();
		Teacher findedTeacher = students.firstWhere((student) => student.name == name, orElse: () => print("\nNo Teacher found"));
		if(findedTeacher != null) {
			print("\nName: ${findedTeacher.name}, Age: ${findedTeacher.age}, Email: ${findedTeacher.email}, Phone Number: ${findedTeacher.phoneNumber}, Address: ${findedTeacher.address}, Roll No: ${findedTeacher.rollNo}, Batch: ${findedTeacher.batch}");
		}
	}
}

class Student extends Person {
	String rollNo;
	String batch;

	Student(String name, String age, String email, String phoneNumber, String address, this.rollNo, this.batch) : super(name:name, age:age, email:email, phoneNumber:phoneNumber, address:address);
}

class Teacher extends Person {
	String rollNo;
	String batch;

	Teacher(String name, String age, String email, String phoneNumber, String address, this.rollNo, this.batch) : super(name:name, age:age, email:email, phoneNumber:phoneNumber, address:address);
}

void main() {
	print("\nPress 1 to continue");
	String option = stdin.readLineSync();
	Task task1 = Task();
	while(option == "1") {
		task1.menu();
		print("\nPress 1 to continue");
		option = stdin.readLineSync();
	}
}