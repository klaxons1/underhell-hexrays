int __thiscall sub_1026C960(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_100C86E0(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(16 * a2 + v5 + 16), (const void *)(16 * a2 + v5), 16 * v6);
  v7 = (_DWORD *)(*this + 16 * a2);
  if ( v7 )
    *v7 = &vehicle_gear_t::`vftable';
  return a2;
}
