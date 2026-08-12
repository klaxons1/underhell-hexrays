int __thiscall sub_10228AA0(void *this)
{
  int result; // eax

  result = g_pCVar;
  if ( g_pCVar )
    return (*(int (__thiscall **)(int, void *))(*(_DWORD *)g_pCVar + 28))(g_pCVar, this);
  return result;
}
