void __thiscall sub_100DAE10(_DWORD *this, char a2)
{
  int v2; // eax

  if ( a2 )
  {
    v2 = this[63];
    ++this[35];
    if ( (v2 & 0x1000000) == 0 )
    {
      this[63] = v2 | 0x1000000;
      sub_1012DAC0(this);
    }
  }
  else
  {
    this[63] &= ~0x1000000u;
  }
}
