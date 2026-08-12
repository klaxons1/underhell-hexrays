char __thiscall sub_100DAA70(_DWORD *this)
{
  if ( sub_100D8530(this) )
  {
    this[63] |= 0x20000u;
    if ( !*((_BYTE *)this + 304) )
    {
      ++dword_10697284;
      (*(void (__thiscall **)(_DWORD *))(*this + 84))(this);
      --dword_10697284;
    }
    return 1;
  }
  else
  {
    this[63] &= ~0x20000u;
    if ( !*((_BYTE *)this + 304) )
    {
      ++dword_10697284;
      (*(void (__thiscall **)(_DWORD *))(*this + 84))(this);
      --dword_10697284;
    }
    return 0;
  }
}
