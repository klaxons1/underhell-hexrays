int __thiscall sub_10137EF0(int *this, int a2)
{
  int result; // eax

  result = (unsigned int)this[48] >> 5;
  if ( (this[48] & 0x20) == 0 )
  {
    sub_100EAB80(this, 32);
    if ( this[243] )
      sub_10242060();
    sub_100EC4A0(this, -1.0, 0);
    return sub_100EC3F0(this, 0, 0.0, 0);
  }
  return result;
}
