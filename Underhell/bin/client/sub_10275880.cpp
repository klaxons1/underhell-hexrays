int __thiscall sub_10275880(_DWORD *this, char a2)
{
  int result; // eax
  _DWORD *v4; // ecx
  int v5; // esi
  _DWORD *v6; // esi
  int v7; // eax

  result = this[53];
  v4 = (_DWORD *)this[67];
  if ( result >= 0 && result < v4[54] && result <= v4[60] )
  {
    v5 = v4[53];
    if ( *(_DWORD *)(v5 + 12 * result + 4) != result || *(_DWORD *)(v5 + 12 * result + 8) == result )
    {
      result *= 3;
      v6 = *(_DWORD **)(v5 + 4 * result);
      if ( v6 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, int, int, int))(*(_DWORD *)this[67] + 820))(this[67], v6[52], 1, 1, 1);
        if ( sub_10273C00(v6) )
        {
          v7 = sub_10273C00(v6);
          sub_102741A0(v7, (int)v6);
        }
        if ( a2 )
          return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 768))(this, v6);
        else
          return sub_10275580((int)v6, 1);
      }
    }
  }
  return result;
}
