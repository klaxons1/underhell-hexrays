char __thiscall sub_1027AB10(_DWORD *this, int a2, char *String2, wchar_t *Source)
{
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // edi
  _DWORD *i; // ecx
  _DWORD *v9; // edi
  int v10; // esi
  int v11; // ebx
  int v12; // esi

  v4 = this[56];
  v5 = 0;
  if ( v4 <= 0 )
    return 0;
  v6 = (_DWORD *)this[53];
  for ( i = v6; *i != a2; i += 9 )
  {
    if ( ++v5 >= v4 )
      return 0;
  }
  if ( v5 < 0 )
    return 0;
  v9 = &v6[9 * v5];
  v10 = 0;
  if ( (int)v9[6] <= 0 )
    return 0;
  v11 = 0;
  do
  {
    if ( !_stricmp((const char *)(v11 + v9[3]), String2) )
      break;
    ++v10;
    v11 += 172;
  }
  while ( v10 < v9[6] );
  if ( v10 < 0 || v10 >= v9[6] )
    return 0;
  v12 = v9[3] + 172 * v10;
  wcsncpy((wchar_t *)(v12 + 32), Source, 0x40u);
  *(_WORD *)(v12 + 158) = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v9[2] + 244))(v9[2], 0, 0);
  return 1;
}
