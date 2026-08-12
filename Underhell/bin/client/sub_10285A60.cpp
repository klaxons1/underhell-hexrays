int __thiscall sub_10285A60(int (__thiscall ****this)(void *, int, int), int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // esi

  v3 = 0;
  if ( sub_10237130((int (__thiscall ***)(_DWORD))this[4]) <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = sub_10237150(this[4], v3);
    if ( v4 )
    {
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
    }
    if ( ++v3 >= sub_10237130((int (__thiscall ***)(_DWORD))this[4]) )
      return 0;
  }
  return v6;
}
