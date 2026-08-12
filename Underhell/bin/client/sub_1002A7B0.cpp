int __thiscall sub_1002A7B0(int *this, int a2, int a3, char *a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  char *v11; // edx
  int v12; // eax
  void *v13; // edi
  const void *v14; // esi
  bool v15; // zf

  if ( !a3 )
    return a2;
  v6 = this[3];
  v7 = this[1];
  if ( v6 + a3 > v7 )
    sub_10025AF0(this, a3 + v6 - v7);
  this[3] += a3;
  v8 = *this;
  v9 = a2;
  v10 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v10 > 0 && a3 > 0 )
    memcpy((void *)(v8 + 48 * (a2 + a3)), (const void *)(v8 + 48 * a2), 48 * v10);
  v11 = a4;
  if ( a4 && a3 > 0 )
  {
    v12 = 48 * a2;
    do
    {
      v13 = (void *)(v12 + *this);
      v14 = v11;
      v11 += 48;
      v12 += 48;
      v15 = a3-- == 1;
      qmemcpy(v13, v14, 0x30u);
    }
    while ( !v15 );
    return a2;
  }
  return v9;
}
