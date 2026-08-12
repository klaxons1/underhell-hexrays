int __thiscall sub_100C60E0(int *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // ecx
  int v14; // edi
  int v15; // [esp+14h] [ebp+Ch]

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_100C00C0(this, a3 + v7 - v8);
  this[3] += a3;
  v9 = a2;
  v10 = *this;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 > 0 && a3 > 0 )
  {
    memcpy((void *)(v10 + 84 * (a3 + a2)), (const void *)(v10 + 84 * a2), 84 * v11);
    v9 = a2;
  }
  if ( a3 > 0 )
  {
    v12 = 84 * v9;
    do
    {
      v13 = (_DWORD *)(v12 + *this);
      if ( v13 )
      {
        sub_100C2E20(v13);
        v9 = a2;
      }
      v12 += 84;
      --a3;
    }
    while ( a3 );
  }
  if ( a4 && v4 > 0 )
  {
    v14 = 84 * v9;
    v15 = a4;
    do
    {
      sub_100C5BE0(v14 + *this, v15);
      v15 += 84;
      v14 += 84;
      --v4;
    }
    while ( v4 );
    return a2;
  }
  return v9;
}
