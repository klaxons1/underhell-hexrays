int __thiscall sub_103C5C10(int *this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int *v6; // edx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  double v11; // st7
  int v12[20]; // [esp+8h] [ebp-50h] BYREF

  v3 = *(_DWORD *)(a2 + 40);
  if ( v3 == -1 )
    return 0;
  v4 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  v5 = v3 >> 12;
  if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v5 )
    return 0;
  v6 = (int *)*v4;
  if ( !*v4 )
    return 0;
  if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v5 )
    v6 = 0;
  if ( v6 != this )
  {
    v8 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v5 ? *v4 : 0;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 220))(v8) != 21 )
      return 0;
  }
  sub_1001E4E0(v12, a2);
  v9 = *(_DWORD *)(a2 + 40);
  if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  if ( (int *)v10 == this )
  {
    v11 = (double)this[55];
    v12[16] = 0x400000;
    *(float *)&v12[13] = v11;
  }
  return sub_10035940(this, (int)this, (int)v12);
}
