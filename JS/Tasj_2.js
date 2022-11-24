function correctString(string) {
  let cap = [];
  let dot = [];
  var temp = 0;
  var str =  string.trim();
//   str[0].toUpperCase();
//   str[str.length -1] += "."
//   var splitString = str.split(" ");
//   splitString.filter((letter) => {
//     temp++;
//     if (letter === ".") {
//       cap.push(temp + 1);
//     }
//     if (letter.toUpperCase() === letter) {
//       dot.push(temp - 2);
//     }
//     for (var i = 0; i < cap.length; i++) {
//       str[i].toUpperCase();
//     }
//     for (var i = 0; i < dot.length; i++) {
//       str[i] += ".";
//     }
// });
console.log(str);
}

correctString("John have   an apple The sky is blue.  they get a coin");
