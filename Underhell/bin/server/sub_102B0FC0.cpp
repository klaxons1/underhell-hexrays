int __thiscall sub_102B0FC0(_DWORD *this, int a2, float a3)
{
  int result; // eax
  int v5; // edi

  if ( a2 != 1 )
    return (int)sub_100D2380(this, a2, a3);
  result = this[351];
  if ( result > 0 )
  {
    if ( result <= 2 )
      return (int)sub_100D2380(this, 1, a3);
    if ( result == 3 )
    {
      v5 = this[350];
      result = (*(int (__thiscall **)(_DWORD *))(*this + 1452))(this);
      if ( v5 == result )
      {
        if ( this[300] >= v5 )
          return (int)sub_100D2380(this, 6, a3);
        return (int)sub_100D2380(this, 1, a3);
      }
      if ( this[300] < v5 )
        return (int)sub_100D2380(this, 1, a3);
    }
  }
  return result;
}
