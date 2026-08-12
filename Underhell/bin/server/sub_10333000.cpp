int __thiscall sub_10333000(int *this, int *a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // eax
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int *v10; // eax
  int v11[20]; // [esp+10h] [ebp-50h] BYREF

  sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
  if ( (this[62] & 0x40000) != 0 )
  {
    v3 = a2[11];
    if ( v3 == -1 || off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (a2[11] & 0xFFF) + 1];
    v5 = sub_100D7680(v4);
    if ( !v5 || (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 368))(v5) != this )
      return 0;
  }
  v7 = this[905];
  if ( v7 == -1 )
    return sub_100C7DC0(this, (int)a2, a2);
  v8 = &off_1061BE18[4 * (this[905] & 0xFFF) + 1];
  v9 = v7 >> 12;
  if ( off_1061BE18[4 * (this[905] & 0xFFF) + 2] != v9 || !*v8 )
    return sub_100C7DC0(this, (int)a2, a2);
  if ( off_1061BE18[4 * (this[905] & 0xFFF) + 2] == v9 )
    v10 = (int *)*v8;
  else
    v10 = 0;
  sub_100D9E70(v10, (int)this, a2);
  sub_1001E4E0(v11, (int)a2);
  *(float *)&v11[13] = 0.0;
  return sub_100C7DC0(this, (int)a2, v11);
}
