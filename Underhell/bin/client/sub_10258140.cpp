char __thiscall sub_10258140(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // ecx
  char result; // al

  v3 = *(_DWORD *)(a3 + 20);
  if ( v3 < 0 )
    return 0;
  if ( v3 >= this[69] )
    return 0;
  v5 = this[66];
  v6 = 32 * v3;
  v7 = *(_DWORD *)(v6 + v5 + 28);
  v8 = (_DWORD *)(v5 + v6);
  if ( v7 != a2 )
    return 0;
  *(_DWORD *)(a3 + 8) = *v8;
  *(_BYTE *)(a3 + 16) = *(_BYTE *)(32 * *(_DWORD *)(a3 + 20) + this[66] + 8);
  sub_10258010((int)this, a3);
  v9 = *(_DWORD *)(32 * *(_DWORD *)(a3 + 20) + this[66] + 4);
  v10 = v9 - *(_DWORD *)(a3 + 12);
  *(_DWORD *)(a3 + 12) = v9;
  if ( v10 )
    *(_DWORD *)a3 = v9 + this[92];
  this[78] = v9;
  result = 1;
  ++*(_DWORD *)(a3 + 20);
  return result;
}
