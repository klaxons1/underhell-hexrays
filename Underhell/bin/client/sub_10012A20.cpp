int __thiscall sub_10012A20(_BYTE *this)
{
  int result; // eax

  if ( this[320] == 3 )
  {
    if ( !this[4592] )
      return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 812))(this, 1);
  }
  else
  {
    if ( this[4592] )
      result = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 812))(this, 0);
    if ( this[320] )
    {
      if ( (*((_DWORD *)this + 183) & 0x200) == 0 )
        return sub_1000DEB0(this, 512);
    }
    else if ( (*((_DWORD *)this + 183) & 0x200) != 0 )
    {
      return sub_1000DEC0(this, 512);
    }
  }
  return result;
}
