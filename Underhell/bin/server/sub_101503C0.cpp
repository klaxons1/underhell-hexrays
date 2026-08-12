char __thiscall sub_101503C0(int this, char *String1, char *String)
{
  char result; // al
  int *v5; // ecx
  float Stringa; // [esp+14h] [ebp+Ch]

  if ( String1 != "DisappearDist" && _stricmp(String1, "DisappearDist") )
  {
    if ( String1 != "Solid" && _stricmp(String1, "Solid") )
      return sub_100EBE90(this, String1, String);
    if ( atoi(String) )
      sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
    return 1;
  }
  Stringa = atof(String);
  if ( *(_DWORD *)(this + 800) == LODWORD(Stringa) )
    return 1;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
    *(float *)(this + 800) = Stringa;
    return 1;
  }
  else
  {
    v5 = *(int **)(this + 24);
    if ( v5 )
      sub_100194B0(v5, 800);
    result = 1;
    *(float *)(this + 800) = Stringa;
  }
  return result;
}
