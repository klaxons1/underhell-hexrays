int __thiscall sub_10370770(int this)
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
  *(_DWORD *)this = &CBlackHeadcrab::`vftable';
  *(_DWORD *)(this + 2104) = &CBlackHeadcrab::`vftable';
  sub_1004BC70((void (*)(void))sub_10043190, (void (*)(void))sub_1036EBB0, &byte_10673A10);
  if ( dword_10673A20 != dword_10694898 )
  {
    sub_1036DAA0();
    byte_10673A1C = 1;
    dword_10673A20 = dword_10694898;
  }
  return this;
}
