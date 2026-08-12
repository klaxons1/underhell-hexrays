int __thiscall sub_10259F80(int this, int (__thiscall ***a2)(_DWORD), int Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // eax
  int *v8; // eax
  int *v9; // eax
  bool v10; // zf
  double v11; // st7
  int v12; // ecx
  int v13; // eax
  _BYTE v15[4]; // [esp+10h] [ebp-28h] BYREF
  int v16; // [esp+14h] [ebp-24h] BYREF
  _DWORD v17[2]; // [esp+18h] [ebp-20h] BYREF
  char v18; // [esp+20h] [ebp-18h]
  __int16 v19; // [esp+22h] [ebp-16h]
  float v20; // [esp+24h] [ebp-14h]
  float v21; // [esp+28h] [ebp-10h]
  int v22; // [esp+34h] [ebp-4h]

  sub_10243490((int *)this, a2, (char *)Source);
  *(_DWORD *)this = &vgui::RichText::`vftable';
  if ( !byte_1047F608 )
  {
    byte_1047F608 = 1;
    v4 = sub_10242540("RichText");
    v4[7] = (unsigned int)sub_100BBBC0;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_1047F609 )
  {
    byte_1047F609 = 1;
    v5 = sub_102484C0((int)"RichText");
    *(_DWORD *)(v5 + 24) = sub_100BBBC0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1047F60A )
  {
    byte_1047F60A = 1;
    v6 = sub_10242580("RichText");
    v6[17] = (unsigned int)sub_100BBBC0;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  if ( !byte_1047F634 )
  {
    byte_1047F634 = 1;
    sub_10259790((int)"DoCutSelected", (int)sub_10257910, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047F635 )
  {
    byte_1047F635 = 1;
    sub_10259790((int)"DoCopySelected", (int)sub_10257930, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_10259810((void *)(this + 209));
  if ( !byte_1047F637 )
  {
    byte_1047F637 = 1;
    sub_10259790((int)"ScrollBarSliderMoved", (int)sub_102739A0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_10259860((void *)(this + 211));
  sub_102598B0((void *)(this + 216));
  sub_10259900((void *)(this + 217));
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
  *(_DWORD *)(this + 280) = 0;
  *(_DWORD *)(this + 328) = 0;
  *(_DWORD *)(this + 332) = 0;
  *(_DWORD *)(this + 340) = 0;
  *(_DWORD *)(this + 344) = 0;
  *(_DWORD *)(this + 348) = 0;
  *(_DWORD *)(this + 352) = 0;
  *(_DWORD *)(this + 356) = 0;
  *(_DWORD *)(this + 364) = 0;
  *(_DWORD *)(this + 400) = 0;
  *(_DWORD *)(this + 320) = 0;
  *(_DWORD *)(this + 324) = 0;
  *(_BYTE *)(this + 284) = 1;
  *(_DWORD *)(this + 384) = 0;
  *(_DWORD *)(this + 296) = 0;
  *(_BYTE *)(this + 300) = 0;
  *(_BYTE *)(this + 301) = 0;
  if ( sub_100DDA40(232) )
    v7 = sub_10272DA0(this, "ScrollBar", 1);
  else
    v7 = 0;
  *(_DWORD *)(this + 212) = v7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 172))(v7, this);
  *(_BYTE *)(this + 388) = 1;
  *(_DWORD *)(this + 316) = 0x10000;
  sub_10241380((_DWORD *)this, (int (***)(void))this);
  v8 = (int *)sub_100DDA40(212);
  if ( v8 )
    v9 = sub_10257B00(v8, this + 264, (int (__thiscall ***)(_DWORD))this, 0);
  else
    v9 = 0;
  *(_DWORD *)(this + 376) = v9;
  *(_DWORD *)(this + 304) = -1;
  *(_DWORD *)(this + 308) = -1;
  *(_DWORD *)(this + 380) = 0;
  sub_10237030((_DWORD *)this, 3);
  sub_10257CC0((_DWORD *)this);
  *(_DWORD *)(this + 364) = 0;
  *(_DWORD *)(this + 256) = 0;
  Source = 999999;
  sub_100C2010((int *)(this + 244), 0, &Source);
  v10 = (*(_WORD *)(this + 80) & 0x1000) == 0;
  *(_DWORD *)(this + 288) = 0;
  *(_BYTE *)(this + 284) = 1;
  if ( v10 )
  {
    *(_DWORD *)(this + 368) = 3;
    *(_DWORD *)(this + 372) = 1;
  }
  else
  {
    (*(void (__thiscall **)(int, int (__thiscall ****)(_DWORD), _BYTE *))(*(_DWORD *)dword_1047CA6C + 356))(
      dword_1047CA6C,
      &a2,
      v15);
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &Source, &v16);
    v11 = (double)Source / (double)(int)a2;
    *(_DWORD *)(this + 368) = (int)(3.0 * v11);
    *(_DWORD *)(this + 372) = (int)v11;
  }
  v12 = *(_DWORD *)(this + 364);
  v13 = *(_DWORD *)(this + 276);
  v20 = 0.0;
  v21 = -1.0;
  v17[0] = v12;
  v19 = -1;
  v17[1] = 0;
  v22 = 0;
  v18 = 0;
  sub_10258BB0((int *)(this + 264), v13, (int)v17);
  *(_BYTE *)(this + 218) = 0;
  *(_BYTE *)(this + 220) = 0;
  *(_BYTE *)(this + 219) = 1;
  return this;
}
