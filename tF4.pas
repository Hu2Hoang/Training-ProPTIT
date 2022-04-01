program bt;
{
day con tang lien tiep dai nhat}

uses crt;
var a:array[1..100] of integer;
n, i, tam, dem, max, dau, cuoi:integer;
begin 
clrscr;
readln(n);
for i:= 1 to n  do
  readln(a[i]);

max:= 0;
  for i:= 1 to n do
    begin 
    dem:= 0;
      tam:= i;
    while (a[tam] <= a[tam + 1]) and (tam <= n)
      do
        begin dem:= dem + 1;
          inc (tam);
        end;
        if dem >max then begin max:= dem;
    end;
      end;
	write (max);
	readln;
end.
