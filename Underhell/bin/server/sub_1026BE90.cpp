int __thiscall sub_1026BE90(int *this, int a2, int a3, _DWORD *a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  int v15; // edx
  _DWORD *v16; // eax
  int v17; // edi
  bool v18; // zf
  int v19; // [esp+10h] [ebp+8h]

  if ( !a3 )
    return a2;
  v6 = this[3];
  v7 = this[1];
  if ( v6 + a3 > v7 )
    sub_101C4BF0(this, a3 + v6 - v7);
  this[3] += a3;
  v8 = *this;
  v10 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v10 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v8 + 20 * (a2 + a3)), (const void *)(v8 + 20 * a2), 20 * v10);
LABEL_8:
    if ( a3 > 0 )
    {
      v11 = 20 * a2;
      v12 = a3;
      do
      {
        v13 = (_DWORD *)(v11 + *this);
        if ( v13 )
        {
          *v13 = -1;
          v13[1] = -1;
          v13[2] = 0;
          v13[3] = 0;
          v13[4] = -1;
        }
        v11 += 20;
        --v12;
      }
      while ( v12 );
    }
  }
  v14 = a4;
  if ( a4 && a3 > 0 )
  {
    v15 = 20 * a2;
    v19 = a3;
    do
    {
      v16 = (_DWORD *)(v15 + *this);
      *v16 = *v14;
      v16[1] = v14[1];
      v16[2] = v14[2];
      v16[3] = v14[3];
      v17 = v14[4];
      v14 += 5;
      v15 += 20;
      v18 = v19-- == 1;
      v16[4] = v17;
    }
    while ( !v18 );
  }
  return a2;
}
