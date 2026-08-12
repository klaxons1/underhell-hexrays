int __thiscall sub_102690D0(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // edx
  int v8; // eax

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::ListViewPanel::`vftable';
  if ( !byte_104804B0 )
  {
    byte_104804B0 = 1;
    v4 = sub_10242540("ListViewPanel");
    v4[7] = (unsigned int)sub_10267E10;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_104804B1 )
  {
    byte_104804B1 = 1;
    v5 = sub_102484C0((int)"ListViewPanel");
    *(_DWORD *)(v5 + 24) = sub_10267E10;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_104804B2 )
  {
    byte_104804B2 = 1;
    v6 = sub_10242580("ListViewPanel");
    v6[17] = (unsigned int)sub_10267E10;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  if ( !byte_104804C8 )
  {
    byte_104804C8 = 1;
    sub_10269050((int)"ScrollBarSliderMoved", (int)sub_10268190, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 240) = -1;
  v7 = *(_DWORD *)(this + 212);
  *(_DWORD *)(this + 224) = -1;
  *(_DWORD *)(this + 228) = -1;
  *(_DWORD *)(this + 232) = -1;
  *(_DWORD *)(this + 236) = 0;
  *(_DWORD *)(this + 244) = v7;
  *(_DWORD *)(this + 248) = 0;
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(_DWORD *)(this + 264) = 0;
  *(_DWORD *)(this + 280) = 0;
  *(_DWORD *)(this + 284) = 0;
  *(_DWORD *)(this + 288) = 0;
  *(_DWORD *)(this + 292) = 0;
  *(_DWORD *)(this + 296) = 0;
  *(_DWORD *)(this + 300) = 0;
  *(_DWORD *)(this + 304) = 0;
  *(_DWORD *)(this + 272) = 20;
  *(_BYTE *)(this + 316) = 0;
  *(_DWORD *)(this + 276) = 0;
  *(_DWORD *)(this + 320) = 0;
  *(_BYTE *)(this + 317) = 0;
  *(_DWORD *)(this + 268) = sub_10267F00;
  *(_DWORD *)(this + 312) = -1;
  if ( sub_100DDA40(232) )
    v8 = sub_10272DA0(this, "HorizScrollBar", 0);
  else
    v8 = 0;
  *(_DWORD *)(this + 208) = v8;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 172))(v8, this);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 208) + 124))(*(_DWORD *)(this + 208), 0);
  return this;
}
