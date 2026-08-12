int *__thiscall sub_103B9C10(int *this, char a2)
{
  int v4; // [esp-4h] [ebp-8h]

  v4 = this[910];
  *this = (int)&CNPC_Strider::`vftable';
  this[526] = (int)&CNPC_Strider::`vftable';
  this[905] = (int)&CNPC_Strider::`vftable';
  sub_10184660(v4);
  sub_102375F0(this + 1001);
  this[984] = (int)&CAI_Component::`vftable';
  sub_101BD560(this + 955);
  sub_10037B80(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
