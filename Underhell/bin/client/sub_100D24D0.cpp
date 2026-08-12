int __thiscall sub_100D24D0(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int (__thiscall *v6)(int); // eax
  int v7; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudPredictionDump");
  *(_DWORD *)this = &CPDumpPanel::`vftable';
  *(_DWORD *)(this + 44) = &CPDumpPanel::`vftable';
  if ( !byte_1043108C )
  {
    byte_1043108C = 1;
    v3 = sub_10242540("CPDumpPanel");
    *(_DWORD *)(v3 + 28) = sub_100D17D0;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1043108D )
  {
    byte_1043108D = 1;
    v4 = sub_102484C0("CPDumpPanel");
    *(_DWORD *)(v4 + 24) = sub_100D17D0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1043108E )
  {
    byte_1043108E = 1;
    v5 = sub_10242580("CPDumpPanel");
    *(_DWORD *)(v5 + 68) = sub_100D17D0;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(_DWORD *)(this + 264) = 0;
  *(_DWORD *)(this + 268) = 0;
  *(_DWORD *)(this + 272) = -1;
  sub_100D23B0();
  sub_100D2410();
  sub_100D2470();
  v6 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32);
  dword_1043107C = this;
  v7 = v6(dword_1044CC48);
  sub_10236510(v7);
  sub_1023A780(0);
  return this;
}
