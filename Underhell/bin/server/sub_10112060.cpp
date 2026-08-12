int __thiscall sub_10112060(int this)
{
  int v2; // edi
  int result; // eax
  int v4; // edx
  char v5; // bl
  int v6; // edx

  v2 = *(unsigned __int16 *)(this + 38);
  result = 0xFFFF;
  if ( (_WORD)v2 != 0xFFFF )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31EC + 16))(dword_106B31EC, v2);
    result = *(_DWORD *)(*(_DWORD *)(this + 4) + 24);
    if ( result )
    {
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, result);
      if ( result )
      {
        if ( *(_BYTE *)(this + 41) && (*(_BYTE *)(this + 36) & 4) == 0 || (*(_BYTE *)(this + 36) & 8) != 0 )
        {
          v5 = 1;
        }
        else
        {
          v4 = *(_DWORD *)(this + 4);
          result = *(_DWORD *)(v4 + 252) >> 18;
          v5 = 0;
          if ( (*(_DWORD *)(v4 + 252) & 0x40000) == 0 )
            return result;
        }
        result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31EC + 12))(dword_106B31EC, 16, v2);
        if ( v5 )
        {
          v6 = (*(_WORD *)(this + 36) & 4) == 0;
          if ( (*(_WORD *)(this + 36) & 8) != 0 )
            v6 |= 2u;
          return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31EC + 12))(dword_106B31EC, v6, v2);
        }
      }
    }
  }
  return result;
}
