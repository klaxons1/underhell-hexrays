char __thiscall sub_1023BC60(void *this, _BYTE *a2, int a3, int a4)
{
  _BYTE *v4; // eax
  double v6; // st6
  double v7; // rt0
  double v8; // st6
  __int16 v9; // ax
  _WORD *v10; // edi
  float v13; // [esp+38h] [ebp-Ch]
  float v14; // [esp+40h] [ebp-4h]

  v4 = *(_BYTE **)(a4 + 4);
  if ( v4
    && (sub_10429530(v4, ".wav") || sub_10429530(*(_DWORD *)(a4 + 4), ".mp3") || (v4 = *(_BYTE **)(a4 + 4), *v4 == 33)) )
  {
    v6 = 1.0;
    v14 = 1.0;
    if ( *(_DWORD *)(dword_106984AC + 48) )
    {
      v6 = *(float *)(dword_106984F4 + 44);
      v14 = *(float *)(dword_106984F4 + 44);
    }
    v7 = v6;
    v8 = 1.0 - v6;
    LOBYTE(v9) = sub_1013A6A0(
                   a3,
                   *(char **)(a4 + 4),
                   *(_DWORD *)(a4 + 12),
                   *(float *)(a4 + 8),
                   *(_DWORD *)(a4 + 16),
                   (int)(v7 * (double)*(int *)(a4 + 20) + v8 * (double)(*(_DWORD *)(a4 + 20) / 2)),
                   *(float **)(a4 + 24),
                   *(float *)(a4 + 28),
                   (int *)(a4 + 44));
    if ( !(_BYTE)v9 )
    {
      if ( *(_BYTE *)(a4 + 38) && sub_10429530(*(_DWORD *)(a4 + 4), ".wav") )
        sub_1023A8F0(*(char **)(a4 + 4), "Emitsound");
      v13 = v8;
      (*(void (__thiscall **)(int, _BYTE *, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E8 + 16))(
        dword_106B31E8,
        a2,
        a3,
        *(_DWORD *)a4,
        *(_DWORD *)(a4 + 4),
        *(float *)(a4 + 8),
        *(_DWORD *)(a4 + 12),
        *(_DWORD *)(a4 + 16) | 0x80,
        (int)((double)(*(_DWORD *)(a4 + 20) / 2) * v13 + (double)*(int *)(a4 + 20) * v14),
        *(_DWORD *)(a4 + 24),
        0,
        a4 + 44,
        1,
        *(float *)(a4 + 28),
        *(_DWORD *)(a4 + 40));
      if ( *(_DWORD *)(a4 + 32) )
        **(float **)(a4 + 32) = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 12))(
                                  dword_106B31E8,
                                  *(_DWORD *)(a4 + 4));
      LOBYTE(v9) = (*(int (**)(void *, const char *, ...))(*(_DWORD *)this + 64))(
                     this,
                     "EmitSound:  Raw wave emitted '%s' (ent %i)\n",
                     *(_DWORD *)(a4 + 4),
                     a3);
    }
  }
  else
  {
    v10 = (_WORD *)(a4 + 64);
    if ( *(_WORD *)(a4 + 64) != 0xFFFF
      || (v9 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_106B3204 + 28))(dword_106B3204, v4),
          *v10 = v9,
          v9 != -1) )
    {
      LOBYTE(v9) = sub_1023B9A0(this, (int)v10, a4, a2, a3, a4, a4 + 64);
    }
  }
  return v9;
}
