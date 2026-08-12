int __thiscall sub_10370650(int this)
{
  sub_10041230((float *)this);
  *(_DWORD *)this = &CBaseHeadcrab::`vftable';
  *(_DWORD *)(this + 2104) = &CBaseHeadcrab::`vftable';
  sub_10043190();
  if ( dword_10673A14 != dword_10694898 )
  {
    sub_1036EBB0();
    byte_10673A10 = 1;
    dword_10673A14 = dword_10694898;
  }
  *(_DWORD *)this = &CHeadcrab::`vftable';
  *(_DWORD *)(this + 2104) = &CHeadcrab::`vftable';
  return this;
}
