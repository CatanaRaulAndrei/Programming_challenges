function rot13(str) {
  var output = '';
  for(let i=0;i<str.length;i++){
    let c = str[i];
    if (c.match(/[a-z]/i)) {

			// Get its code
			var code = str.charCodeAt(i);

			// Uppercase letters
			if ((code >= 65) && (code <= 90))
				c = String.fromCharCode(((code - 65 + 13) % 26) + 65);

			// Lowercase letters
			else if ((code >= 97) && (code <= 122))
				c = String.fromCharCode(((code - 97 + 13) % 26) + 97);

		}

		// Append
		output += c;
  }
  return output;
}

rot13("SERR PBQR PNZC");
