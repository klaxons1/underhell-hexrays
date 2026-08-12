unsigned int __thiscall sub_1000BE70(_DWORD *this)
{
  unsigned int result; // eax
  _DWORD *v3; // ecx
  int v4; // edi
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // eax

  result = this[490];
  if ( result != -1 )
  {
    v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4);
    result >>= 12;
    if ( v3[1] == result )
    {
      v4 = *v3;
      if ( *v3 )
      {
        result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 512))(*v3);
        if ( (_BYTE)result )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 504))(v4);
          if ( (_BYTE)result )
          {
            result = sub_10045780(this[492]);
            v5 = result;
            if ( result )
            {
              v6 = *(_DWORD *)result;
              v7 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD *))(*this + 1116))(this, this[492], this);
              return (*(int (__thiscall **)(unsigned int, int))(v6 + 748))(v5, v7);
            }
          }
        }
      }
    }
  }
  return result;
}
