void __cdecl sub_102335C0(int a1, int a2)
{
  int i; // esi

  for ( i = 0; i < a2; ++i )
  {
    if ( !dword_1047C968 )
      dword_1047C968 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VFileSystem017", 0);
    if ( !dword_1047C96C )
    {
      dword_1047C96C = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VMaterialSystem079", 0);
      dword_1047C970 = dword_1047C96C;
    }
    if ( !dword_1047C974 )
      dword_1047C974 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("InputSystemVersion001", 0);
    if ( !dword_1047C978 )
      dword_1047C978 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("NetworkSystemVersion001", 0);
    if ( !dword_1047C97C )
      dword_1047C97C = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("MaterialSystemHardwareConfig012", 0);
    if ( !dword_1047C980 )
      dword_1047C980 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("DebugTextureInfo001", 0);
    if ( !dword_1047C984 )
      dword_1047C984 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VBAllocTracker001", 0);
    if ( !dword_1047C988 )
      dword_1047C988 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("COLORCORRECTION_VERSION_1", 0);
    if ( !dword_1047C98C )
      dword_1047C98C = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VP4001", 0);
    if ( !dword_1047C990 )
      dword_1047C990 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VMDLLIB001", 0);
    if ( !dword_1047C994 )
      dword_1047C994 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("QueuedLoaderVersion001", 0);
  }
}
