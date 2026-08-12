int __thiscall sub_103B7050(int this)
{
  int v2; // eax
  unsigned int v3; // eax
  int v4; // eax
  int *v5; // edi
  int v6; // eax
  int v7; // esi
  int *v8; // eax
  int *v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int *v12; // ecx

  v2 = sub_101811E0("bullseye_strider_focus", -1);
  if ( v2 )
    *(_DWORD *)(this + 3900) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  else
    *(_DWORD *)(this + 3900) = -1;
  v3 = *(_DWORD *)(this + 3900);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3900) & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(this + 3900) & 0xFFF) + 1];
  v5 = (int *)(v4 + 248);
  v6 = *(_DWORD *)(v4 + 248);
  v7 = v6 | 0x30000;
  if ( v6 != (v6 | 0x30000) )
  {
    v8 = v5 - 62;
    if ( *((_BYTE *)v5 - 164) )
    {
      *((_BYTE *)v8 + 88) |= 1u;
    }
    else
    {
      v9 = (int *)v8[6];
      if ( v9 )
        sub_100194B0(v9, 248);
    }
    *v5 = v7;
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v10 = *(_DWORD *)(this + 3900);
  if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3900) & 0xFFF) + 2] != v10 >> 12 )
    v11 = 0;
  else
    v11 = off_1061BE18[4 * (*(_DWORD *)(this + 3900) & 0xFFF) + 1];
  sub_100E0D20(v11, (float *)(this + 580));
  if ( *(_DWORD *)(this + 3900) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 3900) & 0xFFF) + 2] != *(_DWORD *)(this + 3900) >> 12 )
  {
    return (*(int (__thiscall **)(_DWORD))(MEMORY[0] + 96))(0);
  }
  v12 = &off_1061BE18[4 * (*(_DWORD *)(this + 3900) & 0xFFF) + 1];
  return (*(int (__thiscall **)(int))(*(_DWORD *)*v12 + 96))(*v12);
}
