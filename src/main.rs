const U64_SIZE: usize = 8;

fn main() {
    let string = "Lol";
    let bytes = conv_str_to_bytes(string);
    println!("Bytes: {bytes}");
    let string = conv_bytes_to_str(bytes);
    let string = std::str::from_utf8(&string).unwrap();
    println!("String: {string}");
}

fn conv_str_to_bytes(string: &str) -> u64 {
    let mut res = 0;
    for (i, ch) in string.chars().into_iter().enumerate() {
        res |= (ch as u64) << (i * 8);
    }
    res
}

fn conv_bytes_to_str(bytes: u64) -> [u8; U64_SIZE] {
    let mut res: [u8; U64_SIZE] = [0; U64_SIZE];
    for i in 0..U64_SIZE {
        res[i] = ((bytes >> (i * 8)) & 0xFF) as u8;
    }
    res
}
