int *__thiscall sub_1012EDC0(int *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // edi
  int *v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char Source[12]; // [esp+Ch] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-4h]
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  sub_10250100((int)this, 0, "InventoryPanel", 1);
  *this = (int)&CInventoryPanel::`vftable';
  if ( !byte_104392EC )
  {
    byte_104392EC = 1;
    v3 = sub_10242540("CInventoryPanel");
    *(_DWORD *)(v3 + 28) = sub_1012E290;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Frame");
  }
  if ( !byte_104392ED )
  {
    byte_104392ED = 1;
    v4 = sub_102484C0("CInventoryPanel");
    *(_DWORD *)(v4 + 24) = sub_1012E290;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Frame");
  }
  if ( !byte_104392EE )
  {
    byte_104392EE = 1;
    v5 = sub_10242580("CInventoryPanel");
    *(_DWORD *)(v5 + 68) = sub_1012E290;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Frame");
  }
  sub_1012EC80((int)&savedregs);
  sub_1012ED20((int)&savedregs);
  this[139] = -1;
  this[140] = -1;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_10237D40(0);
  sub_10237E50(1);
  sub_1023A780(0);
  sub_1024F400(0);
  sub_1024EFD0(this, 0);
  sub_1024EFE0(this, 0);
  sub_1024F000(this, 0);
  sub_1024E310(0);
  sub_1024E300(0);
  sub_10236310(1);
  strcpy(Source, "UHImage0");
  Source[9] = 0;
  v7 = 0;
  v8 = this + 110;
  do
  {
    ++Source[7];
    v9 = sub_100DDA40(404);
    if ( v9 )
      v10 = sub_101310D0(v9, (int)this, Source, (int)"../Sprites/Hud/Inventory/Blank", 0, 0, 0, v7);
    else
      v10 = 0;
    *v8 = v10;
    ++v7;
    ++v8;
  }
  while ( v7 < 28 );
  v11 = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)dword_1047CA7C + 4))(
          dword_1047CA7C,
          "resource/SourceScheme.res",
          "SourceScheme");
  sub_10236970(v11);
  sub_1024F0F0("resource/UI/InventoryPanel.res", 0, 0);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA74 + 72))(dword_1047CA74, this[17], 100);
  v14 = -2130706433;
  sub_10237580(-2130706433);
  sub_1012E360(this);
  DevMsg("InventoryPanel has been constructed\n");
  return this;
}
