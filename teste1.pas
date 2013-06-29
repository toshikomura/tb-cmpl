program exemplo75 (input, output);
var m,n :  integer;
begin
  if ( m < 1 ) then
  begin
    m := 2;
    if m = n then
    begin
        n := 1;
    end;
    else
    begin
        n := 2;
    end;
  end;
end.
