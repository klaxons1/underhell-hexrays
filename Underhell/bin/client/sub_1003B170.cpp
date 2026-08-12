int __thiscall sub_1003B170(int this)
{
  unsigned __int8 (__thiscall *v2)(int); // edx
  int v3; // eax
  unsigned __int8 (__thiscall *v4)(int); // edx
  int v5; // eax
  int v7; // [esp-4h] [ebp-14h]

  *(_WORD *)(this + 118) = -1;
  *(_DWORD *)(this + 308) = 0xFFFF;
  *(_BYTE *)(this + 322) = 1;
  *(_DWORD *)(this + 1140) = -1;
  *(_DWORD *)(this + 164) = -1;
  *(_DWORD *)(this + 300) = -1;
  *(_DWORD *)(this + 1136) = -1;
  *(_DWORD *)(this + 80) = -1;
  sub_1008F640(this);
  if ( *(float *)(this + 548) != flt_10459240
    || *(float *)(this + 552) != flt_10459244
    || *(float *)(this + 556) != flt_10459248 )
  {
    sub_1000F6C0(this, 1);
    *(float *)(this + 548) = flt_10459240;
    *(float *)(this + 552) = flt_10459244;
    *(float *)(this + 556) = flt_10459248;
  }
  if ( *(float *)(this + 604) != flt_1045924C
    || *(float *)(this + 608) != flt_10459250
    || *(float *)(this + 612) != flt_10459254 )
  {
    sub_1000F6C0(this, 2);
    *(float *)(this + 604) = flt_1045924C;
    *(float *)(this + 608) = flt_10459250;
    *(float *)(this + 612) = flt_10459254;
  }
  *(_DWORD *)(this + 92) = 0;
  *(float *)(this + 500) = 0.0;
  *(float *)(this + 504) = 0.0;
  *(float *)(this + 508) = 0.0;
  *(float *)(this + 512) = 0.0;
  *(float *)(this + 516) = 0.0;
  *(float *)(this + 520) = 0.0;
  *(float *)(this + 232) = 0.0;
  *(float *)(this + 236) = 0.0;
  *(float *)(this + 240) = 0.0;
  sub_1000DEE0((_DWORD *)this);
  *(float *)(this + 220) = 0.0;
  *(float *)(this + 224) = 0.0;
  *(float *)(this + 228) = 0.0;
  *(float *)(this + 284) = 0.0;
  *(float *)(this + 288) = 0.0;
  *(float *)(this + 292) = 0.0;
  *(float *)(this + 96) = 0.0;
  *(float *)(this + 104) = 0.0;
  *(_WORD *)(this + 132) = 0;
  sub_1008FA90(0);
  sub_1008FB60(0);
  v2 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 4) + 12);
  *(_WORD *)(this + 316) = 0;
  *(_DWORD *)(this + 112) = 0;
  if ( !v2(this + 4)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 8) + 32))(this + 8)
    || (unsigned __int8)sub_101BC880() && !*(_BYTE *)(this + 168) )
  {
    sub_10036200((unsigned __int16 *)this);
  }
  else
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 344))(this);
    sub_10036100(this, v3);
  }
  *(_DWORD *)(this + 312) = 0;
  *(_WORD *)(this + 116) = 0;
  if ( *(_DWORD *)(this + 88) != -1 )
    *(_DWORD *)(this + 88) = -1;
  *(float *)(this + 496) = 0.0;
  *(float *)(this + 296) = 0.0;
  *(_BYTE *)(this + 84) = 0;
  sub_100F7060(0);
  *(_DWORD *)(this + 484) = -1;
  v7 = *(_DWORD *)(this + 152);
  *(_DWORD *)(this + 128) = *((_DWORD *)off_103DC81C + 6);
  sub_10034930(v7);
  v4 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 4) + 12);
  *(_DWORD *)(this + 152) = 0;
  if ( !v4(this + 4)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 8) + 32))(this + 8)
    || (unsigned __int8)sub_101BC880() && !*(_BYTE *)(this + 168) )
  {
    return sub_10036200((unsigned __int16 *)this);
  }
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 344))(this);
  return sub_10036100(this, v5);
}
