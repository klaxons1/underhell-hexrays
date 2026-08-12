int __thiscall sub_1026D6B0(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // edx
  int v8; // eax
  char v9; // dl
  bool v10; // zf
  int v11; // edi
  int v12; // ebp
  int v13; // eax
  int result; // eax

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::Menu::`vftable';
  if ( !byte_1048050C )
  {
    byte_1048050C = 1;
    v4 = sub_10242540("Menu");
    v4[7] = (unsigned int)sub_1026A010;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_1048050D )
  {
    byte_1048050D = 1;
    v5 = sub_102484C0((int)"Menu");
    *(_DWORD *)(v5 + 24) = sub_1026A010;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1048050E )
  {
    byte_1048050E = 1;
    v6 = sub_10242580("Menu");
    v6[17] = (unsigned int)sub_1026A010;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  sub_1026CCF0((void *)(this + 207));
  if ( !byte_10480525 )
  {
    byte_10480525 = 1;
    sub_1026CC70((int)"ScrollBarSliderMoved", (int)sub_1025B5D0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10480526 )
  {
    byte_10480526 = 1;
    sub_1026CC70((int)"KeyModeSet", (int)sub_1026B160, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_1026CD40((void *)(this + 210));
  sub_1026CD90((void *)(this + 211));
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
  *(_DWORD *)(this + 280) = 0;
  *(_DWORD *)(this + 284) = 0;
  *(_DWORD *)(this + 288) = 0;
  *(_DWORD *)(this + 292) = 0;
  *(_DWORD *)(this + 296) = 0;
  *(_DWORD *)(this + 300) = 0;
  *(_DWORD *)(this + 304) = 0;
  *(_DWORD *)(this + 308) = 0;
  *(_DWORD *)(this + 312) = 0;
  *(_DWORD *)(this + 316) = 0;
  *(_DWORD *)(this + 320) = 0;
  *(_DWORD *)(this + 324) = 0;
  *(_DWORD *)(this + 328) = 0;
  *(_DWORD *)(this + 332) = 0;
  *(_DWORD *)(this + 336) = 0;
  *(_DWORD *)(this + 340) = 0;
  *(_DWORD *)(this + 344) = 0;
  *(_DWORD *)(this + 376) = 0;
  *(_DWORD *)(this + 372) = 3;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = -1;
  *(_DWORD *)(this + 356) = -1;
  if ( sub_100DDA40(232) )
    v8 = sub_10272DA0(this, "MenuScrollBar", 1);
  else
    v8 = 0;
  *(_DWORD *)(this + 228) = v8;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 124))(v8, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 228) + 172))(*(_DWORD *)(this + 228), this);
  *(_BYTE *)(this + 348) &= ~1u;
  sub_102366C0((int (__thiscall ***)(void *, int))this, 1);
  sub_1026D510(this, 0);
  sub_10237000((int (__thiscall ***)(void *, _DWORD, int, int, int, int))this, 0, 0);
  sub_10236510((int *)this, a2);
  v9 = *(_BYTE *)(this + 348) & 0xF9 | 4;
  v10 = (*(_WORD *)(this + 80) & 0x1000) == 0;
  *(_DWORD *)(this + 360) = 0;
  *(_DWORD *)(this + 364) = 0;
  *(_DWORD *)(this + 380) = 0;
  *(_BYTE *)(this + 348) = v9;
  *(_DWORD *)(this + 388) = 0;
  if ( v10 )
  {
    *(_DWORD *)(this + 384) = 0;
    *(_DWORD *)(this + 212) = 22;
    return this;
  }
  else
  {
    v11 = dword_1047CA7C;
    v12 = *(_DWORD *)dword_1047CA7C;
    v13 = sub_102368C0((_DWORD *)this);
    *(_DWORD *)(this + 212) = (*(int (__thiscall **)(int, int, int))(v12 + 52))(v11, v13, 22);
    result = this;
    *(_DWORD *)(this + 384) = 0;
  }
  return result;
}
