void __thiscall sub_10332F60(int this, int a2, float *a3, float *a4)
{
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax

  if ( (*(_DWORD *)(this + 248) & 0x40000) == 0
    || ((v5 = *(_DWORD *)(a2 + 44), v5 == -1) || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v5 >> 12
      ? (v6 = 0)
      : (v6 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1]),
        (v7 = sub_100D7680(v6)) != 0 && (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 368))(v7) == this) )
  {
    if ( (*(_DWORD *)(this + 248) & 0x80000) != 0 && !*(_BYTE *)(this + 225) )
      sub_100EA500((int *)this, *(float *)(a2 + 52), a3, a4, *(_DWORD *)(a2 + 64));
    sub_100360A0((_BYTE *)this, a2, (int)a3, (int)a4);
  }
}
