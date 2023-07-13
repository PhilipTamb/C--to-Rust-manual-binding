# C--to-Rust-manual-binding

g++ -dynamiclib -o libnum.dylib src/num.cpp

rustc -l num -L . src/main.rs


[build-dependencies]
cc = "1.0"
