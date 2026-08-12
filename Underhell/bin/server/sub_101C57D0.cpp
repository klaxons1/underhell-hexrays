int __thiscall sub_101C57D0(int *this, int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // edx

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_10226330(a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v9 + 8 * (a2 + a3)), (const void *)(v9 + 8 * a2), 8 * v11);
LABEL_8:
    if ( a3 > 0 )
    {
      v12 = 8 * a2;
      v13 = a3;
      do
      {
        v14 = (_DWORD *)(v12 + *this);
        if ( v14 )
        {
          *v14 = 0;
          v14[1] = 0;
        }
        v12 += 8;
        --v13;
      }
      while ( v13 );
    }
  }
  v15 = a4;
  if ( a4 && a3 > 0 )
  {
    v16 = 8 * a2;
    do
    {
      v17 = *this;
      *(_DWORD *)(v16 + v17) = *v15;
      *(_DWORD *)(v16 + v17 + 4) = v15[1];
      v15 += 2;
      v16 += 8;
      --v4;
    }
    while ( v4 );
    return a2;
  }
  return v10;
}
