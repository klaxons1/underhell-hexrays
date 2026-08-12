int __thiscall sub_10101170(unsigned __int16 *this, int a2)
{
  int v2; // eax

  v2 = (__int16)this[a2 + 10];
  if ( v2 < 0 )
    return 0;
  else
    return (int)&this[24 * v2 + 10] + this[7];
}
