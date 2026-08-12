void __thiscall sub_101B3070(int this)
{
  if ( (*(_BYTE *)(this + 236) & 0x2C) != 0 )
  {
    sub_101B2FD0((_DWORD **)this);
    if ( (*(_BYTE *)(this + 236) & 0x2C) != 0 )
      sub_101B0600(*(_DWORD *)(this + 800), this);
  }
  sub_100DF330((float *)this);
}
