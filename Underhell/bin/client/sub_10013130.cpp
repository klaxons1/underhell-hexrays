_DWORD *__thiscall sub_10013130(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // edx
  int v3; // esi
  _BYTE v5[48]; // [esp+4h] [ebp-60h] BYREF
  _BYTE v6[48]; // [esp+34h] [ebp-30h] BYREF

  v1 = this[81];
  if ( v1 == -1 )
    return this + 992;
  v2 = (int *)((char *)off_103DCD74 + 16 * (this[81] & 0xFFF) + 4);
  if ( *((_DWORD *)off_103DCD74 + 4 * (this[81] & 0xFFF) + 2) != v1 >> 12 )
    return this + 992;
  v3 = *v2;
  if ( !*v2 )
    return this + 992;
  sub_101EE440(this + 992, v6);
  sub_10037F50(v3);
  sub_101EDC00(v3 + 660, v6, v5);
  if ( (dword_104022EC & 1) == 0 )
    dword_104022EC |= 1u;
  sub_101ED7B0(v5, &unk_104022E0);
  return &unk_104022E0;
}
