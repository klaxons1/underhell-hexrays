int __thiscall sub_104279A0(int *this, int a2, int a3, int a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // ecx

  if ( !a3 )
    return a2;
  v6 = this[3];
  v7 = this[1];
  if ( v6 + a3 > v7 )
    sub_1044A1C0(a3 + v6 - v7);
  this[3] += a3;
  v8 = *this;
  v9 = a2;
  v10 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v10 > 0 && a3 > 0 )
    memcpy((void *)(v8 + 4 * (a2 + a3)), (const void *)(v8 + 4 * a2), 4 * v10);
  if ( a4 )
  {
    v11 = 0;
    if ( a3 > 0 )
    {
      v12 = 4 * a2;
      do
      {
        *(_DWORD *)(v12 + *this) = *(_DWORD *)(a4 + 4 * v11++);
        v12 += 4;
      }
      while ( v11 < a3 );
      return a2;
    }
  }
  return v9;
}
