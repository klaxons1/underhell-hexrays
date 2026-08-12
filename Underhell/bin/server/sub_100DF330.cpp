void __thiscall sub_100DF330(float *this)
{
  const char *v2; // eax
  int v3; // ecx
  double v4; // st4
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  float v13; // edi
  int *v14; // eax
  float v15; // esi
  int v16; // edi
  int v17; // ebx
  int v18; // eax
  double v19; // st7
  char v20; // al
  double v21; // st7
  double v22; // st7
  double v23; // st4
  double v24; // st6
  double v25; // st7
  double v26; // st4
  double v27; // st6
  float v28; // [esp+34h] [ebp-68h]
  int v29; // [esp+40h] [ebp-5Ch] BYREF
  float v30; // [esp+44h] [ebp-58h]
  float v31; // [esp+48h] [ebp-54h]
  int v32; // [esp+4Ch] [ebp-50h] BYREF
  float v33; // [esp+50h] [ebp-4Ch]
  float v34; // [esp+54h] [ebp-48h]
  int v35[3]; // [esp+58h] [ebp-44h] BYREF
  int v36; // [esp+64h] [ebp-38h] BYREF
  float v37; // [esp+68h] [ebp-34h]
  float v38; // [esp+6Ch] [ebp-30h]
  int v39; // [esp+70h] [ebp-2Ch] BYREF
  float v40; // [esp+74h] [ebp-28h]
  float v41; // [esp+78h] [ebp-24h]
  int v42; // [esp+7Ch] [ebp-20h] BYREF
  float v43; // [esp+80h] [ebp-1Ch]
  float v44; // [esp+84h] [ebp-18h]
  int v45; // [esp+88h] [ebp-14h] BYREF
  float v46; // [esp+8Ch] [ebp-10h]
  float v47; // [esp+90h] [ebp-Ch]
  float v48; // [esp+94h] [ebp-8h]
  float v49; // [esp+98h] [ebp-4h] BYREF

  sub_100D7BE0((int)this);
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 164))(this);
  if ( ((_BYTE)this[59] & 2) != 0 )
  {
    v2 = (const char *)*((_DWORD *)this + 65);
    if ( !v2 )
    {
      v2 = (const char *)*((_DWORD *)this + 23);
      if ( !v2 )
        v2 = String;
    }
    sub_100D5DE0(this, 0, (int)v2, 0.0, 255, 255, 255, 255);
  }
  if ( ((_BYTE)this[59] & 4) != 0 )
    sub_100D9BB0((int)this, 0.0);
  if ( ((_BYTE)this[59] & 0x20) != 0 )
    sub_100D9CA0(this);
  if ( ((_BYTE)this[59] & 8) != 0 )
    sub_100DF2D0(this);
  if ( ((_BYTE)this[59] & 0xC) != 0 )
  {
    v3 = *((_DWORD *)this + 106);
    if ( v3 )
    {
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v3 + 176))(v3, &v32);
      (*(void (__thiscall **)(_DWORD, int *, int *))(**((_DWORD **)this + 106) + 220))(
        *((_DWORD *)this + 106),
        v35,
        &v32);
      sub_1011C120((int)v35, 12.0, 255, 0, 0, 0, 0.0);
      sub_101B62B0(*((_DWORD *)this + 106));
      if ( *((_BYTE *)this + 306) != 6 )
      {
        (*(void (__thiscall **)(_DWORD, int *, int *))(**((_DWORD **)this + 106) + 188))(
          *((_DWORD *)this + 106),
          &v36,
          &v29);
        if ( ((_DWORD)this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        v4 = v37 - this[146];
        v5 = v4 * v4;
        v6 = *(float *)&v36 - this[145];
        v7 = v5;
        v8 = v38 - this[147];
        v28 = v6 * v6 + v7 + v8 * v8;
        v9 = off_10689708(v28);
        v10 = *((_DWORD *)this + 63);
        v48 = v9;
        if ( (v10 & 0x800) != 0 )
          sub_100DAE60((int)this);
        sub_10424CE0(&v29, this + 176, &v45, &v49);
        if ( v48 > 2.0 || fabs(v49) > 2.0 )
        {
          v11 = *(_DWORD *)dword_106BAFF0;
          v12 = (*(int (__thiscall **)(_DWORD, float *, float *))(**((_DWORD **)this + 106) + 292))(
                  *((_DWORD *)this + 106),
                  &flt_106F1CA8,
                  &flt_106F1CB4);
          (*(void (__thiscall **)(int, int *, int *, int))(v11 + 92))(dword_106BAFF0, &v42, &v39, v12);
          sub_1011B9E0((int)&v36, (int)&v42, (int)&v39, (int)&v29, 255, 255, 0, 16, 0.0);
        }
      }
    }
  }
  if ( *((char *)this + 236) < 0 && (unsigned __int8)sub_100E88D0(this) )
    sub_1011BBD0((int)this, 255, 255, 255, 0, 0.0);
  if ( ((_DWORD)this[59] & 0x200) != 0
    && ((_DWORD)this[64] & 0x10000) != 0
    && *(int *)(dword_106B31C8 + 20) <= 1
    && sub_10261B20() )
  {
    (*(void (__thiscall **)(float *, int *))(*(_DWORD *)this + 236))(this, &v45);
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v48 = COERCE_FLOAT(sub_10261B20());
      v13 = v48;
    }
    else
    {
      v13 = 0.0;
      v48 = 0.0;
    }
    v49 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 232))(this);
    v14 = (int *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v13) + 508))(COERCE_FLOAT(LODWORD(v13)));
    v35[0] = *v14;
    v35[1] = v14[1];
    v35[2] = v14[2];
    sub_104222B0(v35, 0, &v39, &v36);
    if ( (int)*(float *)(dword_106B31C8 + 12) % 2 == 1 )
    {
      v15 = v48;
      v16 = 255;
      v17 = 255;
      if ( sub_100CF460((_DWORD *)LODWORD(v48)) )
      {
        v18 = sub_100CF460((_DWORD *)LODWORD(v15));
        v19 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v18 + 1148))(v18);
        v49 = v19 * v49;
      }
    }
    else
    {
      v16 = 0;
      v17 = 0;
      v20 = (*(int (__thiscall **)(float *, float))(*(_DWORD *)this + 228))(this, COERCE_FLOAT(LODWORD(v48)));
      v15 = v48;
      if ( !v20 )
        v16 = 255;
    }
    if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v15) + 1088))(COERCE_FLOAT(LODWORD(v15))) )
    {
      v21 = *(float *)(dword_106CEF94 + 44) * v49;
      v49 = v21;
    }
    else
    {
      v21 = v49;
    }
    *(float *)&v32 = *(float *)&v39 * v21 + *(float *)&v45;
    v33 = v40 * v21 + v46;
    v34 = v21 * v41 + v47;
    sub_1011BC50((int)&v45, (int)&v32, 255, v16, v17, 1, 0.1);
    *(float *)&v32 = *(float *)&v45 - *(float *)&v39 * v49;
    v33 = v46 - v40 * v49;
    v34 = v47 - v49 * v41;
    sub_1011BC50((int)&v45, (int)&v32, 255, v16, v17, 1, 0.1);
    *(float *)&v32 = *(float *)&v36 * v49 + *(float *)&v45;
    v33 = v37 * v49 + v46;
    v34 = v49 * v38 + v47;
    sub_1011BC50((int)&v45, (int)&v32, 255, v16, v17, 1, 0.1);
    *(float *)&v32 = *(float *)&v45 - *(float *)&v36 * v49;
    v33 = v46 - v37 * v49;
    v34 = v47 - v49 * v38;
    sub_1011BC50((int)&v45, (int)&v32, 255, v16, v17, 1, 0.1);
    *(float *)&v42 = *(float *)&v36 + *(float *)&v39;
    v43 = v37 + v40;
    v44 = v38 + v41;
    off_10689714();
    v22 = *(float *)&v42 * v49;
    v23 = v43 * v49;
    v24 = v49 * v44;
    *(float *)&v32 = v22 + *(float *)&v45;
    v33 = v23 + v46;
    v34 = v24 + v47;
    *(float *)&v29 = *(float *)&v45 - v22;
    v30 = v46 - v23;
    v31 = v47 - v24;
    sub_1011BC50((int)&v29, (int)&v32, 255, v16, v17, 1, 0.1);
    *(float *)&v42 = *(float *)&v39 - *(float *)&v36;
    v43 = v40 - v37;
    v44 = v41 - v38;
    off_10689714();
    v25 = *(float *)&v42 * v49;
    v26 = v43 * v49;
    v27 = v49 * v44;
    *(float *)&v29 = v25 + *(float *)&v45;
    v30 = v26 + v46;
    v31 = v27 + v47;
    *(float *)&v32 = *(float *)&v45 - v25;
    v33 = v46 - v26;
    v34 = v47 - v27;
    sub_1011BC50((int)&v32, (int)&v29, 255, v16, v17, 1, 0.1);
  }
}
