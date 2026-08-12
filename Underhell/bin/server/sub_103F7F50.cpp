int __thiscall sub_103F7F50(_DWORD *this, _DWORD *a2, int a3)
{
  int result; // eax
  void (__thiscall *v5)(_DWORD *, int, _DWORD); // eax

  result = *a2 - 3005;
  if ( *a2 == 3005 )
  {
    if ( this[348] )
    {
      v5 = *(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 1132);
      this[348] = 0;
      v5(this, 12, 0.0);
      return (int)sub_103F7E10((int)this);
    }
  }
  else
  {
    if ( *a2 == 3013 )
    {
      result = 1;
    }
    else
    {
      if ( *a2 != 3016 )
        return sub_100CFE60(this, (int)a2, a3);
      result = 2;
    }
    if ( this[348] != result )
      this[348] = result;
  }
  return result;
}
