var regex = /[!"#$%&'()*+,-./:;<=>?@[\]^_`{|}~]/g;

function removePunctuation(str) {
  return str.replace(regex, '');
}

function removeWhiteSpace(str) {
    return str.replace(/ /g,'');
}


function lower_Case(str) {
    return str.toLowerCase();
}

function palindrome(str) {
  // Good luck!
  let no_punctuation = removePunctuation(str);
  let no_white_space = removeWhiteSpace(no_punctuation);
  let lower_case_str = lower_Case(no_white_space);
  let reverse_str = lower_case_str.split('').reverse().join(''); 

  return reverse_str === lower_case_str ;
}

document.write(palindrome("eye")); // true
document.write("<br>");
document.write(palindrome("_eye")); // true
document.write("<br>");
document.write(palindrome("race car")); // true
document.write("<br>");
document.write(palindrome("not a palindrome")); // false
document.write("<br>");
document.write(palindrome("A man, a plan, a canal. Panama")); // true
document.write("<br>");
document.write(palindrome("never odd or even")); // true
document.write("<br>");
document.write(palindrome("nope")); // false
document.write("<br>");
document.write(palindrome("almostomla")); // false
document.write("<br>");
document.write(palindrome("My age is 0, 0 si ega ym.")); // true
document.write("<br>");
document.write(palindrome("1 eye for of 1 eye.")); // false
document.write("<br>");
document.write(palindrome("0_0 (: /-\ :) 0-0"));  // true
document.write("<br>");
document.write(palindrome("five|\_/|four")); // false
