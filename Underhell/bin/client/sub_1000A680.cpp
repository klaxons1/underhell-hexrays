int __thiscall sub_1000A680(_DWORD *this, const char *a2, int a3)
{
  int v3; // ebx
  _DWORD *i; // edi
  int *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v10; // eax

  v3 = 0;
  for ( i = this + 788; ; ++i )
  {
    if ( *i != -1 )
    {
      v5 = (int *)((char *)off_103DCD74 + 16 * (*i & 0xFFF) + 4);
      v6 = *i >> 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (*i & 0xFFF) + 2) == v6 )
      {
        if ( *v5 )
        {
          if ( *((_DWORD *)off_103DCD74 + 4 * (*i & 0xFFF) + 2) == v6 )
          {
            v7 = *v5;
            if ( v7 )
            {
              if ( !strcmp((const char *)sub_10034D90(v7), a2) )
              {
                v8 = *i == -1 || *((_DWORD *)off_103DCD74 + 4 * (*i & 0xFFF) + 2) != *i >> 12
                   ? 0
                   : *((_DWORD *)off_103DCD74 + 4 * (*i & 0xFFF) + 1);
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 764))(v8) == a3 )
                  break;
              }
            }
          }
        }
      }
    }
    if ( ++v3 >= 48 )
      return 0;
  }
  v10 = this[v3 + 788];
  if ( v10 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[v3 + 788] & 0xFFF) + 2) != v10 >> 12 )
    return 0;
  return *((_DWORD *)off_103DCD74 + 4 * (this[v3 + 788] & 0xFFF) + 1);
}
