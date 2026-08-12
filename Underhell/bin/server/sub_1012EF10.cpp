int __cdecl sub_1012EF10(int *a1)
{
  int result; // eax

  result = (int)a1;
  if ( *a1 < 2 )
    return Warning("Incorrect parameters. Format: <category id>\n");
  return result;
}
