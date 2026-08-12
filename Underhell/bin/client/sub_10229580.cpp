int *__thiscall sub_10229580(int **this, const char *a2, char a3)
{
  int v4; // eax
  int *v5; // eax
  int *result; // eax

  if ( g_pCVar )
  {
    v4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)g_pCVar + 52))(g_pCVar, a2);
    if ( v4 )
      v5 = (int *)(v4 + 24);
    else
      v5 = 0;
  }
  else
  {
    v5 = &dword_10479848;
  }
  *this = v5;
  if ( !v5 )
    *this = &dword_10479848;
  result = *this;
  this[1] = *this - 6;
  if ( result == &dword_10479848 && (g_pCVar || byte_103FC18F) )
  {
    if ( !a3 )
      result = (int *)Warning("ConVarRef %s doesn't point to an existing ConVar\n", a2);
    byte_103FC18F = 0;
  }
  return result;
}
