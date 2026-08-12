int __thiscall sub_1027E1D0(_DWORD *this)
{
  int result; // eax
  int v3; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this + 128))(this);
  if ( (_BYTE)result )
  {
    if ( this[61] )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
      if ( result >= this[60] )
      {
        v3 = this[61] + (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
        *((_BYTE *)this + 264) = 1;
        this[60] = v3;
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 7);
        if ( !(_BYTE)result )
          return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
      }
    }
  }
  return result;
}
