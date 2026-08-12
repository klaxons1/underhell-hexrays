int __stdcall sub_10086AF0(int a1, _DWORD *a2, int a3)
{
  int result; // eax
  int v4; // edi
  __int16 *v5; // eax
  int v6; // ecx

  result = a3;
  v4 = 0;
  for ( a2[17] = a3; v4 < a2[21]; ++v4 )
  {
    v5 = *(__int16 **)(a2[18] + 4 * v4);
    v6 = v5[1];
    if ( v6 == *a2 )
      result = *(_DWORD *)(a1 + 4 * *v5);
    else
      result = *(_DWORD *)(a1 + 4 * v6);
    if ( !*(_DWORD *)(result + 68) )
      result = sub_10086AF0(a1, result, a3);
  }
  return result;
}
