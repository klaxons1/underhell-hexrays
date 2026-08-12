int __thiscall sub_1027C840(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::SectionedListPanel::`vftable';
  if ( !byte_10481910 )
  {
    byte_10481910 = 1;
    v4 = sub_10242540("SectionedListPanel");
    v4[7] = (unsigned int)sub_10279130;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_10481911 )
  {
    byte_10481911 = 1;
    v5 = sub_102484C0((int)"SectionedListPanel");
    *(_DWORD *)(v5 + 24) = sub_10279130;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_10481912 )
  {
    byte_10481912 = 1;
    v6 = sub_10242580("SectionedListPanel");
    v6[17] = (unsigned int)sub_10279130;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  if ( !byte_1048193C )
  {
    byte_1048193C = 1;
    sub_1027B8E0((int)"ScrollBarSliderMoved", (int)sub_102795F0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  *(_DWORD *)(this + 208) = -1;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = 0;
  *(_DWORD *)(this + 228) = 0;
  *(_DWORD *)(this + 232) = 0;
  *(_DWORD *)(this + 236) = 0;
  *(_DWORD *)(this + 240) = 0;
  *(_DWORD *)(this + 260) = -1;
  v7 = *(_DWORD *)(this + 232);
  *(_DWORD *)(this + 244) = -1;
  *(_DWORD *)(this + 248) = -1;
  *(_DWORD *)(this + 252) = -1;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 264) = v7;
  *(_DWORD *)(this + 268) = 0;
  *(_DWORD *)(this + 272) = 0;
  *(_DWORD *)(this + 276) = 0;
  *(_DWORD *)(this + 296) = -1;
  v8 = *(_DWORD *)(this + 268);
  *(_DWORD *)(this + 280) = -1;
  *(_DWORD *)(this + 284) = -1;
  *(_DWORD *)(this + 288) = -1;
  *(_DWORD *)(this + 292) = 0;
  *(_DWORD *)(this + 300) = v8;
  *(_DWORD *)(this + 304) = 0;
  *(_DWORD *)(this + 308) = 0;
  *(_DWORD *)(this + 312) = 0;
  *(_DWORD *)(this + 316) = 0;
  *(_DWORD *)(this + 320) = 0;
  *(_DWORD *)(this + 324) = -1;
  sub_1027B960();
  v9 = sub_100DDA40(232);
  if ( v9 )
    v10 = sub_10272DA0(v9, (int (__thiscall ***)(_DWORD))this, "SectionedScrollBar", 1);
  else
    v10 = 0;
  *(_DWORD *)(this + 344) = v10;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 124))(v10, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 344) + 172))(*(_DWORD *)(this + 344), this);
  *(_DWORD *)(this + 328) = 0;
  *(_DWORD *)(this + 332) = 0;
  *(_BYTE *)(this + 353) = 0;
  *(_DWORD *)(this + 348) = 0;
  *(_BYTE *)(this + 352) = 0;
  *(_BYTE *)(this + 354) = 1;
  *(_DWORD *)(this + 340) = 20;
  return this;
}
