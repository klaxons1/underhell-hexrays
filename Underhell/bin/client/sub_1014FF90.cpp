int __stdcall sub_1014FF90(int a1)
{
  int result; // eax
  int v2; // edi
  _DWORD *i; // ebx
  __int16 **v4; // ecx
  __int16 *v5; // esi

  result = sub_100422D0();
  if ( result )
  {
    v2 = 0;
    for ( i = (_DWORD *)(result + 3152); ; ++i )
    {
      if ( *i != -1 )
      {
        v4 = (__int16 **)((char *)off_103DCD74 + 16 * (*i & 0xFFF) + 4);
        if ( *((_DWORD *)off_103DCD74 + 4 * (*i & 0xFFF) + 2) == *i >> 12 )
        {
          v5 = *v4;
          if ( *v4 )
          {
            if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v5 + 1196))(*v4) == a1 )
              return *(_DWORD *)(sub_1000AA30(v5) + 1848);
            if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v5 + 1200))(v5) == a1 )
              break;
          }
        }
      }
      if ( ++v2 >= 48 )
        return 0;
    }
    return *(_DWORD *)(sub_1000AA30(v5) + 1852);
  }
  return result;
}
