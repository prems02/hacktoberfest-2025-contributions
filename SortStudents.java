import java.util.*;

class Student implements Comparable<Student> {
    String name;
    int marks;

    Student(String name, int marks) {
        this.name = name;
        this.marks = marks;
    }

    public int compareTo(Student other) {
        return Integer.compare(other.marks, this.marks); // descending order
    }
}

public class SortStudents {
    public static void main(String[] args) {
        List<Student> students = new ArrayList<>();
        students.add(new Student("Aman", 85));
        students.add(new Student("Riya", 92));
        students.add(new Student("Karan", 78));

        Collections.sort(students);

        for (Student s : students)
            System.out.println(s.name + " - " + s.marks);
    }
}
