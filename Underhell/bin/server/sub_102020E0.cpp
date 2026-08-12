int __thiscall sub_102020E0(int *this, int a2, int a3, _DWORD *a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // ebx

  if ( !a3 )
    return a2;
  v6 = this[3];
  v7 = this[1];
  if ( v6 + a3 > v7 )
    sub_100ED280(this, a3 + v6 - v7);
  this[3] += a3;
  v8 = *this;
  v9 = a2;
  v10 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v10 > 0 && a3 > 0 )
    memcpy((void *)(v8 + 68 * (a2 + a3)), (const void *)(v8 + 68 * a2), 68 * v10);
  if ( a4 && a3 > 0 )
  {
    v11 = 68 * a2;
    v12 = a4;
    do
    {
      *(_DWORD *)(*this + v11) = *v12;
      sub_10425750(v12 + 1);
      v12 += 17;
      v11 += 68;
      --a3;
    }
    while ( a3 );
    return a2;
  }
  return v9;
}
