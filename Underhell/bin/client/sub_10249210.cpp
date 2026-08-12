int __thiscall sub_10249210(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::ImagePanel::`vftable';
  if ( !byte_1047D120 )
  {
    byte_1047D120 = 1;
    v4 = sub_10242540("ImagePanel");
    v4[7] = (unsigned int)sub_10248CF0;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_1047D12C )
  {
    byte_1047D12C = 1;
    v5 = sub_102484C0((int)"ImagePanel");
    *(_DWORD *)(v5 + 24) = sub_10248CF0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1047D12D )
  {
    byte_1047D12D = 1;
    v6 = sub_10242580("ImagePanel");
    v6[17] = (unsigned int)sub_10248CF0;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  *(float *)(this + 224) = 0.0;
  *(_DWORD *)(this + 208) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_BYTE *)(this + 220) = 0;
  *(_BYTE *)(this + 221) = 0;
  *(_BYTE *)(this + 222) = 0;
  *(_BYTE *)(this + 223) = 0;
  *(_DWORD *)(this + 228) = 0;
  *(_DWORD *)(this + 232) = -1;
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
  return this;
}
