int __thiscall sub_10285AF0(int (__thiscall ****this)(void *, int, int))
{
  int v2; // edi
  int v3; // esi

  v2 = 0;
  if ( sub_10237130((int (__thiscall ***)(_DWORD))this[4]) <= 0 )
    return 0;
  while ( 1 )
  {
    v3 = sub_10237150(this[4], v2);
    if ( v3 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 68))(v3) == 1 )
        break;
    }
    if ( ++v2 >= sub_10237130((int (__thiscall ***)(_DWORD))this[4]) )
      return 0;
  }
  return v3;
}
