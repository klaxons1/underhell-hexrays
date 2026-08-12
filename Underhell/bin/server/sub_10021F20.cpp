int __thiscall sub_10021F20(_DWORD *this)
{
  if ( !*((_BYTE *)this + 2940) )
  {
    if ( this[581] == 7 )
      DevMsg("May not have cleaned up on NPC death\n");
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 1176))(this, 0, 0);
  }
  return sub_100C8890(this);
}
