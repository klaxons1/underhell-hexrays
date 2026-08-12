BOOL __thiscall sub_100F81B0(int this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx
  int v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // rt0
  double v10; // st6
  double v11; // st7
  int v12; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)(this + 324);
  if ( v2 != -1 )
  {
    v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 324) & 0xFFF) + 4);
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
        return *(_BYTE *)(this + 320) > 1u;
    }
  }
  v5 = sub_1000E280((_BYTE *)this);
  if ( (v5 & 0xFC4030) != 0xFC4030 )
    return *(_BYTE *)(this + 320) > 1u;
  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  if ( (v5 & 0x40000) != 0 )
    v7 = 1.0;
  if ( (v5 & 0x80000) != 0 )
    v8 = 1.0;
  if ( (v5 & 0x100000) != 0 )
    v7 = v7 - 1.0;
  if ( (v5 & 0x200000) != 0 )
    v8 = v8 - 1.0;
  if ( (v5 & 0x400000) != 0 )
    v6 = 1.0;
  if ( (v5 & 0x800000) != 0 )
    v6 = v6 - 1.0;
  v12 = *(unsigned __int8 *)(this + 320);
  v9 = v7 * ((double)v12 * 50.0) + *(float *)(this + 284);
  v10 = v8 * ((double)v12 * 50.0) + *(float *)(this + 288);
  v11 = v6 * ((double)v12 * 50.0) + *(float *)(this + 292);
  *(float *)(this + 284) = v9;
  *(float *)(this + 288) = v10;
  *(float *)(this + 292) = v11;
  return *(_BYTE *)(this + 320) > 1u;
}
