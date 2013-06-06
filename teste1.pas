program exemplo75 (input, output);
var m,n :  integer;
begin
  n := 1;
  m := n;
  m := 1 + 1;
  m := 2 * m;
  m := n / 2;
  n := ( 1 + m ) * 3;
  while ( n=3) do
  begin
    n := m;
  end;
end.
