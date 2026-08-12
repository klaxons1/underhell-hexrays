int __thiscall sub_101F8410(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // ecx

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_101E7DF0(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(84 * a2 + v6 + 84), (const void *)(84 * a2 + v6), 84 * v7);
  v8 = (_DWORD *)(*this + 84 * a2);
  if ( v8 )
  {
    *v8 = &CUserCmd::`vftable';
    v8[16] = 0;
    v8[17] = 0;
    v8[18] = 0;
    v8[19] = 0;
    v8[20] = 0;
    sub_101F7FB0((int)v8, a3);
  }
  return a2;
}
