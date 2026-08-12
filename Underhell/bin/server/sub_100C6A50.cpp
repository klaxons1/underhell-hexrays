int __thiscall sub_100C6A50(int *this, int a2, int a3, char *a4)
{
  int v4; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  float *v13; // ecx
  int v14; // eax
  char *v15; // edx
  void *v16; // edi
  const void *v17; // esi
  bool v18; // zf
  int v19; // [esp+14h] [ebp+Ch]

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_100C4C70(this, a3 + v7 - v8);
  this[3] += a3;
  v9 = a2;
  v10 = *this;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 > 0 && a3 > 0 )
  {
    memcpy((void *)(v10 + 76 * (a3 + a2)), (const void *)(v10 + 76 * a2), 76 * v11);
    v9 = a2;
  }
  if ( a3 > 0 )
  {
    v12 = 76 * v9;
    do
    {
      v13 = (float *)(v12 + *this);
      if ( v13 )
      {
        sub_100C5C50(v13, 0);
        v9 = a2;
      }
      v12 += 76;
      --a3;
    }
    while ( a3 );
  }
  if ( a4 && v4 > 0 )
  {
    v14 = 76 * v9;
    v15 = a4;
    v19 = v4;
    do
    {
      v16 = (void *)(v14 + *this);
      v17 = v15;
      v15 += 76;
      v14 += 76;
      v18 = v19-- == 1;
      qmemcpy(v16, v17, 0x4Cu);
    }
    while ( !v18 );
    return a2;
  }
  return v9;
}
