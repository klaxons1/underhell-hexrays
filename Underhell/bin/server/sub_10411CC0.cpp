_DWORD *__thiscall sub_10411CC0(_DWORD *this, char a2)
{
  *this = &CNPC_MissileDefense::`vftable';
  this[526] = &CNPC_MissileDefense::`vftable';
  sub_1023B860(this, (int)"NPC_MissileDefense.Turn");
  sub_10037B80(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
