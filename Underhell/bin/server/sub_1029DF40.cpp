bool __thiscall sub_1029DF40(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v6; // ecx
  int v7; // eax

  v2 = *(_DWORD *)(this + 20);
  if ( v2 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 )
    return 0;
  if ( !*v3 )
    return 0;
  v4 = *(_DWORD *)(this + 24);
  if ( v4 == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 2] != v4 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1] )
  {
    return 0;
  }
  if ( *(_DWORD *)(sub_1029D7B0((_DWORD *)this) + 948) == 2 )
  {
    *(_DWORD *)(this + 20) = -1;
    *(_DWORD *)(this + 24) = -1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1268))(*(_DWORD *)(this + 4)) )
    return 0;
  v6 = *(_DWORD *)(this + 4);
  v7 = *(_DWORD *)(v6 + 2324);
  if ( v7 == 3
    || v7 == 4
    || 0.0 != *(float *)(v6 + 2744) && *(float *)(dword_106B31C8 + 12) - *(float *)(v6 + 2744) < 3.0 )
  {
    return 0;
  }
  return sub_1029D950(this) != 0;
}
