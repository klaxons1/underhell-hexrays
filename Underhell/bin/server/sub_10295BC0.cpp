char __thiscall sub_10295BC0(int this, int a2)
{
  int v3; // ecx
  int v4; // edx

  if ( ((*(_BYTE *)(a2 + 16) & 1) != 0 || (*(_DWORD *)(a2 + 16) & 0x10) != 0)
    && ((v3 = *(_DWORD *)(this + 4), *(_DWORD *)a2 == -1)
     || off_1061BE18[4 * (*(_DWORD *)a2 & 0xFFF) + 2] != *(_DWORD *)a2 >> 12
      ? (v4 = 0)
      : (v4 = off_1061BE18[4 * (*(_DWORD *)a2 & 0xFFF) + 1]),
        (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 1080))(v3, v4) == 3) )
  {
    return 0;
  }
  else
  {
    return sub_1004B660((_DWORD **)this);
  }
}
