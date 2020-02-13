function convertToRoman(num){
    let roman_to_number = {M:1000,CM:900,D:500,CD:400,C:100,XC:90,L:50,XL:40,X:10,IX:9,V:5,IV:4,I:1},roman = '',i;
    for(i in roman_to_number){
             while ( num >= roman_to_number[i] ) {
                    roman += i;
                    num -= roman_to_number[i];
             }
    } 
return roman;
}

convertToRoman(2); // II