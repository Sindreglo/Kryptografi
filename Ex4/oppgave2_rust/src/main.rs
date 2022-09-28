fn main() {
    // Test with: <test&123>
    let mut line = String::new();
    println!("Enter your name :");
    std::io::stdin().read_line(&mut line).unwrap();

    line = line.replace("&", "&amp");
    line = line.replace("<", "&lt!");
    line = line.replace(">", "&gt");
    println!("{}", line);
}
