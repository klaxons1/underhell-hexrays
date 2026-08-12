_DWORD *__thiscall sub_1012BF20(
        _DWORD *this,
        int a2,
        char *String2,
        int a4,
        int a5,
        int a6,
        unsigned __int8 (__thiscall ***a7)(_DWORD, _DWORD *))
{
  int v8; // edi
  _DWORD *v9; // esi
  char *v10; // eax

  if ( !String2 || !*String2 )
    return 0;
  if ( *String2 == 33 )
  {
    if ( !a2 )
      return (_DWORD *)sub_1012BE00(String2, a4, a5, a6);
    return 0;
  }
  if ( a2 )
    v8 = this[4 * (*(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) & 0xFFF) + 4];
  else
    v8 = this[16385];
  if ( !v8 )
    return 0;
  while ( 1 )
  {
    v9 = *(_DWORD **)v8;
    if ( *(_DWORD *)v8 )
      break;
    DevWarning("NULL entity in global entity list!\n");
LABEL_18:
    v8 = *(_DWORD *)(v8 + 12);
    if ( !v8 )
      return 0;
  }
  v10 = (char *)v9[65];
  if ( !v10 || v10 != String2 && !sub_100D6190(v9, String2) || a7 && !(**a7)(a7, v9) )
    goto LABEL_18;
  return v9;
}
