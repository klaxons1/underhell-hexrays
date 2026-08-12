int __thiscall sub_10043150(_DWORD *this)
{
  int v2; // edx

  v2 = this[919];
  *this = &CAI_BasePhysicsFlyingBot::`vftable';
  this[526] = &CAI_BasePhysicsFlyingBot::`vftable';
  this[905] = &CAI_BasePhysicsFlyingBot::`vftable';
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 120))(dword_106BAFF4, v2);
  return sub_10037B80(this);
}
