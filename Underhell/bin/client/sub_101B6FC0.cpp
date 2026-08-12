int __stdcall sub_101B6FC0(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  _DWORD *i; // ebx
  _DWORD *v5; // ecx
  int v6; // esi

  result = sub_100422D0();
  if ( result )
  {
    v3 = 0;
    for ( i = (_DWORD *)(result + 3152); ; ++i )
    {
      if ( *i != -1 )
      {
        v5 = (_DWORD *)((char *)off_103DCD74 + 16 * (*i & 0xFFF) + 4);
        if ( *((_DWORD *)off_103DCD74 + 4 * (*i & 0xFFF) + 2) == *i >> 12 )
        {
          v6 = *v5;
          if ( *v5 )
          {
            if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 1160))(*v5) == a1
              && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1164))(v6) == a2 )
            {
              break;
            }
          }
        }
      }
      if ( ++v3 >= 48 )
        return 0;
    }
    return v6;
  }
  return result;
}
