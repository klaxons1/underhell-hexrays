int __thiscall sub_1027C6C0(_DWORD *this)
{
  char v2; // al
  int v3; // esi

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 876))(this);
  v3 = this[348];
  if ( v2 )
  {
    if ( v3 >= 1 )
    {
      if ( v3 >= 2 )
        return (v3 >= 3) + 480;
      else
        return 479;
    }
    else
    {
      return 478;
    }
  }
  else if ( v3 >= 1 )
  {
    if ( v3 >= 2 )
      return (v3 >= 3) + 208;
    else
      return 207;
  }
  else
  {
    return 181;
  }
}
