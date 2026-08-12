int __thiscall sub_100C4960(_DWORD *this)
{
  int v2; // esi
  int v3; // esi
  int v5; // [esp-4h] [ebp-Ch]

  v5 = this[264];
  *this = &CBaseAnimating::`vftable';
  sub_10101200(v5);
  v2 = this[222];
  if ( v2 )
  {
    sub_102375F0(v2 + 4112);
    sub_101C8650(v2 + 4092);
    *(_DWORD *)(v2 + 4080) = 0;
    *(_DWORD *)(v2 + 4084) = v2;
    sub_10184660(v2);
  }
  sub_100BD870(this);
  v3 = this[275];
  if ( v3 )
  {
    nullsub_4(this[275]);
    if ( *(_DWORD *)(v3 + 84) )
      sub_10184660(*(_DWORD *)(v3 + 84));
    sub_101C7570(v3 + 96);
    sub_101C8650(v3 + 96);
    sub_102375F0(v3 + 64);
    sub_102375F0(v3 + 44);
    sub_102375F0(v3 + 8);
    sub_10184660(v3);
  }
  sub_1010BB10(this + 269);
  return sub_100DF1D0(this);
}
