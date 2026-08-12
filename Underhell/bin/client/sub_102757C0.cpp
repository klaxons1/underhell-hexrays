int __thiscall sub_102757C0(int this, char a2)
{
  int result; // eax
  _DWORD *v4; // ecx
  int v5; // edi
  int v6; // edi

  if ( !*(_BYTE *)(this + 240) )
    sub_10275580(this, 1);
  if ( *(int *)(this + 232) > 0 && *(_BYTE *)(this + 240) )
    return (*(int (__thiscall **)(_DWORD, _DWORD, int, int, int))(**(_DWORD **)(this + 268) + 820))(
             *(_DWORD *)(this + 268),
             *(_DWORD *)(**(_DWORD **)(this + 220) + 208),
             1,
             1,
             1);
  result = *(_DWORD *)(this + 212);
  v4 = *(_DWORD **)(this + 268);
  if ( result >= 0 && result < v4[54] && result <= v4[60] )
  {
    v5 = v4[53];
    if ( *(_DWORD *)(v5 + 12 * result + 4) != result || *(_DWORD *)(v5 + 12 * result + 8) == result )
    {
      result *= 3;
      if ( *(_DWORD *)(v5 + 4 * result) )
      {
        v6 = sub_10273C00((_DWORD *)this);
        result = sub_102741A0(v6, this);
        if ( a2 )
          return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 768))(this, v6);
      }
    }
  }
  return result;
}
