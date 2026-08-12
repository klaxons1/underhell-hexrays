int *__thiscall sub_10330E70(int *this, char a2)
{
  *this = (int)&CNPC_BaseZombie::`vftable';
  this[526] = (int)&CNPC_BaseZombie::`vftable';
  this[905] = (int)&CNPC_BaseZombie::`vftable';
  --dword_106E5710;
  sub_102375F0(this + 937);
  this[913] = (int)&CAI_Component::`vftable';
  sub_102375F0(this + 907);
  sub_10037B80(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
