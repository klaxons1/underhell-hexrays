int __thiscall sub_10278610(int *this, int a2, int a3, int a4)
{
  int v4; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // ecx
  int v16; // eax
  int v17; // ebp

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_10282C70(a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v10 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v9 + 20 * (a2 + a3)), (const void *)(v9 + 20 * a2), 20 * v10);
LABEL_8:
    if ( a3 > 0 )
    {
      v11 = 20 * a2;
      v12 = a3;
      do
      {
        v13 = v11 + *this;
        if ( v13 )
        {
          *(_WORD *)v13 = -1;
          *(_DWORD *)(v13 + 16) = 0;
          *(_DWORD *)(v13 + 12) = 0;
          *(_DWORD *)(v13 + 8) = 0;
          *(_DWORD *)(v13 + 4) = 0;
        }
        v11 += 20;
        --v12;
      }
      while ( v12 );
    }
  }
  if ( a4 && a3 > 0 )
  {
    v14 = 20 * a2;
    v15 = (_DWORD *)(a4 + 8);
    do
    {
      v16 = v14 + *this;
      *(_WORD *)v16 = *((_WORD *)v15 - 4);
      *(_DWORD *)(v16 + 4) = *(v15 - 1);
      *(_DWORD *)(v16 + 8) = *v15;
      *(_DWORD *)(v16 + 12) = v15[1];
      v17 = v15[2];
      v15 += 5;
      v14 += 20;
      --v4;
      *(_DWORD *)(v16 + 16) = v17;
    }
    while ( v4 );
  }
  return a2;
}
