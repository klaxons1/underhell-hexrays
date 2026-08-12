int __thiscall sub_100F89E0(int *this, int a2, int a3, int a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // ecx

  if ( !a3 )
    return a2;
  v6 = this[3];
  v7 = this[1];
  if ( v6 + a3 > v7 )
    sub_102ABFC0(a3 + v6 - v7);
  this[3] += a3;
  v8 = *this;
  v9 = a2;
  v10 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v10 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v8 + 4 * (a2 + a3)), (const void *)(v8 + 4 * a2), 4 * v10);
LABEL_8:
    if ( a3 > 0 )
    {
      v11 = 4 * a2;
      v12 = a3;
      do
      {
        v13 = (_DWORD *)(v11 + *this);
        if ( v13 )
          *v13 = -1;
        v11 += 4;
        --v12;
      }
      while ( v12 );
    }
  }
  if ( a4 )
  {
    v14 = 0;
    if ( a3 > 0 )
    {
      v15 = 4 * a2;
      do
      {
        *(_DWORD *)(v15 + *this) = *(_DWORD *)(a4 + 4 * v14++);
        v15 += 4;
      }
      while ( v14 < a3 );
      return a2;
    }
  }
  return v9;
}
