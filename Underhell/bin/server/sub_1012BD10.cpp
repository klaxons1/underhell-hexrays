int __thiscall sub_1012BD10(_DWORD *this, int a2, char *String2)
{
  int *v3; // esi
  int v4; // edi
  char *v5; // eax

  if ( a2 )
    v3 = (int *)this[4 * (*(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) & 0xFFF) + 4];
  else
    v3 = (int *)this[16385];
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 )
      break;
    DevWarning("NULL entity in global entity list!\n");
LABEL_10:
    v3 = (int *)v3[3];
    if ( !v3 )
      return 0;
  }
  v5 = *(char **)(v4 + 212);
  if ( !v5 || v5 != String2 && _stricmp(v5, String2) )
    goto LABEL_10;
  return v4;
}
