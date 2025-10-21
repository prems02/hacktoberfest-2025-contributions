use std::collections::HashMap;
use std::fs;

fn main() {
    let content = fs::read_to_string("text.txt")
        .expect("Failed to read file");
    let mut freq = HashMap::new();

    for word in content.split_whitespace() {
        let word = word.to_lowercase();
        *freq.entry(word).or_insert(0) += 1;
    }

    for (word, count) in freq.iter().take(10) {
        println!("{} -> {}", word, count);
    }
}