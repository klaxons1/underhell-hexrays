_DWORD *__thiscall sub_1039D5E0(_DWORD *this)
{
  sub_10332930((int)this);
  *this = &CNPC_PoisonZombie::`vftable';
  this[526] = &CNPC_PoisonZombie::`vftable';
  this[905] = &CNPC_PoisonZombie::`vftable';
  sub_103313F0();
  if ( dword_10677E30 != dword_10694898 )
  {
    sub_1039CFB0();
    byte_10677E2C = 1;
    dword_10677E30 = dword_10694898;
  }
  return this;
}
