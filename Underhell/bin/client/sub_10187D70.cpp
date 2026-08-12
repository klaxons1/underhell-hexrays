int __thiscall sub_10187D70(int this, char *Source)
{
  int v3; // eax
  int (__thiscall ***v4)(_DWORD); // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  void (__thiscall *v8)(int, _DWORD); // eax
  void (__thiscall *v9)(int); // eax
  int v11; // [esp+Ch] [ebp-4h]
  int (__thiscall **v12)(char *, int); // [esp+Ch] [ebp-4h]
  char *Sourceb; // [esp+18h] [ebp+8h]
  char *Sourcec; // [esp+18h] [ebp+8h]
  char *Sourced; // [esp+18h] [ebp+8h]
  char *Sourcea; // [esp+18h] [ebp+8h]
  char *Sourcee; // [esp+18h] [ebp+8h]

  sub_100B5510((_BYTE *)this, (int)Source);
  sub_10243490(0, Source);
  *(_DWORD *)(this + 248) = &IMapOverviewPanel::`vftable';
  *(_DWORD *)this = &CMapOverview::`vftable';
  *(_DWORD *)(this + 44) = &CMapOverview::`vftable';
  *(_DWORD *)(this + 248) = &CMapOverview::`vftable';
  if ( !byte_104456DC )
  {
    byte_104456DC = 1;
    Sourceb = (char *)sub_10242540("CMapOverview");
    *((_DWORD *)Sourceb + 7) = sub_10185580;
    *((_DWORD *)Sourceb + 6) = sub_10242540("vgui::Panel");
  }
  if ( !byte_104456DD )
  {
    byte_104456DD = 1;
    Sourcec = (char *)sub_102484C0("CMapOverview");
    *((_DWORD *)Sourcec + 6) = sub_10185580;
    *((_DWORD *)Sourcec + 5) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_104456DE )
  {
    byte_104456DE = 1;
    Sourced = (char *)sub_10242580("CMapOverview");
    *((_DWORD *)Sourced + 17) = sub_10185580;
    *((_DWORD *)Sourced + 6) = sub_10242580("vgui::Panel");
  }
  v3 = this + 368;
  v11 = 16;
  for ( Sourcea = (char *)(this + 368); ; v3 = (int)Sourcea )
  {
    *(_DWORD *)(v3 - 68) = 0;
    sub_1000E3C0(v3, 8, 30, (int (__thiscall *)(int))sub_10008F60);
    Sourcea += 320;
    if ( --v11 < 0 )
      break;
  }
  *(_DWORD *)(this + 5728) = 0;
  *(_DWORD *)(this + 5732) = 0;
  *(_DWORD *)(this + 5736) = 0;
  *(_DWORD *)(this + 5740) = 0;
  *(_DWORD *)(this + 5744) = -1;
  *(_DWORD *)(this + 5748) = 0;
  *(_DWORD *)(this + 5752) = -1;
  *(_DWORD *)(this + 5756) = -1;
  *(_DWORD *)(this + 5760) = *(_DWORD *)(this + 5732);
  if ( !*(_DWORD *)(this + 5728) )
    *(_DWORD *)(this + 5728) = sub_10002020;
  *(_DWORD *)(this + 5764) = 0;
  *(_DWORD *)(this + 5768) = 0;
  *(_DWORD *)(this + 5772) = 0;
  *(_DWORD *)(this + 5776) = 0;
  *(_DWORD *)(this + 5780) = 0;
  *(_DWORD *)(this + 5784) = 0;
  *(_DWORD *)(this + 5788) = 0;
  *(_DWORD *)(this + 5792) = 0;
  *(_DWORD *)(this + 5796) = 0;
  *(_DWORD *)(this + 5800) = 0;
  *(_DWORD *)(this + 5804) = 0;
  *(_DWORD *)(this + 5808) = 0;
  *(_DWORD *)(this + 5812) = 0;
  *(_DWORD *)(this + 5816) = 0;
  *(_DWORD *)(this + 5820) = 0;
  *(_DWORD *)(this + 5824) = 0;
  *(_DWORD *)(this + 5828) = 0;
  *(_DWORD *)(this + 5832) = 0;
  *(_DWORD *)(this + 5836) = 0;
  *(_DWORD *)(this + 5840) = 0;
  *(_DWORD *)(this + 5844) = 0;
  *(_DWORD *)(this + 5848) = 0;
  *(_DWORD *)(this + 5852) = 0;
  *(_DWORD *)(this + 5856) = 0;
  *(_DWORD *)(this + 5860) = 0;
  *(_DWORD *)(this + 5864) = 0;
  *(_DWORD *)(this + 5868) = 0;
  *(_DWORD *)(this + 5872) = 0;
  *(_DWORD *)(this + 5876) = 0;
  *(_DWORD *)(this + 5880) = 0;
  *(_DWORD *)(this + 5884) = 0;
  *(_DWORD *)(this + 5888) = 0;
  *(_DWORD *)(this + 5892) = 0;
  *(_DWORD *)(this + 5896) = 0;
  *(_DWORD *)(this + 5900) = 0;
  *(_DWORD *)(this + 5904) = 0;
  *(_DWORD *)(this + 5908) = 0;
  sub_10187CC0();
  v4 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  v5 = (**v4)(v4);
  sub_10236550(v5);
  sub_10236200(0, 0, 256, 256);
  sub_10237580(1677721600);
  sub_10239D10(1);
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 44) + 124))(this + 44);
  Sourcee = (char *)dword_1047CA7C;
  v12 = (int (__thiscall **)(char *, int))(*(_DWORD *)dword_1047CA7C + 32);
  v6 = sub_102368C0(this + 44);
  v7 = (*v12)(Sourcee, v6);
  *(_DWORD *)(this + 6300) = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v7 + 12))(
                               v7,
                               "DefaultSmall",
                               0);
  *(_DWORD *)(this + 6308) = -1;
  *(_DWORD *)(this + 6312) = 0;
  *(float *)(this + 6316) = 0.0;
  *(float *)(this + 6320) = 0.0;
  *(float *)(this + 6324) = 0.0;
  *(_BYTE *)(this + 6388) = 0;
  *(float *)(this + 6328) = 1.0;
  v8 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 72);
  *(float *)(this + 276) = 0.0;
  v8(this, 0);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48, "MapOff");
  sub_10248C80(0);
  v9 = *(void (__thiscall **)(int))(*(_DWORD *)this + 204);
  *(_DWORD *)(this + 256) = 0;
  v9(this);
  *(float *)(this + 6344) = 3.0;
  *(float *)(this + 6360) = 512.0;
  *(float *)(this + 6364) = 512.0;
  *(float *)(this + 6352) = 512.0;
  *(float *)(this + 6356) = 512.0;
  *(_BYTE *)(this + 6304) = 1;
  *(_WORD *)(this + 6305) = 257;
  *(float *)(this + 6372) = 0.0;
  *(_DWORD *)(this + 6296) = 1;
  *(float *)(this + 6384) = 1.0;
  *(float *)(this + 276) = 1000.0;
  *(float *)(this + 280) = 64.0;
  *(float *)(this + 6368) = 0.0;
  memset((void *)(this + 288), 0, 0x1540u);
  memset((void *)(this + 5912), 0, 0x80u);
  memset((void *)(this + 5784), 0, 0x80u);
  memset((void *)(this + 6040), 0, 0x100u);
  sub_10009F80((_DWORD *)(this + 5728));
  dword_10445528 = this + 248;
  return this;
}
