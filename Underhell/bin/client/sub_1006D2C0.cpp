int __cdecl sub_1006D2C0(_DWORD *a1, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  char *v5; // ecx

  result = (int)a1;
  if ( a1[301] != a3 )
  {
    a1[301] = 0;
    if ( a3 )
    {
      v4 = a1[299];
      if ( a3 > v4 )
        sub_1010AFF0(a3 - v4);
      a1[301] += a3;
      v5 = (char *)a1[298];
      result = a1[301] - a3;
      a1[302] = v5;
      if ( result > 0 && a3 > 0 )
        return (int)memcpy(&v5[4 * a3], v5, 4 * result);
    }
  }
  return result;
}
