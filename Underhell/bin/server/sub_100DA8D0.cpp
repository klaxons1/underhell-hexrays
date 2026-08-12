char __thiscall sub_100DA8D0(_BYTE *this)
{
  if ( (*((_DWORD *)this + 48) & 0x20) == 0 )
  {
    if ( (unsigned __int8)sub_100E8AC0() )
    {
      if ( this[306] )
        return 1;
    }
    else if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 24))(this) )
    {
      return 1;
    }
  }
  return 0;
}
