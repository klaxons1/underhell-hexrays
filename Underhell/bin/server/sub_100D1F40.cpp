unsigned int __thiscall sub_100D1F40(_DWORD *this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // ecx
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // eax

  result = this[280];
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (this[280] & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      v4 = *v3;
      if ( v4 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
        if ( result )
        {
          result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 320))(result);
          if ( (_BYTE)result )
          {
            result = sub_101E7EA0(this[282]);
            v5 = result;
            if ( result )
            {
              v6 = *(_DWORD *)result;
              v7 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD *))(*this + 1204))(this, this[282], this);
              return (*(int (__thiscall **)(unsigned int, int))(v6 + 840))(v5, v7);
            }
          }
        }
      }
    }
  }
  return result;
}
