int __thiscall sub_100CAC00(int *this, int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // ecx
  _DWORD *v15; // ecx
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // ebx

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_100C86E0(this, a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v9 + 16 * (a2 + a3)), (const void *)(v9 + 16 * a2), 16 * v11);
LABEL_8:
    if ( a3 > 0 )
    {
      v12 = 16 * a2;
      v13 = a3;
      do
      {
        v14 = (_DWORD *)(v12 + *this);
        if ( v14 )
          *v14 = -1;
        v12 += 16;
        --v13;
      }
      while ( v13 );
    }
  }
  v15 = a4;
  if ( a4 && a3 > 0 )
  {
    v16 = 16 * a2;
    do
    {
      v17 = (_DWORD *)(v16 + *this);
      *v17 = *v15;
      v17[1] = v15[1];
      v17[2] = v15[2];
      v18 = v15[3];
      v15 += 4;
      v16 += 16;
      --v4;
      v17[3] = v18;
    }
    while ( v4 );
    return a2;
  }
  return v10;
}
