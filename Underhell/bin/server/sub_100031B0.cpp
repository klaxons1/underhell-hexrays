int __cdecl sub_100031B0(int a1, int a2, unsigned __int8 a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int result; // eax

  v3 = dword_10690154;
  v4 = dword_10690154;
  if ( dword_10690154 + 1 > dword_1069014C )
  {
    sub_10226330(dword_10690154 - dword_1069014C + 1);
    v3 = dword_10690154;
  }
  v5 = dword_10690148;
  dword_10690154 = v3 + 1;
  v6 = v3 - v4;
  dword_10690158 = dword_10690148;
  if ( v6 > 0 )
  {
    memcpy((void *)(dword_10690148 + 8 * v4 + 8), (const void *)(dword_10690148 + 8 * v4), 8 * v6);
    v5 = dword_10690148;
  }
  v7 = v5 + 8 * v4;
  *(_DWORD *)v7 = a2;
  *(_WORD *)(v7 + 4) = sub_10244E30(a1, v4);
  *(_WORD *)(v7 + 6) = a3;
  result = v7;
  if ( a2 > dword_10690144 )
    dword_10690144 = a2;
  return result;
}
