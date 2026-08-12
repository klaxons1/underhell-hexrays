void __cdecl sub_1042CD40(int a1, int a2)
{
  int v2; // esi
  int v3; // eax

  if ( !byte_106FE594 )
  {
    v2 = 0;
    byte_106FE594 = 1;
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
        if ( !dword_106FE590 )
        {
          dword_106FE590 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * v2))("VProcessUtils001", 0);
          v3 = g_pCVar;
        }
        ++v2;
      }
      while ( v2 < a2 );
    }
  }
}
