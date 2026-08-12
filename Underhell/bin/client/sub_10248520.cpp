int __thiscall sub_10248520(int this, int (__thiscall ***a2)(_DWORD))
{
  unsigned int *v3; // edi
  _DWORD *v4; // eax
  int v5; // edi
  _DWORD *v6; // eax
  unsigned int *v7; // edi
  __int16 v8; // cx
  int v10; // [esp+0h] [ebp-Ch]
  int v11; // [esp+4h] [ebp-8h]

  sub_10243490((int *)this, a2, 0);
  *(_DWORD *)this = &vgui::AnimationController::`vftable';
  if ( !byte_1047CC38 )
  {
    byte_1047CC38 = 1;
    v3 = sub_10242540("AnimationController");
    v3[7] = (unsigned int)sub_10244330;
    v3[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_1047CCB8 )
  {
    byte_1047CCB8 = 1;
    v4 = sub_10248440();
    v5 = sub_102483B0(v4, (int)"AnimationController");
    *(_DWORD *)(v5 + 24) = sub_10244330;
    v6 = sub_10248440();
    *(_DWORD *)(v5 + 20) = sub_102483B0(v6, (int)"Panel");
  }
  if ( !byte_1047CC39 )
  {
    byte_1047CC39 = 1;
    v7 = sub_10242580("AnimationController");
    v7[17] = (unsigned int)sub_10244330;
    v7[6] = (unsigned int)sub_10242580("Panel");
  }
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
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
  *(_DWORD *)(this + 288) = 0;
  *(_DWORD *)(this + 292) = 0;
  *(_DWORD *)(this + 296) = 0;
  *(_DWORD *)(this + 300) = 0;
  *(_DWORD *)(this + 304) = 0;
  *(_DWORD *)(this + 308) = 0;
  *(_DWORD *)(this + 316) = -1;
  *(_DWORD *)(this + 312) = -1;
  *(_DWORD *)(this + 324) = -1;
  *(_DWORD *)(this + 320) = -1;
  *(_BYTE *)(this + 207) = 0;
  sub_10236310((int (__thiscall ***)(void *, int))this, 0);
  sub_1023A780((_WORD *)this, 1, v10, v11);
  *(_WORD *)(this + 272) = *sub_10230F20(dword_1047CCCC, (__int16 *)&a2, "position");
  *(_WORD *)(this + 274) = *sub_10230F20(dword_1047CCCC, (__int16 *)&a2, "size");
  *(_WORD *)(this + 276) = *sub_10230F20(dword_1047CCCC, (__int16 *)&a2, "fgcolor");
  *(_WORD *)(this + 278) = *sub_10230F20(dword_1047CCCC, (__int16 *)&a2, "bgcolor");
  *(_WORD *)(this + 280) = *sub_10230F20(dword_1047CCCC, (__int16 *)&a2, "xpos");
  *(_WORD *)(this + 282) = *sub_10230F20(dword_1047CCCC, (__int16 *)&a2, "ypos");
  *(_WORD *)(this + 284) = *sub_10230F20(dword_1047CCCC, (__int16 *)&a2, "wide");
  v8 = *sub_10230F20(dword_1047CCCC, (__int16 *)&a2, "tall");
  *(float *)(this + 208) = 0.0;
  *(_WORD *)(this + 286) = v8;
  return this;
}
