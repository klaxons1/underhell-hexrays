void __cdecl sub_10235200(int a1, int a2)
{
  int i; // esi

  for ( i = 0; i < a2; ++i )
  {
    if ( !dword_1047CA5C )
    {
      dword_1047CA60 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VStudioRender025", 0);
      dword_1047CA5C = dword_1047CA60;
    }
    if ( !dword_1047CA74 )
      dword_1047CA74 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_ivgui008", 0);
    if ( !dword_1047CA68 )
      dword_1047CA68 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_Input005", 0);
    if ( !dword_1047CA70 )
      dword_1047CA70 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_Panel009", 0);
    if ( !dword_1047CA6C )
      dword_1047CA6C = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_Surface030", 0);
    if ( !dword_1047CA7C )
      dword_1047CA7C = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_Scheme010", 0);
    if ( !dword_1047CA80 )
      dword_1047CA80 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_System010", 0);
    if ( !dword_1047CA78 )
      dword_1047CA78 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_Localize004", 0);
    if ( !dword_1047CA64 )
      dword_1047CA64 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("MatSystemSurface006", 0);
    if ( !dword_1047CA84 )
      dword_1047CA84 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VDataCache003", 0);
    if ( !dword_1047CA88 )
    {
      dword_1047CA8C = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("MDLCache004", 0);
      dword_1047CA88 = dword_1047CA8C;
    }
    if ( !dword_1047CA90 )
      dword_1047CA90 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VAvi001", 0);
    if ( !dword_1047CA94 )
      dword_1047CA94 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VBik001", 0);
    if ( !dword_1047CA98 )
      dword_1047CA98 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VDmeMakeFileUtils001", 0);
    if ( !dword_1047CA9C )
      dword_1047CA9C = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VPhysicsCollision007", 0);
    if ( !dword_1047CAA0 )
      dword_1047CAA0 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VSoundEmitter002", 0);
  }
}
