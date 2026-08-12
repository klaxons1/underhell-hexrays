int __thiscall sub_1025E460(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // eax

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::AnimatingImagePanel::`vftable';
  if ( !byte_1047FF30 )
  {
    byte_1047FF30 = 1;
    v4 = sub_10242540("AnimatingImagePanel");
    v4[7] = (unsigned int)sub_1025E0E0;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_1047FF31 )
  {
    byte_1047FF31 = 1;
    v5 = sub_102484C0((int)"AnimatingImagePanel");
    *(_DWORD *)(v5 + 24) = sub_1025E0E0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1047FF32 )
  {
    byte_1047FF32 = 1;
    v6 = sub_10242580("AnimatingImagePanel");
    v6[17] = (unsigned int)sub_1025E0E0;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = 0;
  *(_DWORD *)(this + 228) = 0;
  *(_DWORD *)(this + 232) = 0;
  *(_DWORD *)(this + 236) = 0;
  v7 = *(_DWORD *)(this + 68);
  *(_DWORD *)(this + 208) = 0;
  *(_DWORD *)(this + 216) = 100;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 240) = 0;
  *(_BYTE *)(this + 245) = 0;
  *(_BYTE *)(this + 246) = 0;
  *(_BYTE *)(this + 244) = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA74 + 72))(dword_1047CA74, v7, 0);
  return this;
}
