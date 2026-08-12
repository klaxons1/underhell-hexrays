int __thiscall sub_100DE5C0(int *this, int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // ebx

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
  if ( v11 > 0 && a3 > 0 )
    memcpy((void *)(v9 + 16 * (a2 + a3)), (const void *)(v9 + 16 * a2), 16 * v11);
  v12 = a4;
  if ( a4 && a3 > 0 )
  {
    v13 = 16 * a2;
    do
    {
      v14 = (_DWORD *)(v13 + *this);
      *v14 = *v12;
      v14[1] = v12[1];
      v14[2] = v12[2];
      v15 = v12[3];
      v12 += 4;
      v13 += 16;
      --v4;
      v14[3] = v15;
    }
    while ( v4 );
    return a2;
  }
  return v10;
}
