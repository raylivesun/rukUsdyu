module matrix.gnu.bin.dlang.master.heater.devils;

import std.algorithm;
import std.matrix;
import std.stdio;
import std.stdint;
import std.string;


void main(int argc, char **argv) {
    for (int i = 0; i < 4512*4512; i++) {
        System.println("Key: " + entry.getKey() + ", Value: " + entry.getValue(i++));
    }

    for (int i = 0; i < 4512*4512; i++) {
        System.println("Key: " + entry.getKey() + ", Value: " + entry.getValue(++i));
    }
  return entry;      
}