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

palindrome("eye"); // true
palindrome("_eye"); // true
palindrome("race car"); // true
palindrome("not a palindrome"); // false
palindrome("A man, a plan, a canal. Panama"); // true
palindrome("never odd or even"); // true
palindrome("nope"); // false
palindrome("almostomla"); // false
palindrome("My age is 0, 0 si ega ym."); // true
palindrome("1 eye for of 1 eye."); // false
palindrome("0_0 (: /-\ :) 0-0");  // true
palindrome("five|\_/|four"); // false

