int __thiscall sub_100D8E90(int this, int Src, float a3, float a4)
{
  int v5; // esi
  double (__thiscall *v6)(int, int *); // eax
  double v7; // st7
  double (__thiscall *v8)(int, int *); // eax
  double v9; // st7
  unsigned int v10; // eax
  char *v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  float v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int *v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  _DWORD *v22; // eax
  int v23; // edi
  int result; // eax
  float v25; // [esp+2Ch] [ebp-14h] BYREF
  float v26; // [esp+30h] [ebp-10h]
  float v27; // [esp+34h] [ebp-Ch]
  int v28; // [esp+38h] [ebp-8h]
  int v29; // [esp+3Ch] [ebp-4h] BYREF
  int savedregs; // [esp+40h] [ebp+0h] BYREF
  _DWORD *Srca; // [esp+48h] [ebp+8h]
  int v32; // [esp+4Ch] [ebp+Ch]

  v5 = *(_DWORD *)(this + 240) + 84 * (Src % 90);
  v28 = *(_DWORD *)(this + 244) + 88 * (Src % 90);
  *(_DWORD *)(v5 + 8) = 0;
  *(float *)(v5 + 12) = 0.0;
  *(float *)(v5 + 16) = 0.0;
  *(float *)(v5 + 20) = 0.0;
  *(_DWORD *)(v5 + 36) = 0;
  *(float *)(v5 + 24) = 0.0;
  *(_BYTE *)(v5 + 40) = 0;
  *(float *)(v5 + 28) = 0.0;
  *(_DWORD *)(v5 + 44) = 0;
  *(float *)(v5 + 32) = 0.0;
  *(_DWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 52) = 0;
  *(_WORD *)(v5 + 56) = 0;
  *(_WORD *)(v5 + 58) = 0;
  *(_BYTE *)(v5 + 60) = 0;
  *(_DWORD *)(v5 + 76) = 0;
  *(_DWORD *)(v5 + 4) = Src;
  *(_DWORD *)(v5 + 8) = *((_DWORD *)off_103DC81C + 6);
  if ( LOBYTE(a4) || *(_DWORD *)(dword_10432D8C + 48) )
  {
    sub_100D7C50((float *)this, a3);
    sub_100D75F0((int *)this, v5);
    v6 = *(double (__thiscall **)(int, int *))(*(_DWORD *)this + 64);
    a4 = *(float *)(dword_1043290C + 44);
    v7 = v6(this, dword_10432614);
    *(float *)(v5 + 32) = v7 * a4 + *(float *)(v5 + 32);
    v8 = *(double (__thiscall **)(int, int *))(*(_DWORD *)this + 64);
    a4 = *(float *)(dword_1043290C + 44);
    v9 = v8(this, dword_10432608);
    *(float *)(v5 + 32) = *(float *)(v5 + 32) - v9 * a4;
    sub_100D7770((int *)this, v5);
    if ( !*(_BYTE *)(this + 184) && *(_BYTE *)(this + 49) )
      sub_100D9C60(v5);
    sub_100D5540(this, this, a3, v5);
  }
  else if ( !*(_BYTE *)(this + 184) && *(_BYTE *)(this + 49) )
  {
    sub_100D9680(&v29, &a4);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 120))(this);
  }
  sub_100D81B0((float *)this, (int)&savedregs, this, v5, v5);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, &v25);
  *(_BYTE *)(v5 + 40) = dword_10432714;
  v10 = *(_DWORD *)(this + 252);
  dword_10432714 = 0;
  if ( v10 != -1 )
  {
    v11 = (char *)off_103DCD74 + 16 * (v10 & 0xFFF) + 4;
    v12 = v10 >> 12;
    if ( *((_DWORD *)v11 + 1) == v12 )
    {
      if ( *(_DWORD *)v11 )
      {
        if ( *((_DWORD *)v11 + 1) == v12 )
          a4 = *(float *)v11;
        else
          a4 = 0.0;
        v13 = (*(int (__thiscall **)(int))(*(_DWORD *)(LODWORD(a4) + 8) + 36))(LODWORD(a4) + 8);
        v14 = a4;
        *(_DWORD *)(v5 + 44) = v13;
        *(_DWORD *)(v5 + 48) = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v14) + 764))(COERCE_FLOAT(LODWORD(v14)));
        if ( *(_BYTE *)(sub_100422D0() + 4140) )
          (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_1041315C + 24))(
            dword_1041315C,
            "ironsight_toggle",
            1);
        *(_DWORD *)(this + 252) = -1;
      }
    }
  }
  v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 32))(this, 1);
  *(_DWORD *)(v5 + 36) = v15;
  if ( *(_DWORD *)(dword_10432A74 + 48) )
  {
    if ( *(float *)(v5 + 24) <= 0.0 )
    {
      if ( *(float *)(v5 + 24) >= 0.0 )
        goto LABEL_25;
      v16 = v15 | 0x10;
    }
    else
    {
      v16 = v15 | 8;
    }
    *(_DWORD *)(v5 + 36) = v16;
  }
LABEL_25:
  if ( dword_103E0E84 )
  {
    *(float *)(v5 + 12) = v25;
    *(float *)(v5 + 16) = v26;
    *(float *)(v5 + 20) = v27;
    *(float *)(this + 224) = v25;
    *(float *)(this + 228) = v26;
    *(float *)(this + 232) = v27;
  }
  else
  {
    *(float *)(v5 + 12) = *(float *)(this + 224);
    *(float *)(v5 + 16) = *(float *)(this + 228);
    *(float *)(v5 + 20) = *(float *)(this + 232);
  }
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_1044CC48 + 84))(LODWORD(a3), v5) )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v5 + 12);
  *(float *)(this + 236) = *(float *)(v5 + 24);
  *(_DWORD *)(v5 + 52) = sub_10232AE0(Src) & 0x7FFFFFFF;
  v17 = sub_100B1EE0();
  sub_100B3760(v17, v5);
  v29 = 0;
  if ( *(int *)(this + 268) > 0 )
  {
    a4 = 0.0;
    do
    {
      v18 = *(_DWORD *)(v5 + 68);
      Srca = (_DWORD *)(LODWORD(a4) + *(_DWORD *)(this + 256));
      v32 = *(_DWORD *)(v5 + 76);
      v19 = v32;
      if ( v32 + 1 > v18 )
      {
        sub_100798B0((_DWORD *)(v5 + 64), v32 - v18 + 1);
        v19 = v32;
      }
      ++*(_DWORD *)(v5 + 76);
      v20 = *(_DWORD *)(v5 + 64);
      v21 = *(_DWORD *)(v5 + 76) - v19 - 1;
      *(_DWORD *)(v5 + 80) = v20;
      if ( v21 > 0 )
      {
        memcpy((void *)(v20 + 12 * v19 + 12), (const void *)(v20 + 12 * v19), 12 * v21);
        v19 = v32;
      }
      v22 = (_DWORD *)(*(_DWORD *)(v5 + 64) + 12 * v19);
      if ( v22 )
      {
        *v22 = *Srca;
        v22[1] = Srca[1];
        v22[2] = Srca[2];
      }
      LODWORD(a4) += 12;
      ++v29;
    }
    while ( v29 < *(_DWORD *)(this + 268) );
  }
  *(_DWORD *)(this + 268) = 0;
  v23 = v28;
  sub_100B36D0(v28, v5);
  result = sub_100D63D0((char *)v5);
  *(_DWORD *)(v23 + 84) = result;
  return result;
}
