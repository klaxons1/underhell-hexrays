char __thiscall sub_103142C0(_BYTE *this)
{
  int v3; // eax

  if ( this[4244] )
    return 1;
  if ( *((_DWORD *)this + 1030) != 4 || *((_DWORD *)this + 1053) != 6 )
    return 0;
  if ( !sub_103131E0(this) )
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 368))(this) )
    {
      v3 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 368))(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
        return 1;
    }
  }
  return 0;
}
