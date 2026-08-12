int __thiscall sub_10041D00(_DWORD *this)
{
  int result; // eax

  sub_100418D0((int)this);
  result = (*(int (__thiscall **)(_DWORD *))(*this + 1672))(this);
  if ( (result & 0x200000) != 0 )
  {
    result = this[698];
    if ( result == 1 || result == 3 || result == 2 )
    {
      result = (*(int (__thiscall **)(_DWORD *))(*this + 264))(this);
      if ( !(_BYTE)result || *((_BYTE *)this + 2680) )
      {
        this[698] = 0;
      }
      else
      {
        result = sub_100697A0(41, 0);
        if ( !(_BYTE)result )
        {
          result = sub_100697A0(42, 0);
          if ( !(_BYTE)result )
          {
            result = sub_100697A0(43, 0);
            if ( !(_BYTE)result )
            {
              result = sub_100697A0(44, 0);
              if ( !(_BYTE)result )
              {
                result = this[698];
                if ( result == 1 || result == 2 )
                {
                  return (*(int (__thiscall **)(_DWORD *))(*this + 1888))(this);
                }
                else if ( result == 3 )
                {
                  return (*(int (__thiscall **)(_DWORD *))(*this + 1892))(this);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
