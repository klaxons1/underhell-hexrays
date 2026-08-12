_DWORD *__thiscall sub_1012BC90(_DWORD *this, int a2, char *a3)
{
  int v3; // edi
  _DWORD *v4; // esi

  if ( a2 )
    v3 = this[4 * (*(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) & 0xFFF) + 4];
  else
    v3 = this[16385];
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v4 = *(_DWORD **)v3;
    if ( *(_DWORD *)v3 )
      break;
    DevWarning("NULL entity in global entity list!\n");
LABEL_9:
    v3 = *(_DWORD *)(v3 + 12);
    if ( !v3 )
      return 0;
  }
  if ( (char *)v4[23] != a3 && !sub_100D6240(v4, a3) )
    goto LABEL_9;
  return v4;
}
