int __thiscall sub_100D1620(_DWORD *this, int a2)
{
  int result; // eax

  result = this[64] >> 28;
  if ( (this[64] & 0x10000000) == 0 )
  {
    if ( a2 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
      if ( (_BYTE)result )
      {
        result = sub_10177950(this, a2);
        if ( (_BYTE)result )
          result = sub_1010DD80(a2, (int)this, 0.0);
        if ( (this[62] & 2) == 0 )
        {
          result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 1424))(a2, this);
          if ( (_BYTE)result )
            return (*(int (__thiscall **)(_DWORD *, int))(*this + 1176))(this, a2);
        }
      }
    }
  }
  return result;
}
