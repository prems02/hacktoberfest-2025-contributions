trait Shape {
    fn area(&self) -> f64;
}

struct Circle {
    radius: f64,
}

struct Rectangle {
    width: f64,
    height: f64,
}

impl Shape for Circle {
    fn area(&self) -> f64 {
        std::f64::consts::PI * self.radius * self.radius
    }
}

impl Shape for Rectangle {
    fn area(&self) -> f64 {
        self.width * self.height
    }
}

fn print_area(shape: &dyn Shape) {
    println!("Area: {:.2}", shape.area());
}

fn main() {
    let c = Circle { radius: 5.0 };
    let r = Rectangle { width: 10.0, height: 4.0 };

    print_area(&c);
    print_area(&r);
}