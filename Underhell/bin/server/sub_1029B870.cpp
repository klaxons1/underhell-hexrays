void __thiscall sub_1029B870(int *this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  int v7; // [esp-8h] [ebp-14h]

  sub_10297250((unsigned int)this, a2);
  v3 = this[278];
  if ( v3 == -1 || off_1061BE18[4 * (this[278] & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (this[278] & 0xFFF) + 1];
  if ( v4 == a2 )
  {
    v5 = this[277];
    if ( v5 == -1 || off_1061BE18[4 * (this[277] & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (this[277] & 0xFFF) + 1];
    v7 = v6;
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 1860))(a2);
    (*(int (__thiscall **)(int, int, int, int *))(*(_DWORD *)a2 + 8))(a2, -1, a2, this);
    sub_1002A0F0(this + 307, 2, v7, 6);
    this[278] = -1;
  }
  sub_1029B330(this, a2);
}
