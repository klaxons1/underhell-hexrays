int __thiscall sub_101A8C60(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int result; // eax
  int v6; // ecx
  float *v7; // eax
  unsigned int v8; // eax
  int v9; // edi
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int *v13; // ecx

  v2 = *(_DWORD *)(this + 3632);
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 1], v4 = v2 >> 12, v3[1] == v4) && *v3 )
  {
    if ( v3[1] == v4 )
      v6 = *v3;
    else
      v6 = 0;
    v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
    sub_100E0D20(this, v7);
    v8 = *(_DWORD *)(this + 3632);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(v9);
    sub_100E0EA0(this, (float *)(v9 + 704));
    sub_10041D00((_DWORD *)this);
    if ( *(_DWORD *)(this + 2324) == 1 )
    {
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3628) + 172))(*(_DWORD *)(this + 3628));
    }
    else
    {
      v10 = *(_DWORD *)(this + 3632);
      if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 1];
      v12 = *(_DWORD *)(v11 + 300);
      if ( v12 != -1 && (v13 = &off_1061BE18[4 * (*(_DWORD *)(v11 + 300) & 0xFFF) + 1], v13[1] == v12 >> 12) && *v13 )
      {
        sub_1002B660(this, 1);
        result = sub_101A83B0(this);
        *(_DWORD *)(this + 2608) = -1;
      }
      else
      {
        return (*(int (__thiscall **)(int))(*(_DWORD *)this + 2208))(this);
      }
    }
  }
  else
  {
    *(_DWORD *)(this + 3628) = 0;
    return sub_1025FAC0(this);
  }
  return result;
}
