let mark = prompt("Enter the Number: ");
if (mark >= 80 && mark <= 100) {
  document.write("you have earn A+");
} else if (mark >= 60 && mark <= 79) {
  document.write("you have earn A");
} else if (mark >= 40 && mark <= 59) {
  document.write("you have got B ");
} else if (mark >= 33 && mark <= 39) {
  document.write("you have passed the exam");
} else {
  document.write("you have faield ");
}