use std::collections::HashMap;

fn fib(n: u32, memo: &mut HashMap<u32, u64>) -> u64 {
    if let Some(&val) = memo.get(&n) {
        return val;
    }
    let val = if n <= 1 {
        n as u64
    } else {
        fib(n - 1, memo) + fib(n - 2, memo)
    };
    memo.insert(n, val);
    val
}

fn main() {
    let mut memo = HashMap::new();
    let n = 40;
    println!("Fib({}) = {}", n, fib(n, &mut memo));
}