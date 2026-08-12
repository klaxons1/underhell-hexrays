int **__thiscall sub_10229600(int **this, const char *a2)
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
    v4 = &dword_10479848;
  }
  *this = v4;
  if ( !v4 )
    *this = &dword_10479848;
  v5 = *this;
  this[1] = *this - 6;
  if ( v5 == &dword_10479848 && (g_pCVar || byte_103FC18F) )
  {
    Warning("ConVarRef %s doesn't point to an existing ConVar\n", a2);
    byte_103FC18F = 0;
  }
  return this;
}
