int __thiscall sub_101F5D80(_DWORD *this)
{
  int v3; // [esp-4h] [ebp-8h]

  v3 = this[258];
  *this = &CPotteryWheelPanel::`vftable';
  sub_10034930(v3);
  sub_10034930(this[260]);
  sub_10034930(this[259]);
  if ( this[261] )
  {
    sub_10034930(this[261]);
    this[261] = 0;
  }
  this[93] = 0;
  sub_10233380(this + 71);
  sub_10233380(this + 70);
  sub_10233210(this + 69);
  sub_10233210(this + 68);
  sub_10233210(this + 67);
  return sub_1024C2A0(this);
}
