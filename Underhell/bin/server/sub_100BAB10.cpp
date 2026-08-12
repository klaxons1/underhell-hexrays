int __cdecl sub_100BAB10(int a1, _DWORD *a2, int a3, int a4)
{
  int result; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // esi

  result = a1;
  if ( a1 )
  {
    v5 = *(_DWORD *)a1;
    if ( a3 < *(_DWORD *)(*(_DWORD *)a1 + 232) )
    {
      result = 16 * a3 + *(_DWORD *)(v5 + 236);
      v6 = *(_DWORD *)(result + v5 + 4);
      if ( a4 < v6 )
      {
        v7 = *(_DWORD *)(result + v5 + 8);
        result = *a2 / v7 / v6;
        *a2 += v7 * (a4 - *a2 / v7 % v6);
      }
    }
  }
  return result;
}
