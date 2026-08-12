int __thiscall sub_100B1C80(int *this, int a2, int a3, int a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  bool v14; // zf
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax

  if ( !a3 )
    return a2;
  v6 = this[3];
  v7 = this[1];
  if ( v6 + a3 > v7 )
    sub_10226330(a3 + v6 - v7);
  this[3] += a3;
  v8 = *this;
  v9 = a2;
  v10 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v10 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v8 + 8 * (a2 + a3)), (const void *)(v8 + 8 * a2), 8 * v10);
LABEL_8:
    if ( a3 > 0 )
    {
      v11 = 8 * a2;
      v12 = a3;
      do
      {
        v13 = v11 + *this;
        if ( v13 )
        {
          v14 = v13 == -4;
          v15 = (_DWORD *)(v13 + 4);
          *(v15 - 1) = -1;
          if ( !v14 )
            *v15 = 0;
        }
        v11 += 8;
        --v12;
      }
      while ( v12 );
    }
  }
  if ( a4 )
  {
    v16 = 0;
    if ( a3 > 0 )
    {
      v17 = 8 * a2;
      do
      {
        v18 = *this;
        *(_DWORD *)(v18 + v17) = *(_DWORD *)(a4 + 8 * v16);
        *(_DWORD *)(v18 + v17 + 4) = *(_DWORD *)(a4 + 8 * v16++ + 4);
        v17 += 8;
      }
      while ( v16 < a3 );
      return a2;
    }
  }
  return v9;
}
