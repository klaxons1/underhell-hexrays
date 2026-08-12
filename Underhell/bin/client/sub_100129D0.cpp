int __thiscall sub_100129D0(unsigned __int8 *this, int a2)
{
  int result; // eax

  result = this[316];
  if ( this[316] )
  {
    result -= 8;
    if ( result )
    {
      result -= 2;
      if ( result )
      {
        result = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 844))(this);
        if ( !result )
        {
          result = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 500))(this);
          if ( (_BYTE)result )
            return sub_100E21D0(this, a2);
        }
      }
    }
  }
  return result;
}
