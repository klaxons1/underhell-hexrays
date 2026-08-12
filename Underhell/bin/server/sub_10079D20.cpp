bool __thiscall sub_10079D20(_DWORD *this, int a2)
{
  int v2; // ecx
  char *v3; // eax
  char v4; // cl

  if ( *(_DWORD *)(a2 + 92) != dword_106954D4 )
    return 0;
  v2 = this[1];
  v3 = *(char **)(a2 + 812);
  if ( v3 == *(char **)(v2 + 92) || *(char **)(v2 + 260) == v3 )
    goto LABEL_8;
  if ( !v3 )
    v3 = (char *)String;
  if ( (unsigned __int8)sub_100D6190(v3) )
LABEL_8:
    v4 = 1;
  else
    v4 = 0;
  if ( *(_BYTE *)(a2 + 816) )
    return v4 == 0;
  else
    return v4;
}
