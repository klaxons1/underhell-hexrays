int __userpurge sub_10285430@<eax>(int a1@<ecx>, int a2@<ebp>, int a3)
{
  int (__thiscall ***v4)(_DWORD); // eax
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi

  v4 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 36))(a3);
  sub_10250100(a1, v4, "BuildModeDialog", 1);
  *(_DWORD *)a1 = &vgui::BuildModeDialog::`vftable';
  if ( !byte_10481A38 )
  {
    byte_10481A38 = 1;
    v5 = sub_10242540("BuildModeDialog");
    v5[7] = (unsigned int)sub_10281760;
    v5[6] = (unsigned int)sub_10242540("Frame");
  }
  if ( !byte_10481A44 )
  {
    byte_10481A44 = 1;
    v6 = sub_102484C0((int)"BuildModeDialog");
    *(_DWORD *)(v6 + 24) = sub_10281760;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"Frame");
  }
  if ( !byte_10481A45 )
  {
    byte_10481A45 = 1;
    v7 = sub_10242580("BuildModeDialog");
    v7[17] = (unsigned int)sub_10281760;
    v7[6] = (unsigned int)sub_10242580("Frame");
  }
  sub_10283FF0((void *)(a1 + 431));
  sub_10284040((void *)(a1 + 432));
  if ( !byte_10481A8E )
  {
    byte_10481A8E = 1;
    sub_10283F70((int)"StoreUndo", (int)sub_102821C0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10481A8F )
  {
    byte_10481A8F = 1;
    sub_10283F70((int)"ShowNewControlMenu", (int)sub_102821E0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10481A90 )
  {
    byte_10481A90 = 1;
    sub_10283F70((int)"ApplyDataToControls", (int)sub_1025B5C0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_10284090((void *)(a1 + 436));
  if ( !byte_10481A92 )
  {
    byte_10481A92 = 1;
    sub_10283F70((int)"DeletePanel", (int)sub_1025CB70, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10481A93 )
  {
    byte_10481A93 = 1;
    sub_10283F70((int)"Undo", (int)sub_1026F5A0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10481A94 )
  {
    byte_10481A94 = 1;
    sub_10283F70((int)"Copy", (int)sub_10282210, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10481A95 )
  {
    byte_10481A95 = 1;
    sub_10283F70((int)"Paste", (int)sub_10282190, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10481A96 )
  {
    byte_10481A96 = 1;
    sub_10283F70((int)"EnableSaveButton", (int)sub_1026E650, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10481A97 )
  {
    byte_10481A97 = 1;
    sub_10283F70((int)"Close", (int)sub_102821F0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10481A98 )
  {
    byte_10481A98 = 1;
    sub_10283F70((int)"PanelMoved", (int)sub_10282220, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10481A99 )
  {
    byte_10481A99 = 1;
    sub_10283F70((int)"TextKillFocus", (int)sub_102821A0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10481A9A )
  {
    byte_10481A9A = 1;
    sub_10283F70((int)"ReloadLocalization", (int)sub_102821D0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_102840E0((void *)(a1 + 446));
  sub_10284130((void *)(a1 + 447));
  sub_10284180((void *)(a1 + 448));
  *(_DWORD *)(a1 + 780) = -1;
  sub_10237040((int (__thiscall ***)(void *, int, int))a1, 300, 256);
  sub_102361A0((int (__thiscall ***)(void *, int, int))a1, 300, 420);
  *(_DWORD *)(a1 + 452) = 0;
  *(_DWORD *)(a1 + 784) = 0;
  *(_DWORD *)(a1 + 788) = 0;
  *(_DWORD *)(a1 + 792) = 0;
  *(_DWORD *)(a1 + 796) = 0;
  *(_DWORD *)(a1 + 456) = a3;
  *(_DWORD *)(a1 + 508) = 0;
  *(_DWORD *)(a1 + 512) = 0;
  *(_BYTE *)(a1 + 500) = 0;
  sub_10237000((int (__thiscall ***)(void *, _DWORD, int, int, int, int))a1, 1, 0);
  sub_1024E170((_DWORD *)a1, "VGUI Build Mode Editor", 1);
  sub_10284800(a1, a2, 0);
  sub_1024B9C0((int *)a1, "BuildModeDialog", 0);
  return a1;
}
