int __thiscall sub_1000DEF0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 != this[28] )
  {
    this[28] = a2;
    if ( (a2 & 8) != 0 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 504))(this) )
        sub_100122B0(this);
    }
    return sub_10039310(this);
  }
  return result;
}
