int __thiscall sub_102A43D0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax

  v2 = *(_DWORD *)(this + 68);
  if ( v2 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 || !*v3 )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v5 = sub_1007DB30((_DWORD *)(v4 + 52), 100014);
  if ( sub_10023D10(*(_DWORD **)(this + 4), v5) )
  {
    if ( *(_DWORD *)(this + 68) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != *(_DWORD *)(this + 68) >> 12 )
    {
      v6 = 0;
    }
    else
    {
      v6 = off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
    }
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
        sub_100DAE60(v6);
      *(float *)(this + 168) = *(float *)(v6 + 580);
      *(float *)(this + 172) = *(float *)(v6 + 584);
      *(float *)(this + 176) = *(float *)(v6 + 588);
      *(float *)(this + 180) = 36.0;
    }
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v8 = sub_1007DB30((_DWORD *)(v7 + 52), 100014);
    sub_10023E00(*(char **)(this + 4), v8);
  }
  if ( *(_DWORD *)(this + 104) != 1 )
  {
    sub_102A0280(this);
    return 0;
  }
  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 208) )
    return 100007;
  else
    return sub_102A07F0((_DWORD *)this);
}
