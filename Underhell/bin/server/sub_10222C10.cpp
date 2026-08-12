int __thiscall sub_10222C10(int *this, int a2, int a3, int *a4)
{
  int v4; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // edi
  int *v16; // [esp+14h] [ebp+Ch]

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_101C4BF0(this, a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v9 + 20 * (a2 + a3)), (const void *)(v9 + 20 * a2), 20 * v11);
LABEL_8:
    if ( a3 > 0 )
    {
      v12 = 20 * a2;
      v13 = a3;
      do
      {
        v14 = (_DWORD *)(v12 + *this);
        if ( v14 )
        {
          *v14 = 0;
          v14[1] = 0;
          v14[2] = 0;
          v14[3] = 0;
          v14[4] = 0;
        }
        v12 += 20;
        --v13;
      }
      while ( v13 );
    }
  }
  if ( a4 && a3 > 0 )
  {
    v15 = 20 * a2;
    v16 = a4;
    do
    {
      sub_10222610((const void **)(v15 + *this), v16);
      v16 += 5;
      v15 += 20;
      --v4;
    }
    while ( v4 );
    return a2;
  }
  return v10;
}
