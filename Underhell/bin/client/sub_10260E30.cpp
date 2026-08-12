int __thiscall sub_10260E30(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // edx
  int result; // eax

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::GraphPanel::`vftable';
  if ( !byte_10480420 )
  {
    byte_10480420 = 1;
    v4 = sub_10242540("GraphPanel");
    v4[7] = (unsigned int)sub_10260AE0;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_10480421 )
  {
    byte_10480421 = 1;
    v5 = sub_102484C0((int)"GraphPanel");
    *(_DWORD *)(v5 + 24) = sub_10260AE0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_10480422 )
  {
    byte_10480422 = 1;
    v6 = sub_10242580("GraphPanel");
    v6[17] = (unsigned int)sub_10260AE0;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  *(_DWORD *)(this + 208) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 236) = -1;
  v7 = *(_DWORD *)(this + 208);
  *(_DWORD *)(this + 220) = -1;
  *(_DWORD *)(this + 224) = -1;
  *(_DWORD *)(this + 228) = -1;
  *(_DWORD *)(this + 232) = 0;
  *(_DWORD *)(this + 240) = v7;
  *(_DWORD *)(this + 272) = 0;
  *(_DWORD *)(this + 276) = 0;
  *(_DWORD *)(this + 280) = 0;
  *(_DWORD *)(this + 284) = 0;
  *(_DWORD *)(this + 288) = 0;
  *(float *)(this + 244) = 100.0;
  *(float *)(this + 260) = 0.0;
  *(_DWORD *)(this + 292) = 2;
  *(_DWORD *)(this + 296) = 2;
  *(float *)(this + 264) = 1.0;
  *(_BYTE *)(this + 256) = 0;
  *(_BYTE *)(this + 268) = 1;
  result = this;
  *(float *)(this + 252) = 0.0;
  *(float *)(this + 248) = 0.0;
  return result;
}
