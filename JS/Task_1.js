function reverseString(str) {
  var splitString = str.split(" ");
  var ans = " ";
  splitString.forEach((word) => {
    if (word.length >= 5) {
      word = word.split("").reverse().join("");
    }
    ans += " " + word;
  });
  console.log(ans);
}

reverseString("Hey fellow warriors");
