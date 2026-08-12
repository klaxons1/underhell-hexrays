char __thiscall sub_100EAB80(_DWORD *this, int a2)
{
  char result; // al
  int v4; // edi
  int *v5; // ecx

  result = 6;
  if ( (a2 & 6) != 0 && (this[48] & 6) == 0 )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 320))(this);
    if ( !result )
      result = sub_102EB400((int)this, 307.20001);
  }
  v4 = a2 | this[48];
  if ( this[48] != v4 )
  {
    result = (char)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v5 = (int *)this[6];
      if ( v5 )
        result = sub_100194B0(v5, 192);
    }
    this[48] = v4;
  }
  if ( (a2 & 8) != 0 )
    result = sub_1012DA40(this);
  if ( (a2 & 0x20) != 0 )
    return sub_100D8500(this);
  return result;
}
