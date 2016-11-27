use std::io;
use bio::io::fastq;
let reader = fastq::Reader::new(io::stdin());

fn main() {
    let f = File::open("data/SRR062634.filt.fastq").unwrap();
    for (num, line) in file.lines().enumerate() {
        let l = line.unwrap();
        if num % 4 == 0 {
            println!(">{}", &l[1..]);

        }
        if num % 4 == 1 {
            println!("{}", l);
        }
    }
}
