int __thiscall sub_10079030(int this, char *String2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int (**v6)(void); // esi
  int v8; // [esp+Ch] [ebp-4h]

  v3 = *(unsigned __int16 *)(this + 22);
  v4 = 0;
  v8 = v3;
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(this + 8);
    v6 = (int (**)(void))(v5 + 60 * (unsigned __int16)v4 + 12);
    if ( v5 + 60 * (unsigned __int16)v4 != -12 )
      break;
LABEL_6:
    if ( ++v4 >= v3 )
      return 0;
  }
  if ( _stricmp((const char *)(v5 + 60 * (unsigned __int16)v4 + 20), String2) || !*v6 )
  {
    v3 = v8;
    goto LABEL_6;
  }
  return (*v6)();
}
