int __thiscall sub_102A7710(_DWORD *this)
{
  unsigned int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  int v5; // eax

  sub_102A0320((int)this);
  v2 = this[17];
  if ( v2 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(v3 + 1488) + 12))(v3 + 1488, this[1]);
  v4 = this[17];
  if ( v4 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
  return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(v5 + 1488) + 20))(v5 + 1488, this[1], 0);
}
