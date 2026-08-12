char __thiscall sub_101223D0(int this, float a2, float a3)
{
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  double v9; // st7
  double v10; // st7
  int v11; // eax
  double v12; // st7
  float v13; // edx
  float v14; // eax
  float v15; // ecx
  double v16; // st7
  int v17; // eax
  float v18; // [esp+8h] [ebp-4Ch]
  float v19; // [esp+8h] [ebp-4Ch]
  float v20[11]; // [esp+10h] [ebp-44h] BYREF
  int v21[6]; // [esp+3Ch] [ebp-18h] BYREF

  if ( 0.0 != *(float *)(this + 36) && *(float *)(this + 36) < (double)a2 )
  {
    sub_10121B60(this);
    return 0;
  }
  v5 = *(_DWORD *)(this + 52);
  if ( v5 == -1
    || (v6 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 52) & 0xFFF) + 4),
        v7 = v5 >> 12,
        *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 52) & 0xFFF) + 2) != v7)
    || !*v6
    || (*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 52) & 0xFFF) + 2) != v7 ? (v8 = 0) : (v8 = *v6),
        (*(int (__thiscall **)(int))(*(_DWORD *)(v8 + 8) + 36))(v8 + 8) < 0) )
  {
    DevWarning("CSoundPatch::Update:  Removing CSoundPatch (%s) with NULL EHandle\n", *(const char **)(this + 44));
    return 0;
  }
  if ( *(_BYTE *)(this + 12) )
  {
    *(_BYTE *)(this + 12) = 0;
LABEL_15:
    v18 = *(float *)(this + 8) * a3;
    v9 = *(float *)(this + 4);
    sub_101F0510(*(float *)(this + 4), *(float *)this, v18);
    *(float *)this = v9;
    *(_DWORD *)(this + 60) |= 2u;
    goto LABEL_17;
  }
  if ( *(float *)(this + 4) != *(float *)this )
    goto LABEL_15;
  *(_DWORD *)(this + 60) &= ~2u;
LABEL_17:
  if ( *(_BYTE *)(this + 28) )
  {
    *(_BYTE *)(this + 28) = 0;
  }
  else if ( *(float *)(this + 20) == *(float *)(this + 16) )
  {
    *(_DWORD *)(this + 60) &= ~1u;
    goto LABEL_22;
  }
  v19 = *(float *)(this + 24) * a3;
  v10 = *(float *)(this + 20);
  sub_101F0510(*(float *)(this + 20), *(float *)(this + 16), v19);
  *(float *)(this + 16) = v10;
  *(_DWORD *)(this + 60) |= 1u;
LABEL_22:
  v11 = *(_DWORD *)(this + 60);
  if ( v11 )
  {
    if ( (*(_BYTE *)(this + 80) & 1) != 0 )
    {
      *(_DWORD *)(this + 60) = v11 | 1;
      sub_10013E00(v20);
      v12 = *(float *)(this + 72) * *(float *)(this + 16);
      v13 = *(float *)(this + 44);
      v14 = *(float *)(this + 32);
      v20[0] = *(float *)(this + 56);
      v20[2] = v12;
      v15 = *(float *)(this + 60);
      v16 = *(float *)this;
      v20[1] = v13;
      v20[3] = v14;
      v20[4] = v15;
      LODWORD(v20[5]) = (int)v16;
      v17 = sub_10121B10((_DWORD *)this);
      sub_10121280(this + 76, v17, (int)v20);
      *(_DWORD *)(this + 60) = 0;
      sub_1011A810(v21);
    }
  }
  return 1;
}
