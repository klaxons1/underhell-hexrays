char __stdcall sub_102381F0(int a1, int a2)
{
  _BYTE *v2; // edi
  int v3; // eax

  v2 = (_BYTE *)(*(int (__cdecl **)(int))(a2 + 20))(a1);
  if ( !_stricmp(*(const char **)(a2 + 12), "true") || (v3 = atoi(*(const char **)(a2 + 12))) != 0 )
  {
    LOBYTE(v3) = 1;
    *v2 = 1;
  }
  else
  {
    *v2 = 0;
  }
  return v3;
}
