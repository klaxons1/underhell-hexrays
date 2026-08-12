int __cdecl sub_1013BDE0(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int result; // eax

  v4 = dword_106B00B0;
  v5 = dword_106B00B0;
  if ( dword_106B00B0 + 1 > dword_106B00A8 )
  {
    sub_101924C0(dword_106B00B0 - dword_106B00A8 + 1);
    v4 = dword_106B00B0;
  }
  v6 = dword_106B00A4;
  dword_106B00B0 = v4 + 1;
  v7 = v4 - v5;
  dword_106B00B4 = dword_106B00A4;
  if ( v7 > 0 )
  {
    memcpy((void *)(dword_106B00A4 + 12 * v5 + 12), (const void *)(dword_106B00A4 + 12 * v5), 12 * v7);
    v6 = dword_106B00A4;
  }
  v8 = v6 + 12 * v5;
  *(_DWORD *)v8 = a2;
  *(_WORD *)(v8 + 8) = sub_10244E30(a1, v5);
  *(_WORD *)(v8 + 10) = a3;
  *(_DWORD *)(v8 + 4) = a4;
  result = v8;
  if ( a2 > dword_106B00A0 )
    dword_106B00A0 = a2;
  return result;
}
