void __thiscall sub_101E8C50(int this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  double v7; // st7
  float v8; // [esp+0h] [ebp-6Ch]
  _BYTE v9[44]; // [esp+Ch] [ebp-60h] BYREF
  float v10; // [esp+38h] [ebp-34h]
  int v11; // [esp+58h] [ebp-14h]
  float v12[3]; // [esp+60h] [ebp-Ch] BYREF
  int savedregs; // [esp+6Ch] [ebp+0h] BYREF

  if ( (*(_BYTE *)(this + 3416) & 1) != 0 )
    sub_100EA940((int *)this, 8);
  else
    sub_100EA9A0((int *)this, 8);
  if ( (*(_BYTE *)(this + 3416) & 1) == 0 )
  {
    if ( *(char *)(this + 3408) < 0 )
      *(_DWORD *)(this + 3408) = 192;
    return;
  }
  v2 = sub_101C5260((_DWORD *)this);
  if ( v2 )
  {
    if ( (*(char (__thiscall **)(int))(*(_DWORD *)v2 + 144))(v2) < 0 )
    {
      if ( (*(_BYTE *)(this + 256) & 1) == 0
        || (*(_DWORD *)(v2 + 248) & 2) != 0
        || (*(_DWORD *)(this + 3292) & 0x600) != 0 )
      {
LABEL_24:
        *(_DWORD *)(this + 3416) &= ~1u;
        *(_DWORD *)(this + 3408) = 192;
        return;
      }
LABEL_29:
      sub_100DD660(this, &flt_106F1CA8);
      v6 = *(_DWORD *)(this + 3296);
      if ( (v6 & 8) != 0 )
      {
        v7 = 1.0;
      }
      else
      {
        if ( (v6 & 0x10) == 0 )
          return;
        v7 = -1.0;
      }
      v8 = v7;
      (*(void (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)v2 + 372))(v2, this, this, 2, LODWORD(v8));
      *(_DWORD *)(this + 3408) = sub_101E1CF0((int)*(float *)(v2 + 108), (int)*(float *)(v2 + 868)) | 0xC0;
      return;
    }
    v2 = 0;
  }
  v3 = sub_100CF460((_DWORD *)this);
  if ( (*(char (__thiscall **)(int))(*(_DWORD *)v3 + 144))(v3) >= 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v5 = *(_DWORD *)(this + 252);
    v12[0] = *(float *)(this + 580);
    v12[1] = *(float *)(this + 584);
    v12[2] = *(float *)(this + 588) - 38.0;
    if ( (v5 & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v12, 81931, this, 0, (int)v9);
    if ( 1.0 != v10 && v11 )
      v2 = v11;
    if ( !v2
      || (*(char (__thiscall **)(int))(*(_DWORD *)v2 + 144))(v2) >= 0
      || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v2 + 312))(v2, this) )
    {
      goto LABEL_24;
    }
    goto LABEL_29;
  }
  v4 = *(_DWORD *)(this + 3292);
  *(_DWORD *)(this + 3408) = 192;
  if ( (v4 & 8) != 0 )
    *(_DWORD *)(this + 3408) = 196;
  else
    *(_DWORD *)(this + 3408) = (v4 & 0x10 | 0x304u) >> 2;
}
