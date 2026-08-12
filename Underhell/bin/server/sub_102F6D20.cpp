char __thiscall sub_102F6D20(int this, float *a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  float *v9; // eax

  v3 = *(_DWORD *)(this + 5692);
  if ( v3 != -1 && (v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1], v5 = v3 >> 12, v4[1] == v5) && (v6 = *v4) != 0 )
  {
    if ( v4[1] == v5 && (v7 = *v4, v6) )
    {
      v8 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      v9 = a2;
      *(_DWORD *)a2 = v8;
    }
    else
    {
      v9 = a2;
      *a2 = NAN;
    }
    v9[5] = 0.80000001;
    v9[4] = 3.0;
    return 1;
  }
  else if ( sub_10295590((_BYTE *)(this + 5144)) && sub_10295D00((_DWORD *)(this + 5144)) )
  {
    return 0;
  }
  else
  {
    return sub_10395A30(a2);
  }
}
