int __thiscall sub_1024BE10(int (__thiscall ***this)(void *, int, int), int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // esi

  if ( !((unsigned __int8 (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*this)[32])(this)
    || !((unsigned __int8 (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*this)[51])(this) )
  {
    return 0;
  }
  v3 = 0;
  if ( sub_10237130((int (__thiscall ***)(_DWORD))this) <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = sub_10237150(this, v3);
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 308))(v4, a2);
    v6 = v5;
    if ( v5 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 128))(v5)
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 204))(v6) )
      {
        break;
      }
    }
    if ( ++v3 >= sub_10237130((int (__thiscall ***)(_DWORD))this) )
      return 0;
  }
  return v6;
}
