char __thiscall sub_1024BBA0(int *this, _DWORD *a2)
{
  const char *v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v8; // eax
  const char *v9; // eax
  int v10; // ebx
  int v11; // eax

  v3 = (const char *)sub_10229A00(a2);
  if ( !_stricmp(v3, "BuildDialog") )
  {
    v4 = sub_100DDA40(800);
    if ( v4 )
    {
      v5 = sub_1022A910(a2, "BuildGroupPtr", 0);
      v6 = sub_10285430(v4, v5);
      sub_1022ACE0(a2, "PanelPtr", v6);
      return 1;
    }
    v8 = 0;
    goto LABEL_5;
  }
  v9 = (const char *)sub_10229A00(a2);
  if ( !_stricmp(v9, "ControlFactory") )
  {
    v10 = *this;
    v11 = sub_1022B4C0(a2, "ControlName", (int)Locale);
    v8 = (*(int (__thiscall **)(int *, int))(v10 + 792))(this, v11);
    if ( v8 )
    {
LABEL_5:
      sub_1022ACE0(a2, "PanelPtr", v8);
      return 1;
    }
  }
  return sub_102420F0(this, a2);
}
