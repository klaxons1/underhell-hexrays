int __thiscall sub_102C2C00(int *this, int a2, int a3, int a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // [esp+10h] [ebp+8h]

  if ( !a3 )
    return a2;
  v6 = this[3];
  v7 = this[1];
  if ( v6 + a3 > v7 )
    sub_102BFFD0(this, a3 + v6 - v7);
  this[3] += a3;
  v8 = *this;
  v10 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v10 > 0 && a3 > 0 )
    memcpy((void *)(v8 + 6 * (a2 + a3)), (const void *)(v8 + 6 * a2), 6 * v10);
  v11 = a4;
  if ( a4 && a3 > 0 )
  {
    v12 = 6 * a2;
    v14 = a3;
    do
    {
      v13 = *this;
      *(_DWORD *)(v13 + v12) = *(_DWORD *)v11;
      *(_WORD *)(v13 + v12 + 4) = *(_WORD *)(v11 + 4);
      v11 += 6;
      v12 += 6;
      --v14;
    }
    while ( v14 );
  }
  return a2;
}
