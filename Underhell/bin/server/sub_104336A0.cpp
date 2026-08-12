void __cdecl sub_104336A0(int a1, int a2)
{
  int i; // esi

  for ( i = 0; i < a2; ++i )
  {
    if ( !dword_10700A98 )
    {
      dword_10700A9C = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VStudioRender025", 0);
      dword_10700A98 = dword_10700A9C;
    }
    if ( !dword_10700AB0 )
      dword_10700AB0 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_ivgui008", 0);
    if ( !dword_10700AA4 )
      dword_10700AA4 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_Input005", 0);
    if ( !dword_10700AAC )
      dword_10700AAC = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_Panel009", 0);
    if ( !dword_10700AA8 )
      dword_10700AA8 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_Surface030", 0);
    if ( !dword_10700AB8 )
      dword_10700AB8 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_Scheme010", 0);
    if ( !dword_10700ABC )
      dword_10700ABC = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_System010", 0);
    if ( !dword_10700AB4 )
      dword_10700AB4 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VGUI_Localize004", 0);
    if ( !dword_10700AA0 )
      dword_10700AA0 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("MatSystemSurface006", 0);
    if ( !dword_10700AC0 )
      dword_10700AC0 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VDataCache003", 0);
    if ( !dword_10700AC4 )
    {
      dword_10700AC8 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("MDLCache004", 0);
      dword_10700AC4 = dword_10700AC8;
    }
    if ( !dword_10700ACC )
      dword_10700ACC = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VAvi001", 0);
    if ( !dword_10700AD0 )
      dword_10700AD0 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VBik001", 0);
    if ( !dword_10700AD4 )
      dword_10700AD4 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VDmeMakeFileUtils001", 0);
    if ( !dword_10700AD8 )
      dword_10700AD8 = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VPhysicsCollision007", 0);
    if ( !dword_10700ADC )
      dword_10700ADC = (*(int (__cdecl **)(const char *, _DWORD))(a1 + 4 * i))("VSoundEmitter002", 0);
  }
}
