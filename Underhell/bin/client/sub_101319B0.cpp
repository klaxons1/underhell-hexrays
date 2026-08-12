int __thiscall sub_101319B0(int this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  sub_10243490(0, "CFPSPanel");
  *(_DWORD *)this = &CFPSPanel::`vftable';
  if ( !byte_1043954D )
  {
    byte_1043954D = 1;
    v3 = sub_10242540("CFPSPanel");
    *(_DWORD *)(v3 + 28) = sub_10131220;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10439558 )
  {
    byte_10439558 = 1;
    v4 = sub_102484C0("CFPSPanel");
    *(_DWORD *)(v4 + 24) = sub_10131220;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10439559 )
  {
    byte_10439559 = 1;
    v5 = sub_10242580("CFPSPanel");
    *(_DWORD *)(v5 + 68) = sub_10131220;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_10131910((int)&savedregs);
  sub_10236550(a2);
  sub_10236310(0);
  sub_10237030(0);
  sub_10237590(-16777216);
  sub_10239D10(0);
  *(_DWORD *)(this + 208) = 0;
  sub_10131230((_DWORD *)this);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA74 + 72))(
    dword_1047CA74,
    *(_DWORD *)(this + 68),
    250);
  *(_BYTE *)(this + 228) = 0;
  return this;
}
