char __thiscall sub_1004C8B0(int this, float *a2, int a3, int a4)
{
  double v5; // st7
  int v6; // edi
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  double v11; // st7
  double v12; // st5
  double v13; // st4

  if ( !*(_BYTE *)(this + 36) )
    goto LABEL_9;
  if ( *(_BYTE *)(this + 37) )
  {
LABEL_10:
    v7 = *(_DWORD *)(this + 20);
    if ( v7 == -1 )
      return sub_1004B5C0((_DWORD **)this);
    v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
    v9 = v7 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v9 || !*v8 )
      return sub_1004B5C0((_DWORD **)this);
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v9 )
      v6 = *v8;
    else
      v6 = 0;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v9 )
      v10 = *v8;
    else
      v10 = 0;
    v5 = *(float *)(v10 + 856);
    goto LABEL_20;
  }
  if ( *(_DWORD *)(this + 28) == 3
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1364))(*(_DWORD *)(this + 4)) == this
    && *(_BYTE *)(this + 36)
    || *(_DWORD *)(this + 32) == *(_DWORD *)(this + 28) )
  {
LABEL_9:
    if ( !*(_BYTE *)(this + 37) )
      return sub_1004B5C0((_DWORD **)this);
    goto LABEL_10;
  }
  if ( !(unsigned __int8)sub_103E0CF0(0) )
    return sub_1004B5C0((_DWORD **)this);
  v5 = 36.0;
  v6 = sub_1026A890(this + 24);
LABEL_20:
  if ( v6 )
  {
    v11 = v5 - 0.1;
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    v12 = a2[1] - *(float *)(v6 + 584);
    v13 = *a2 - *(float *)(v6 + 580);
    if ( v13 * v13 + v12 * v12 > v11 * v11 )
      return 0;
  }
  return sub_1004B5C0((_DWORD **)this);
}
