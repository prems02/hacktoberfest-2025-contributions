use std::cell::RefCell;
use std::rc::Rc;

type Link = Option<Rc<RefCell<Node>>>;

#[derive(Debug)]
struct Node {
    value: i32,
    next: Link,
}

impl Node {
    fn new(value: i32) -> Rc<RefCell<Node>> {
        Rc::new(RefCell::new(Node { value, next: None }))
    }
}

fn main() {
    let node1 = Node::new(10);
    let node2 = Node::new(20);
    let node3 = Node::new(30);

    node1.borrow_mut().next = Some(node2.clone());
    node2.borrow_mut().next = Some(node3.clone());

    let mut current = Some(node1.clone());
    while let Some(node) = current {
        print!("{} -> ", node.borrow().value);
        current = node.borrow().next.clone();
    }
    println!("None");
}