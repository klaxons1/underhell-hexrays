int __cdecl sub_10002580(int a1, int a2, unsigned __int8 a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int result; // eax

  v3 = dword_10400F74;
  v4 = dword_10400F74;
  if ( dword_10400F74 + 1 > dword_10400F6C )
  {
    sub_10118050(dword_10400F74 - dword_10400F6C + 1);
    v3 = dword_10400F74;
  }
  v5 = dword_10400F68;
  dword_10400F74 = v3 + 1;
  v6 = v3 - v4;
  dword_10400F78 = dword_10400F68;
  if ( v6 > 0 )
  {
    memcpy((void *)(dword_10400F68 + 8 * v4 + 8), (const void *)(dword_10400F68 + 8 * v4), 8 * v6);
    v5 = dword_10400F68;
  }
  v7 = v5 + 8 * v4;
  *(_DWORD *)v7 = a2;
  *(_WORD *)(v7 + 4) = sub_10126930(a1, v4);
  *(_WORD *)(v7 + 6) = a3;
  result = v7;
  if ( a2 > dword_10400F64 )
    dword_10400F64 = a2;
  return result;
}
