int __thiscall sub_100C2A80(int *this, int a2, int a3, _DWORD *a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // [esp+10h] [ebp+8h]

  if ( !a3 )
    return a2;
  v6 = this[3];
  v7 = this[1];
  if ( v6 + a3 > v7 )
    sub_100798B0(this, a3 + v6 - v7);
  this[3] += a3;
  v8 = *this;
  v10 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v10 > 0 && a3 > 0 )
    memcpy((void *)(v8 + 12 * (a2 + a3)), (const void *)(v8 + 12 * a2), 12 * v10);
  v11 = a4;
  if ( a4 && a3 > 0 )
  {
    v12 = 12 * a2;
    v14 = a3;
    do
    {
      v13 = *this;
      *(_DWORD *)(v13 + v12) = *v11;
      *(_DWORD *)(v13 + v12 + 4) = v11[1];
      *(_DWORD *)(v13 + v12 + 8) = v11[2];
      v11 += 3;
      v12 += 12;
      --v14;
    }
    while ( v14 );
  }
  return a2;
}
