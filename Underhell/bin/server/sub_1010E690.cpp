int __cdecl sub_1010E690(char *String2)
{
  int result; // eax
  int i; // esi
  const char *v3; // eax

  DevMsg(2, "KillTarget: %s\n", String2);
  result = sub_1012BF20(0, String2, 0, 0, 0, 0);
  for ( i = result; result; i = result )
  {
    sub_1025FAC0(i);
    v3 = *(const char **)(i + 92);
    if ( !v3 )
      v3 = String;
    DevMsg(2, "killing %s\n", v3);
    result = sub_1012BF20(i, String2, 0, 0, 0, 0);
  }
  return result;
}
