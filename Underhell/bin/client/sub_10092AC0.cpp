void __cdecl sub_10092AC0(int *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // esi
  char *v6; // edx
  char *v7; // eax

  if ( *a1 >= 2 )
  {
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
    v2 = __RTDynamicCast(
           v1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
           (int)&CBaseViewport `RTTI Type Descriptor',
           0);
    v3 = v2;
    if ( v2 )
    {
      v4 = v2 + 252;
      v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)(v2 + 252) + 16))(v2 + 252, "commentary_modelviewer");
      if ( v5
        || (v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 864))(v3, "commentary_modelviewer"),
            (*(void (__thiscall **)(int, int, const char *))(*(_DWORD *)v3 + 872))(
              v3,
              v5,
              "PANEL_COMMENTARY_MODELVIEWER"),
            v5) )
      {
        v6 = (char *)Locale;
        if ( *a1 > 2 )
          v6 = (char *)a1[260];
        v7 = (char *)Locale;
        if ( *a1 > 1 )
          v7 = (char *)a1[259];
        sub_100921A0(v5 - 428, v7, v6);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 4))(v4, v5, 1);
      }
    }
  }
  else
  {
    ConMsg("Usage: commentary_showmodelviewer <model name> <optional attached model name>\n");
  }
}
