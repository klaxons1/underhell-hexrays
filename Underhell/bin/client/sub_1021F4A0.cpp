char __thiscall sub_1021F4A0(int this, int a2, int a3)
{
  bool v4; // zf
  _DWORD *v5; // ebp
  _DWORD *v6; // ebx
  _DWORD *v7; // edi

  *(float *)(this + 52) = (double)*(unsigned __int8 *)(this + 496) * 0.0039215689;
  *(float *)(this + 56) = (double)*(unsigned __int8 *)(this + 497) * 0.0039215689;
  *(float *)(this + 60) = (double)*(unsigned __int8 *)(this + 498) * 0.0039215689;
  *(float *)(this + 140) = (double)*(unsigned __int8 *)(this + 500) * 0.0039215689;
  *(float *)(this + 144) = (double)*(unsigned __int8 *)(this + 501) * 0.0039215689;
  *(float *)(this + 148) = (double)*(unsigned __int8 *)(this + 502) * 0.0039215689;
  *(float *)(this + 228) = (double)*(unsigned __int8 *)(this + 504) * 0.0039215689;
  *(float *)(this + 232) = (double)*(unsigned __int8 *)(this + 505) * 0.0039215689;
  *(float *)(this + 236) = (double)*(unsigned __int8 *)(this + 506) * 0.0039215689;
  *(float *)(this + 316) = (double)*(unsigned __int8 *)(this + 508) * 0.0039215689;
  *(float *)(this + 320) = (double)*(unsigned __int8 *)(this + 509) * 0.0039215689;
  *(float *)(this + 324) = 0.0039215689 * (double)*(unsigned __int8 *)(this + 510);
  *(float *)(this + 88) = 0.0;
  *(float *)(this + 176) = 0.0;
  *(float *)(this + 264) = 0.0;
  *(float *)(this + 352) = 0.0;
  *(float *)(this + 92) = 5.0;
  *(float *)(this + 180) = 5.0;
  *(float *)(this + 268) = 5.0;
  *(float *)(this + 356) = 5.0;
  *(float *)(this + 96) = 0.0;
  *(float *)(this + 100) = 0.0;
  *(float *)(this + 104) = 1.0;
  *(float *)(this + 192) = 1.0;
  *(float *)(this + 280) = 1.0;
  v4 = *(_BYTE *)(this + 512) == 0;
  *(float *)(this + 368) = 1.0;
  *(float *)(this + 184) = 0.0;
  *(float *)(this + 188) = 0.0;
  *(float *)(this + 272) = 0.0;
  *(float *)(this + 276) = 0.0;
  *(float *)(this + 360) = 0.0;
  *(float *)(this + 364) = 0.0;
  if ( v4 )
    *(_DWORD *)(this + 48) = 1;
  else
    *(_DWORD *)(this + 48) = 3;
  v5 = (_DWORD *)(this + 136);
  if ( *(_BYTE *)(this + 513) )
    *v5 = 3;
  else
    *v5 = 1;
  v6 = (_DWORD *)(this + 224);
  if ( *(_BYTE *)(this + 514) )
    *v6 = 3;
  else
    *v6 = 1;
  v7 = (_DWORD *)(this + 312);
  if ( *(_BYTE *)(this + 515) )
    *v7 = 3;
  else
    *v7 = 1;
  *(_BYTE *)(this + 522) = !*(_BYTE *)(this + 516) && *(_DWORD *)(this + 496) != -16777216;
  *(_BYTE *)(this + 523) = !*(_BYTE *)(this + 517) && *(_DWORD *)(this + 500) != -16777216;
  *(_BYTE *)(this + 524) = !*(_BYTE *)(this + 518) && *(_DWORD *)(this + 504) != -16777216;
  *(_BYTE *)(this + 525) = !*(_BYTE *)(this + 519) && *(_DWORD *)(this + 508) != -16777216;
  sub_101F3A70((float *)(this + 48), *(float *)(this + 464), *(float *)(this + 468));
  sub_101F3A70((float *)(this + 136), *(float *)(this + 472), *(float *)(this + 476));
  sub_101F3A70((float *)(this + 224), *(float *)(this + 480), *(float *)(this + 484));
  return sub_101F3A70((float *)(this + 312), *(float *)(this + 488), *(float *)(this + 492));
}
