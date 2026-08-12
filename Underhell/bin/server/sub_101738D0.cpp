int __thiscall sub_101738D0(int this)
{
  _WORD v3[8]; // [esp+4h] [ebp-10h] BYREF

  *(_DWORD *)this = &CItemFMRadio::`vftable';
  *(_DWORD *)(this + 1120) = &CItemFMRadio::`vftable';
  strcpy((char *)v3, "Radio.Track.1");
  LOBYTE(v3[6]) = *(_BYTE *)(this + 1236) + 49;
  v3[7] = 0;
  sub_1023B860(v3);
  sub_1010BB10((_DWORD *)(this + 1180));
  sub_1010BB10((_DWORD *)(this + 1156));
  sub_1010BB10((_DWORD *)(this + 1128));
  return sub_100C4960((_DWORD *)this);
}
