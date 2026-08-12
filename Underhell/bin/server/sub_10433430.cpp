void __cdecl sub_10433430(int a1, int a2)
{
  int i; // esi

  for ( i = 0; i < a2; ++i )
  {
    if ( !dword_10700A38 )
      dword_10700A38 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VFileSystem017", 0);
    if ( !dword_10700A3C )
    {
      dword_10700A3C = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VMaterialSystem079", 0);
      dword_10700A40 = dword_10700A3C;
    }
    if ( !dword_10700A44 )
      dword_10700A44 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("InputSystemVersion001", 0);
    if ( !dword_10700A48 )
      dword_10700A48 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("NetworkSystemVersion001", 0);
    if ( !dword_10700A4C )
      dword_10700A4C = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("MaterialSystemHardwareConfig012", 0);
    if ( !dword_10700A50 )
      dword_10700A50 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("DebugTextureInfo001", 0);
    if ( !dword_10700A54 )
      dword_10700A54 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VBAllocTracker001", 0);
    if ( !dword_10700A58 )
      dword_10700A58 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("COLORCORRECTION_VERSION_1", 0);
    if ( !dword_10700A5C )
      dword_10700A5C = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VP4001", 0);
    if ( !dword_10700A60 )
      dword_10700A60 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VMDLLIB001", 0);
    if ( !dword_10700A64 )
      dword_10700A64 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("QueuedLoaderVersion001", 0);
  }
}
