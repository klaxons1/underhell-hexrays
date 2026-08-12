char __thiscall sub_1023EEF0(int this, float a2, float a3)
{
  int v4; // eax
  char *v5; // ecx
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  const char *v11; // esi
  double v12; // st7
  double v13; // st7
  int v14; // eax
  const char *v15; // eax
  double v16; // st7
  int v17; // eax
  int v18; // eax
  float v19; // [esp+Ch] [ebp-4Ch]
  float v20; // [esp+Ch] [ebp-4Ch]
  int v21; // [esp+14h] [ebp-44h] BYREF
  const char *v22; // [esp+18h] [ebp-40h]
  float v23; // [esp+1Ch] [ebp-3Ch]
  int v24; // [esp+20h] [ebp-38h]
  int v25; // [esp+24h] [ebp-34h]
  int v26; // [esp+28h] [ebp-30h]
  int v27[6]; // [esp+40h] [ebp-18h] BYREF

  if ( 0.0 != *(float *)(this + 36) && *(float *)(this + 36) < (double)a2 )
  {
    if ( *(_DWORD *)(this + 68) )
    {
      v4 = sub_1023DDA0((_DWORD *)this);
      if ( v4 >= 0 )
      {
        v5 = *(char **)(this + 44);
        if ( !v5 )
          v5 = (char *)String;
        sub_1023AF30(v4, *(_DWORD *)(this + 56), v5);
      }
      *(_DWORD *)(this + 68) = 0;
    }
    return 0;
  }
  v7 = *(_DWORD *)(this + 52);
  if ( v7 == -1
    || (v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 52) & 0xFFF) + 1],
        v9 = v7 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 52) & 0xFFF) + 2] != v9)
    || !*v8
    || (off_1061BE18[4 * (*(_DWORD *)(this + 52) & 0xFFF) + 2] != v9 ? (v10 = 0) : (v10 = *v8),
        (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v10 + 24)) < 0) )
  {
    v11 = *(const char **)(this + 44);
    if ( !v11 )
      v11 = String;
    DevWarning("CSoundPatch::Update:  Removing CSoundPatch (%s) with NULL EHandle\n", v11);
    return 0;
  }
  if ( *(_BYTE *)(this + 12) )
  {
    *(_BYTE *)(this + 12) = 0;
LABEL_23:
    v19 = *(float *)(this + 8) * a3;
    v12 = *(float *)(this + 4);
    sub_10424B10(*(float *)(this + 4), *(float *)this, v19);
    *(float *)this = v12;
    *(_DWORD *)(this + 60) |= 2u;
    goto LABEL_25;
  }
  if ( *(float *)(this + 4) != *(float *)this )
    goto LABEL_23;
  *(_DWORD *)(this + 60) &= ~2u;
LABEL_25:
  if ( *(_BYTE *)(this + 28) )
  {
    *(_BYTE *)(this + 28) = 0;
LABEL_28:
    v20 = *(float *)(this + 24) * a3;
    v13 = *(float *)(this + 20);
    sub_10424B10(*(float *)(this + 20), *(float *)(this + 16), v20);
    *(float *)(this + 16) = v13;
    *(_DWORD *)(this + 60) |= 1u;
    goto LABEL_30;
  }
  if ( *(float *)(this + 20) != *(float *)(this + 16) )
    goto LABEL_28;
  *(_DWORD *)(this + 60) &= ~1u;
LABEL_30:
  v14 = *(_DWORD *)(this + 60);
  if ( v14 && (*(_BYTE *)(this + 80) & 1) != 0 )
  {
    *(_DWORD *)(this + 60) = v14 | 1;
    sub_100F8510((float *)&v21);
    v15 = *(const char **)(this + 44);
    v21 = *(_DWORD *)(this + 56);
    v22 = v15;
    if ( !v15 )
      v22 = String;
    v16 = *(float *)(this + 72) * *(float *)(this + 16);
    v17 = *(_DWORD *)(this + 60);
    v24 = *(_DWORD *)(this + 32);
    v25 = v17;
    v23 = v16;
    v26 = (int)*(float *)this;
    v18 = sub_1023DDA0((_DWORD *)this);
    sub_1023BE40((_BYTE *)(this + 76), v18, (int)&v21);
    *(_DWORD *)(this + 60) = 0;
    sub_102375F0(v27);
  }
  return 1;
}
