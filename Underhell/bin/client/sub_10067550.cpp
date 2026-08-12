int __cdecl sub_10067550(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // esi

  result = *(_DWORD *)(a2 + a1 + 12);
  if ( result < a3 )
    return sub_10066620((int *)(a2 + a1), result, a3 - result, 0);
  if ( result > a3 )
  {
    v4 = result - a3;
    result = 0;
    *(_DWORD *)(a2 + a1 + 12) -= v4;
  }
  return result;
}
