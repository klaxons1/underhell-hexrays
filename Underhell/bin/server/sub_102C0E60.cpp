int __thiscall sub_102C0E60(int *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  char v17; // dl

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_102BFF20(this, a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(a2 + a3 + v9 + 16 * (a2 + a3)), (const void *)(a2 + v9 + 16 * a2), 17 * v11);
LABEL_8:
    if ( a3 > 0 )
    {
      v12 = 17 * a2;
      do
      {
        v13 = v12 + *this;
        if ( v13 )
        {
          *(_WORD *)(v13 + 14) = -1;
          *(_DWORD *)v13 = -1;
          *(_DWORD *)(v13 + 4) = 0;
          *(_DWORD *)(v13 + 8) = 0;
          *(_WORD *)(v13 + 12) = 0;
          *(_BYTE *)(v13 + 16) = 0;
        }
        v12 += 17;
        --a3;
      }
      while ( a3 );
    }
  }
  v14 = a4;
  if ( a4 && v4 > 0 )
  {
    v15 = 17 * a2;
    do
    {
      v16 = v15 + *this;
      *(_DWORD *)v16 = *(_DWORD *)v14;
      *(_DWORD *)(v16 + 4) = *(_DWORD *)(v14 + 4);
      *(_DWORD *)(v16 + 8) = *(_DWORD *)(v14 + 8);
      *(_DWORD *)(v16 + 12) = *(_DWORD *)(v14 + 12);
      v17 = *(_BYTE *)(v14 + 16);
      v14 += 17;
      v15 += 17;
      --v4;
      *(_BYTE *)(v16 + 16) = v17;
    }
    while ( v4 );
    return a2;
  }
  return v10;
}
