fn main() {

  // print a basic string
  println!("Hello World!");

  // print a string using assigned variables (think python)
  println!("{subject} {verb} {object}",
             object="the lazy dog",
             subject="the quick brown fox",
             verb="jumps over");

  // print and align given a variable "number" and width "6"
  println!("{number:>width$}", number=1, width=6);

  // positional fillers ala python
  println!("My name is {0}, {1} {0}", "Bond");
    // FIXME ^ Add the missing argument: "James"

}
