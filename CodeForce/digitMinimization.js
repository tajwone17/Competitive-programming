
var n = readline();
while(n--){
var s = readline();



    if (s.length == 2){
   var res=s[1];
  print(res);}
    else
    {
        var min = s[0];

        for (var j = 1; j < s.length; j++)
        {

            if (min > s[j + 1])
                min = s[j + 1];
        }
    print(min);
    }

}