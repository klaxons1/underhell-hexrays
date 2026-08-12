int __thiscall sub_100029E0(int *this, int a2, int a3, _DWORD *a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  _DWORD *v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // [esp+10h] [ebp+8h]

  if ( !a3 )
    return a2;
  v6 = this[3];
  v7 = this[1];
  if ( v6 + a3 > v7 )
    sub_101924C0(a3 + v6 - v7);
  this[3] += a3;
  v8 = *this;
  v10 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v10 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v8 + 12 * (a2 + a3)), (const void *)(v8 + 12 * a2), 12 * v10);
LABEL_8:
    if ( a3 > 0 )
    {
      v11 = 12 * a2;
      v12 = a3;
      do
      {
        v13 = v11 + *this;
        if ( v13 )
          *(_DWORD *)(v13 + 8) = 0;
        v11 += 12;
        --v12;
      }
      while ( v12 );
    }
  }
  v14 = a4;
  if ( a4 && a3 > 0 )
  {
    v15 = 12 * a2;
    v17 = a3;
    do
    {
      v16 = *this;
      *(_DWORD *)(v16 + v15) = *v14;
      *(_DWORD *)(v16 + v15 + 4) = v14[1];
      *(_DWORD *)(v16 + v15 + 8) = v14[2];
      v14 += 3;
      v15 += 12;
      --v17;
    }
    while ( v17 );
  }
  return a2;
}
