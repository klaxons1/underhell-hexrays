_DWORD *__thiscall sub_103690F0(_DWORD *this)
{
  sub_10332930((int)this);
  *this = &CFastZombie::`vftable';
  this[526] = &CFastZombie::`vftable';
  this[905] = &CFastZombie::`vftable';
  sub_102A84C0((int)(this + 958));
  sub_103313F0();
  if ( dword_106734A0 != dword_10694898 )
  {
    sub_103686C0();
    byte_1067349C = 1;
    dword_106734A0 = dword_10694898;
  }
  return this;
}
