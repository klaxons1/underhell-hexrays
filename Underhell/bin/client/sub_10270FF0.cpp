int __thiscall sub_10270FF0(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::ProgressBar::`vftable';
  if ( !byte_10480A48 )
  {
    byte_10480A48 = 1;
    v4 = sub_10242540("ProgressBar");
    v4[7] = (unsigned int)sub_102707F0;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_10480A54 )
  {
    byte_10480A54 = 1;
    v5 = sub_102484C0((int)"ProgressBar");
    *(_DWORD *)(v5 + 24) = sub_102707F0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_10480A55 )
  {
    byte_10480A55 = 1;
    v6 = sub_10242580("ProgressBar");
    v6[17] = (unsigned int)sub_102707F0;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  sub_10270FA0((void *)(this + 207));
  if ( !byte_10480A64 )
  {
    byte_10480A64 = 1;
    sub_10270F20((int)"DialogVariables", (int)sub_10270E60, 0, 0, 0, 1, 6, 0, 0, 0);
  }
  *(float *)(this + 216) = 0.0;
  *(_DWORD *)(this + 236) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 224) = 4;
  *(_DWORD *)(this + 228) = 8;
  *(_DWORD *)(this + 232) = 4;
  return this;
}
