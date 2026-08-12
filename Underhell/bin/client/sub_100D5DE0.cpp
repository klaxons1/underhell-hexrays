int *__cdecl sub_100D5DE0(int *a1, char *String)
{
  int *result; // eax
  int v3; // edx

  if ( !String || !*String )
  {
    result = a1;
    a1[1] = 0;
    *a1 = 0;
    a1[2] = 4;
    return result;
  }
  result = (int *)atoi(String);
  v3 = *a1;
  if ( (int *)*a1 == result )
  {
    *a1 = 0;
  }
  else
  {
    if ( (int *)a1[1] != result )
      return result;
    a1[1] = 0;
    if ( v3 )
      return result;
  }
  if ( !a1[1] )
  {
    result = (int *)a1[2];
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      result = (int *)((unsigned int)result & 0xFFFFFFFA | 4);
      a1[2] = (int)result;
    }
  }
  return result;
}
