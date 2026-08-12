void __thiscall sub_1029C7E0(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // esi
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 24)
    && (v2 = *(_DWORD *)(this + 20), v2 != -1)
    && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1],
        v4 = v2 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v4)
    && *v3 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v4 )
      v5 = *v3;
    else
      v5 = 0;
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    sub_10422220(v5 + 704, v6);
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 4) + 1836))(*(_DWORD *)(this + 4), v6);
  }
  else
  {
    sub_1004B460((_BYTE *)this);
  }
}
