int __thiscall sub_102A4840(_DWORD *this)
{
  int result; // eax
  int v3; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this + 304))(this);
  if ( !result )
  {
    v3 = this[4];
    if ( !v3 )
    {
      result = sub_102A43D0((int)this);
      if ( result )
        return result;
      return sub_102A07F0(this);
    }
    if ( v3 != 2 )
      return sub_102A07F0(this);
    result = sub_102A40F0((int)this);
    if ( !result )
      return sub_102A07F0(this);
  }
  return result;
}
