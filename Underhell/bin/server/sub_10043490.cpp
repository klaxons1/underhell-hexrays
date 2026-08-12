_DWORD *__thiscall sub_10043490(_DWORD *this, char a2)
{
  int v3; // edx

  v3 = this[919];
  *this = &CAI_BasePhysicsFlyingBot::`vftable';
  this[526] = &CAI_BasePhysicsFlyingBot::`vftable';
  this[905] = &CAI_BasePhysicsFlyingBot::`vftable';
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 120))(dword_106BAFF4, v3);
  sub_10037B80(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360(this);
  return this;
}
