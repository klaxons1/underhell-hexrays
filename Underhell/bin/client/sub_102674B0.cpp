int __thiscall sub_102674B0(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // edx
  char v8; // cl
  int v9; // eax
  int v10; // eax
  int *v11; // eax
  int *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // cl

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::ListPanel::`vftable';
  if ( !byte_10480464 )
  {
    byte_10480464 = 1;
    v4 = sub_10242540("ListPanel");
    v4[7] = (unsigned int)sub_10261090;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_10480465 )
  {
    byte_10480465 = 1;
    v5 = sub_102484C0((int)"ListPanel");
    *(_DWORD *)(v5 + 24) = sub_10261090;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_10480466 )
  {
    byte_10480466 = 1;
    v6 = sub_10242580("ListPanel");
    v6[17] = (unsigned int)sub_10261090;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  sub_10266660((void *)(this + 207));
  if ( !byte_1048047D )
  {
    byte_1048047D = 1;
    sub_102665E0((int)"ScrollBarSliderMoved", (int)sub_10261B70, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_102666B0();
  sub_10266700((void *)(this + 210));
  if ( !byte_10480480 )
  {
    byte_10480480 = 1;
    sub_102665E0((int)"OpenColumnChoiceMenu", (int)sub_1024F680, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_10266750((void *)(this + 212));
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = 0;
  *(_BYTE *)(this + 232) = -1;
  v7 = *(_DWORD *)(this + 216);
  *(_BYTE *)(this + 228) = -1;
  *(_BYTE *)(this + 229) = -1;
  *(_BYTE *)(this + 230) = -1;
  *(_BYTE *)(this + 231) = 0;
  *(_DWORD *)(this + 236) = v7;
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
  *(_DWORD *)(this + 288) = 0;
  *(_DWORD *)(this + 292) = 0;
  *(_DWORD *)(this + 296) = 0;
  *(_DWORD *)(this + 316) = -1;
  *(_DWORD *)(this + 320) = *(_DWORD *)(this + 288);
  *(_DWORD *)(this + 300) = -1;
  *(_DWORD *)(this + 304) = -1;
  *(_DWORD *)(this + 308) = -1;
  *(_DWORD *)(this + 312) = 0;
  *(_DWORD *)(this + 324) = 0;
  *(_DWORD *)(this + 328) = 0;
  *(_DWORD *)(this + 332) = 0;
  *(_DWORD *)(this + 336) = 0;
  *(_DWORD *)(this + 340) = 0;
  *(_DWORD *)(this + 388) = 0;
  *(_DWORD *)(this + 392) = 0;
  *(_DWORD *)(this + 396) = 0;
  *(_DWORD *)(this + 400) = 0;
  *(_DWORD *)(this + 404) = 0;
  *(_DWORD *)(this + 420) = 0;
  *(_DWORD *)(this + 424) = 0;
  *(_DWORD *)(this + 428) = 0;
  *(_DWORD *)(this + 432) = 0;
  *(_DWORD *)(this + 444) = -1;
  v8 = *(_BYTE *)(this + 376);
  *(_BYTE *)(this + 377) &= ~1u;
  *(_DWORD *)(this + 448) = 0;
  *(_DWORD *)(this + 452) = 0;
  *(_DWORD *)(this + 380) = 20;
  *(_DWORD *)(this + 384) = 20;
  *(_DWORD *)(this + 372) = -1;
  *(_BYTE *)(this + 376) = v8 & 0x97 | 0x20;
  if ( sub_100DDA40(232) )
    v9 = sub_10272DA0(this, "HorizScrollBar", 0);
  else
    v9 = 0;
  *(_DWORD *)(this + 364) = v9;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 172))(v9, this);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 364) + 124))(*(_DWORD *)(this + 364), 0);
  if ( sub_100DDA40(232) )
    v10 = sub_10272DA0(this, "VertScrollBar", 1);
  else
    v10 = 0;
  *(_DWORD *)(this + 368) = v10;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 124))(v10, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 368) + 172))(*(_DWORD *)(this + 368), this);
  v11 = (int *)sub_100DDA40(284);
  if ( v11 )
    v12 = sub_1024B100(v11, (int (__thiscall ***)(_DWORD))this, 0, Locale);
  else
    v12 = 0;
  *(_DWORD *)(this + 360) = v12;
  (*(void (__thiscall **)(int *, _DWORD))(*v12 + 124))(v12, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 360) + 264))(*(_DWORD *)(this + 360), 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 360) + 788))(*(_DWORD *)(this + 360), 3);
  if ( sub_100DDA40(100) )
    v13 = sub_1027D150(Locale);
  else
    v13 = 0;
  *(_DWORD *)(this + 352) = v13;
  v14 = sub_100DDA40(236);
  if ( v14 )
    v15 = sub_10249210(v14, 0, "ListImage");
  else
    v15 = 0;
  *(_DWORD *)(this + 356) = v15;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 164))(v15, 0);
  v16 = *(_BYTE *)(this + 376) & 0x78 | 6;
  *(_DWORD *)(this + 344) = -1;
  *(_DWORD *)(this + 348) = -1;
  *(_DWORD *)(this + 284) = 0;
  *(_DWORD *)(this + 280) = -1;
  *(_DWORD *)(this + 408) = -1;
  *(_DWORD *)(this + 436) = 0;
  *(_BYTE *)(this + 376) = v16;
  if ( sub_100DDA40(100) )
    *(_DWORD *)(this + 440) = sub_1027D150(Locale);
  else
    *(_DWORD *)(this + 440) = 0;
  return this;
}
