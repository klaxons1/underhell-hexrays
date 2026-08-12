int __thiscall sub_10256110(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // eax
  int v8; // edx

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::TextEntry::`vftable';
  if ( !byte_1047F1D8 )
  {
    byte_1047F1D8 = 1;
    v4 = sub_10242540("TextEntry");
    v4[7] = (unsigned int)sub_100B8BA0;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_1047F1D9 )
  {
    byte_1047F1D9 = 1;
    v5 = sub_102484C0((int)"TextEntry");
    *(_DWORD *)(v5 + 24) = sub_100B8BA0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1047F1DA )
  {
    byte_1047F1DA = 1;
    v6 = sub_10242580("TextEntry");
    v6[17] = (unsigned int)sub_100B8BA0;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  if ( !byte_1047F1DB )
  {
    byte_1047F1DB = 1;
    sub_10255EB0((int)"DoCutSelected", (int)sub_10252C30, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047F1DC )
  {
    byte_1047F1DC = 1;
    sub_10255EB0((int)"DoCopySelected", (int)sub_100B9240, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047F1DD )
  {
    byte_1047F1DD = 1;
    sub_10255EB0((int)"DoPaste", (int)sub_10252C20, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_10255F30((void *)(this + 210));
  sub_10255F80((void *)(this + 211));
  sub_10255FD0((void *)(this + 212));
  sub_10256020((void *)(this + 213));
  if ( !byte_1047F1E2 )
  {
    byte_1047F1E2 = 1;
    sub_10255EB0((int)"DoShowIMECandidates", (int)sub_1017EB20, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047F1E3 )
  {
    byte_1047F1E3 = 1;
    sub_10255EB0((int)"DoHideIMECandidates", (int)sub_10252C50, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047F1E4 )
  {
    byte_1047F1E4 = 1;
    sub_10255EB0((int)"DoUpdateIMECandidates", (int)sub_10249FD0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_10256070((void *)(this + 217));
  if ( !byte_1047F1E6 )
  {
    byte_1047F1E6 = 1;
    sub_10255EB0((int)"ScrollBarSliderMoved", (int)sub_101892C0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_102560C0((void *)(this + 219));
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = 0;
  *(_DWORD *)(this + 228) = 0;
  *(_DWORD *)(this + 232) = 0;
  *(_DWORD *)(this + 236) = 0;
  *(_DWORD *)(this + 240) = 0;
  *(_DWORD *)(this + 244) = 0;
  *(_DWORD *)(this + 248) = 0;
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(_DWORD *)(this + 264) = 0;
  *(_DWORD *)(this + 268) = 0;
  *(_DWORD *)(this + 272) = 0;
  *(_DWORD *)(this + 276) = 0;
  *(_DWORD *)(this + 348) = 0;
  *(_DWORD *)(this + 352) = 0;
  *(_DWORD *)(this + 356) = 0;
  *(_DWORD *)(this + 360) = 0;
  *(_DWORD *)(this + 364) = 0;
  *(_DWORD *)(this + 368) = 0;
  *(_DWORD *)(this + 381) = 0;
  sub_10239A90((_WORD *)this, 1);
  *(_DWORD *)(this + 332) = 0;
  *(_DWORD *)(this + 336) = 0;
  *(_WORD *)(this + 406) = 0;
  *(_BYTE *)(this + 402) = 0;
  *(_BYTE *)(this + 403) = 0;
  *(_BYTE *)(this + 293) = 0;
  *(_BYTE *)(this + 294) = 0;
  *(_BYTE *)(this + 342) = 0;
  *(_DWORD *)(this + 280) = 0;
  *(_DWORD *)(this + 376) = 0;
  *(_BYTE *)(this + 380) = 1;
  *(_BYTE *)(this + 284) = 0;
  *(_BYTE *)(this + 285) = 0;
  *(_BYTE *)(this + 341) = 0;
  *(_DWORD *)(this + 308) = 400;
  *(_BYTE *)(this + 295) = 0;
  *(_BYTE *)(this + 296) = 0;
  *(_DWORD *)(this + 344) = 0;
  *(_BYTE *)(this + 385) = 0;
  *(_DWORD *)(this + 328) = -1;
  *(_DWORD *)(this + 324) = 0;
  *(_BYTE *)(this + 386) = 0;
  *(_BYTE *)(this + 387) = 0;
  *(_DWORD *)(this + 388) = 0;
  *(_BYTE *)(this + 404) = 0;
  *(_DWORD *)(this + 920) = 0;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 104))(dword_1047CA68);
  *(_BYTE *)(this + 936) &= ~1u;
  *(_DWORD *)(this + 924) = v7;
  *(_BYTE *)(this + 928) = 0;
  *(_DWORD *)(this + 932) = 0;
  *(_DWORD *)(this + 940) = 0;
  *(_DWORD *)(this + 312) = -1;
  *(_DWORD *)(this + 316) = -1;
  *(_DWORD *)(this + 392) = 0;
  *(_BYTE *)(this + 292) = 0;
  *(_DWORD *)(this + 304) = *(_DWORD *)(this + 308)
                          + (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
  sub_10237030((_DWORD *)this, 3);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 580))(this, 1, 1.0);
  *(_BYTE *)(this + 294) = 1;
  v8 = *(_DWORD *)(this + 272);
  Source = (char *)999999;
  sub_100C2010((int *)(this + 260), v8, &Source);
  *(_BYTE *)(this + 400) &= 0xFCu;
  *(_DWORD *)(this + 396) = 0;
  sub_10253020((int (__thiscall ***)(void *, int *, _BYTE *))this);
  sub_10239AC0((_WORD *)this, 0);
  return this;
}
