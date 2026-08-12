char *__cdecl sub_10429750(char *a1, char *Source, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  signed int v5; // ecx
  char *result; // eax

  AssertValidStringPtr(a1, 0xFFFFFF);
  AssertValidStringPtr(Source, 0xFFFFFF);
  v4 = strlen(a1);
  v5 = strlen(Source);
  if ( a4 > -1 && a4 < v5 )
    v5 = a4;
  if ( v4 + v5 >= a3 )
    v5 = a3 - v4 - 1;
  if ( !v5 )
    return a1;
  result = strncat(a1, Source, v5);
  result[a3 - 1] = 0;
  return result;
}
