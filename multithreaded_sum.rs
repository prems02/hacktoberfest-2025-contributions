use std::thread;
use std::sync::mpsc;

fn main() {
    let (tx, rx) = mpsc::channel();

    for i in 0..4 {
        let tx = tx.clone();
        thread::spawn(move || {
            let sum: u32 = (i * 25..(i + 1) * 25).sum();
            tx.send(sum).unwrap();
        });
    }

    drop(tx); // Close main sender

    let total: u32 = rx.iter().sum();
    println!("Total sum = {}", total);
}