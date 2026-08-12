int __cdecl sub_100FEC70(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int v8; // edi
  int v9; // eax

  v5 = a3[17];
  v6 = a5;
  v7 = a4;
  if ( a4 >= v5 )
    v7 = v5 - 1;
  v8 = a3[18];
  if ( a5 >= v8 )
    v6 = v8 - 1;
  v9 = sub_102455F0(a2, *(__int16 *)((char *)a3 + 2 * v7 + 2 * v6 * v5 + a3[15]));
  return (*(_DWORD *)(sub_102454D0(v9) + 12) >> 5) & 1;
}
