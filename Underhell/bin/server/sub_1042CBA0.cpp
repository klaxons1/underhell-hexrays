int **__thiscall sub_1042CBA0(int **this, const char *a2)
{
  int v3; // eax
  int *v4; // eax
  int *v5; // eax

  if ( g_pCVar )
  {
    v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)g_pCVar + 52))(g_pCVar, a2);
    if ( v3 )
      v4 = (int *)(v3 + 24);
    else
      v4 = 0;
  }
  else
  {
    v4 = &dword_106FE558;
  }
  *this = v4;
  if ( !v4 )
    *this = &dword_106FE558;
  v5 = *this;
  this[1] = *this - 6;
  if ( v5 == &dword_106FE558 && (g_pCVar || byte_1068E33B) )
  {
    Warning("ConVarRef %s doesn't point to an existing ConVar\n", a2);
    byte_1068E33B = 0;
  }
  return this;
}
