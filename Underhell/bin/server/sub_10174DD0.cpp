int __thiscall sub_10174DD0(_DWORD *this)
{
  int v2; // eax

  v2 = this[281];
  *this = &CItemHelmetWorker::`vftable';
  this[280] = &CItemHelmetWorker::`vftable';
  if ( v2 )
  {
    *(_DWORD *)(*(_DWORD *)(v2 + 8) + 4) = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(*(_DWORD *)(v2 + 4) + 8) = *(_DWORD *)(v2 + 8);
    --dword_106960F0;
    sub_10184660(v2);
  }
  sub_1010BB10(this + 295);
  sub_1010BB10(this + 289);
  sub_1010BB10(this + 282);
  return sub_100C4960(this);
}
