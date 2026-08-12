void __cdecl sub_1022CAC0(int a1, int a2)
{
  int v2; // esi
  int v3; // eax

  if ( !byte_1047A494 )
  {
    v2 = 0;
    byte_1047A494 = 1;
    if ( a2 > 0 )
    {
      v3 = g_pCVar;
      do
      {
        if ( !v3 )
        {
          v3 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * v2))("VEngineCvar004", 0);
          g_pCVar = v3;
          cvar = v3;
        }
        if ( !dword_1047A490 )
        {
          dword_1047A490 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * v2))("VProcessUtils001", 0);
          v3 = g_pCVar;
        }
        ++v2;
      }
      while ( v2 < a2 );
    }
  }
}
