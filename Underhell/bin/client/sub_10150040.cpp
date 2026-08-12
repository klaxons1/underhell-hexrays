int __stdcall sub_10150040(int a1)
{
  int result; // eax
  int v2; // edi
  _DWORD *i; // ebx
  __int16 **v4; // ecx
  __int16 *v5; // esi
  int v6; // eax
  __int16 *v7; // ecx

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
            v6 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v5 + 1196))(*v4);
            v7 = v5;
            if ( v6 == a1 )
              return sub_1000AA30(v7);
            if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v5 + 1200))(v5) == a1 )
              break;
          }
        }
      }
      if ( ++v2 >= 48 )
        return 0;
    }
    v7 = v5;
    return sub_1000AA30(v7);
  }
  return result;
}
