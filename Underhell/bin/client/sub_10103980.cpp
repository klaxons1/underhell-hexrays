int __thiscall sub_10103980(_DWORD *this)
{
  _DWORD *v2; // ecx
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  v2 = (_DWORD *)this[512];
  *this = &C_PhysPropClientside::`vftable';
  this[1] = &C_PhysPropClientside::`vftable';
  this[2] = &C_PhysPropClientside::`vftable';
  this[3] = &C_PhysPropClientside::`vftable';
  this[490] = &C_PhysPropClientside::`vftable';
  this[491] = &C_PhysPropClientside::`vftable';
  if ( v2 )
    sub_10103930(v2, (int)this);
  sub_100F5370((int)this);
  sub_1000E0F0(this);
  v4 = this;
  sub_1012D820(&v4);
  return sub_10030270((int)this);
}
