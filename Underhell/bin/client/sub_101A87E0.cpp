int __cdecl sub_101A87E0(int a1)
{
  int v1; // edx
  int result; // eax

  v1 = dword_1044CAC8;
  result = 0;
  if ( dword_1044CAC8 > 0 )
  {
    while ( *(_DWORD *)(dword_1044CABC + 4 * result) != a1 )
    {
      if ( ++result >= dword_1044CAC8 )
        return result;
    }
    if ( result != -1 )
    {
      if ( dword_1044CAC8 - result - 1 > 0 )
      {
        result = (int)memcpy(
                        (void *)(dword_1044CABC + 4 * result),
                        (const void *)(dword_1044CABC + 4 * result + 4),
                        4 * (dword_1044CAC8 - result - 1));
        v1 = dword_1044CAC8;
      }
      dword_1044CAC8 = v1 - 1;
    }
  }
  return result;
}
