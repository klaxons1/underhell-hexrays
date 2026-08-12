int __thiscall sub_101623C0(_DWORD *this)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)this[390];
  *this = &C_SteamJet::`vftable';
  this[1] = &C_SteamJet::`vftable';
  this[2] = &C_SteamJet::`vftable';
  this[3] = &C_SteamJet::`vftable';
  this[298] = &C_SteamJet::`vftable';
  this[356] = &C_SteamJet::`vftable';
  if ( v2 )
    sub_100EF970(v2, (int)(this + 299));
  this[356] = &IPrototypeAppEffect::`vftable';
  return sub_10011CB0(this);
}
