int __thiscall sub_10167B70(int *this, int a2, int a3, int a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v10; // eax
  int v11; // ecx
  _WORD *v12; // eax
  int v13; // edx
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // edi
  bool v17; // zf
  int v18; // [esp+10h] [ebp+8h]
  int v19; // [esp+10h] [ebp+8h]

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
      v18 = a3;
      do
      {
        v12 = (_WORD *)(v11 + *this);
        if ( v12 )
        {
          *v12 = -1;
          v12[1] = -1;
        }
        v11 += 12;
        --v18;
      }
      while ( v18 );
    }
  }
  if ( a4 && a3 > 0 )
  {
    v13 = 12 * a2;
    v14 = (_DWORD *)(a4 + 4);
    v19 = a3;
    do
    {
      v15 = v13 + *this;
      *(_WORD *)v15 = *((_WORD *)v14 - 2);
      *(_WORD *)(v15 + 2) = *((_WORD *)v14 - 1);
      *(_DWORD *)(v15 + 4) = *v14;
      v16 = v14[1];
      v14 += 3;
      v13 += 12;
      v17 = v19-- == 1;
      *(_DWORD *)(v15 + 8) = v16;
    }
    while ( !v17 );
  }
  return a2;
}
