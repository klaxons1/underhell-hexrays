int __cdecl sub_104297E0(const char *a1)
{
  int result; // eax
  char v2; // cl

  result = strlen(a1);
  if ( result > 0 )
  {
    v2 = a1[result - 1];
    if ( v2 == 92 || v2 == 47 )
      a1[result - 1] = 0;
  }
  return result;
}
