void __thiscall sub_102AC9B0(_DWORD *this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx

  v3 = this[249];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[249] & 0xFFF) + 1], v4[1] != v3 >> 12) || !*v4 )
  {
    v5 = sub_101811E0("info_target", -1);
    if ( v5 )
      this[249] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    else
      this[249] = -1;
  }
  v6 = this[249];
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (this[249] & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (this[249] & 0xFFF) + 2] == v8 )
    {
      if ( *v7 )
      {
        if ( off_1061BE18[4 * (this[249] & 0xFFF) + 2] == v8 )
          sub_100E0D20(*v7, a2);
        else
          sub_100E0D20(0, a2);
      }
    }
  }
}
