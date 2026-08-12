int __thiscall sub_1013B100(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this[62];
  if ( (v2 & 0x40) != 0 )
    return sub_1013ADF0((int)this, 5);
  if ( (v2 & 0x20) != 0 )
    return sub_1013ADF0((int)this, 4);
  return sub_1013ADF0((int)this, 0);
}
