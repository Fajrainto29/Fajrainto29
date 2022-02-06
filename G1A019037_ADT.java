/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Muhammad Fajrianto
 */
/**
* ADT Kelas SegiEmpat
* SegiEmpatADT.java
*/
// Program kelas utama
public class ADT{
// Deklarasi fungsi program utama
public static void main(String args[]) {
// Penciptaan objek dari kelas SegiEmpat
SegiEmpat S = new SegiEmpat(17, 8);
// Manipulasi objek
System.out.println("Panjang = " + S.GetPanjang());
System.out.println("Lebar = "+ S.GetLebar());
System.out.println("Luas = " + S.Luas());
}
}
// Deklarasi kelas SegiEmpat
class SegiEmpat {
// Deklarasi atribut
private float panjang, lebar;
// Definisi konstruktor
public SegiEmpat() {
panjang = 0;
lebar = 0;
}
public SegiEmpat(float p, float l) {
panjang = p;
lebar = l;
}
// Definisi layanan
public float GetPanjang() {
return (panjang);
}
public float GetLebar() {
return (lebar);
}
public float Luas() {
return (panjang*lebar);
}
}
