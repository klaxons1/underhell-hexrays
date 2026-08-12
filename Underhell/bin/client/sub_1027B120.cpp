int __thiscall sub_1027B120(int this, int (__thiscall ***a2)(_DWORD), int a3)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // eax
  void (__thiscall *v8)(int, _DWORD); // edx

  sub_1024B100((int *)this, a2, 0, "< item >");
  *(_DWORD *)this = &vgui::CItemButton::`vftable';
  if ( !byte_10481928 )
  {
    byte_10481928 = 1;
    v4 = sub_10242540("CItemButton");
    v4[7] = (unsigned int)sub_10279160;
    v4[6] = (unsigned int)sub_10242540("Label");
  }
  if ( !byte_10481929 )
  {
    byte_10481929 = 1;
    v5 = sub_102484C0((int)"CItemButton");
    *(_DWORD *)(v5 + 24) = sub_10279160;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Label");
  }
  if ( !byte_1048192A )
  {
    byte_1048192A = 1;
    v6 = sub_10242580("CItemButton");
    v6[17] = (unsigned int)sub_10279160;
    v6[6] = (unsigned int)sub_10242580("Label");
  }
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
  *(_DWORD *)(this + 348) = 0;
  v7 = *(_DWORD *)this;
  *(_DWORD *)(this + 288) = a2;
  *(_DWORD *)(this + 292) = a3;
  v8 = *(void (__thiscall **)(int, _DWORD))(v7 + 264);
  *(_DWORD *)(this + 300) = 0;
  *(_BYTE *)(this + 352) = 0;
  *(_BYTE *)(this + 353) = 0;
  *(_DWORD *)(this + 296) = -1;
  v8(this, 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 868))(this, -1);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 852))(this);
  return this;
}
