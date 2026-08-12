int __thiscall sub_101CC0A0(int this)
{
  bool v2; // zf
  int v3; // eax

  v2 = *(_BYTE *)(this + 4420) == 0;
  *(_DWORD *)this = &CRagdollProp::`vftable';
  *(_DWORD *)(this + 1120) = &CRagdollProp::`vftable';
  if ( !v2 )
    sub_101FB2A0(this);
  if ( (*(_DWORD *)(this + 256) & 0x10000000) != 0 && (v3 = *(_DWORD *)(this + 1124)) != 0
    || *(_BYTE *)(this + 1864) && (v3 = *(_DWORD *)(this + 1124)) != 0
    || (v3 = *(_DWORD *)(this + 1124)) != 0 )
  {
    v2 = *(_BYTE *)(this + 1866) == 0;
    *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4) = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8);
    if ( v2 )
      --dword_106960D8;
    else
      --dword_106960E4;
    sub_10184660(v3);
    *(_DWORD *)(this + 1124) = 0;
  }
  sub_1010BB10((_DWORD *)(this + 1836));
  return sub_100C4960((_DWORD *)this);
}
