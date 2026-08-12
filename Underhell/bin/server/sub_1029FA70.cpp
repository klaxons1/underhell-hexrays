int __thiscall sub_1029FA70(int *this)
{
  int v2; // edx
  int v3; // edx
  unsigned int v4; // esi

  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this[1] + 140))(this[1], 0, -1);
  sub_100E0970(this[1], v2, 3, 0);
  sub_100EA940((int *)this[1], 1024);
  sub_101C73D0((unsigned int *)this[1], 0);
  sub_100EBE30(this[1], 9);
  v3 = this[1];
  v4 = this[17];
  if ( v4 == -1 || off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 )
    return sub_102675B0(0, v3);
  else
    return sub_102675B0((_DWORD *)off_1061BE18[4 * (v4 & 0xFFF) + 1], v3);
}
