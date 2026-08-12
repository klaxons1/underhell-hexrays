int __cdecl sub_1009CC70(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int result; // eax

  v4 = dword_1042D60C;
  v5 = dword_1042D60C;
  if ( dword_1042D60C + 1 > dword_1042D604 )
  {
    sub_100798B0(&dword_1042D600, dword_1042D60C - dword_1042D604 + 1);
    v4 = dword_1042D60C;
  }
  v6 = dword_1042D600;
  dword_1042D60C = v4 + 1;
  v7 = v4 - v5;
  dword_1042D610 = dword_1042D600;
  if ( v7 > 0 )
  {
    memcpy((void *)(dword_1042D600 + 12 * v5 + 12), (const void *)(dword_1042D600 + 12 * v5), 12 * v7);
    v6 = dword_1042D600;
  }
  v8 = v6 + 12 * v5;
  *(_DWORD *)v8 = a2;
  *(_WORD *)(v8 + 8) = sub_10126930(a1, v5);
  *(_WORD *)(v8 + 10) = a3;
  *(_DWORD *)(v8 + 4) = a4;
  result = v8;
  if ( a2 > dword_1042D5FC )
    dword_1042D5FC = a2;
  return result;
}
