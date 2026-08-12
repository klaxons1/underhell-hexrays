int __thiscall sub_10130A30(int this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  int result; // eax
  int v9; // edi
  float v10; // edx
  float v11; // eax
  int v12; // ecx
  float v13; // edx
  float v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int *v17; // ecx
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  float *v21; // edi
  int i; // ebx
  int v23; // edi
  bool v24; // zf
  float v25; // edx
  float v26; // eax
  int v27; // eax
  _DWORD *v28; // ecx
  float *v29; // eax
  double v30; // st7
  double v31; // st4
  double v32; // st7
  double v33; // st4
  double v34; // st7
  double v35; // st4
  double v36; // st7
  int v37; // ecx
  __int64 v38; // [esp+Ch] [ebp-80h]
  float v39; // [esp+10h] [ebp-7Ch]
  _DWORD v40[3]; // [esp+24h] [ebp-68h] BYREF
  int v41; // [esp+30h] [ebp-5Ch]
  int v42; // [esp+34h] [ebp-58h]
  float v43[3]; // [esp+38h] [ebp-54h] BYREF
  float v44[3]; // [esp+44h] [ebp-48h] BYREF
  float v45; // [esp+50h] [ebp-3Ch] BYREF
  float v46; // [esp+54h] [ebp-38h]
  float v47; // [esp+58h] [ebp-34h]
  float v48; // [esp+5Ch] [ebp-30h] BYREF
  float v49; // [esp+60h] [ebp-2Ch]
  float v50; // [esp+64h] [ebp-28h]
  float v51; // [esp+68h] [ebp-24h] BYREF
  float v52; // [esp+6Ch] [ebp-20h]
  float v53; // [esp+70h] [ebp-1Ch]
  float v54; // [esp+74h] [ebp-18h] BYREF
  float v55; // [esp+78h] [ebp-14h]
  float v56; // [esp+7Ch] [ebp-10h]
  float v57; // [esp+80h] [ebp-Ch] BYREF
  float v58; // [esp+84h] [ebp-8h]
  float v59; // [esp+88h] [ebp-4h]

  result = sub_10130610((_DWORD *)this);
  v9 = 0;
  if ( result )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v10 = *(float *)(this + 584);
    v11 = *(float *)(this + 588);
    v48 = *(float *)(this + 580);
    v12 = *(_DWORD *)(this + 252) >> 11;
    v49 = v10;
    v50 = v11;
    if ( (v12 & 1) != 0 )
      sub_100DAE60(this);
    v13 = *(float *)(this + 704);
    v14 = *(float *)(this + 712);
    v52 = *(float *)(this + 708);
    v51 = v13;
    v53 = v14;
    if ( a2 != flt_10689730 || a3 != flt_10689734 || a4 != flt_10689738 )
    {
      v48 = a2;
      v49 = a3;
      v50 = a4;
      v51 = a5;
      v52 = a6;
      v53 = a7;
    }
    memset(v40, 0, sizeof(v40));
    v41 = 0;
    v42 = 0;
    if ( (unsigned __int8)sub_10202660(&v48, &v51, v40) && v41 )
    {
      if ( *(_DWORD *)v40[0] )
        *(_DWORD *)(this + 824) = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)v40[0] + 8))(*(_DWORD *)v40[0]);
      else
        *(_DWORD *)(this + 824) = -1;
      v15 = *(_DWORD *)(this + 824);
      v16 = v15;
      *(_DWORD *)(this + 828) = v15;
      if ( v15 != -1 )
      {
        v17 = &off_1061BE18[4 * (v15 & 0xFFF) + 1];
        if ( v17[1] == v16 >> 12 )
          v9 = *v17;
      }
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        sub_100DAE60(v9);
      *(float *)(this + 832) = *(float *)(v9 + 580);
      *(float *)(this + 836) = *(float *)(v9 + 584);
      *(float *)(this + 840) = *(float *)(v9 + 588);
      if ( sub_10018CD0((float *)(this + 800), &flt_106F1CA8) )
      {
        v18 = sub_1026A890(this + 824);
        sub_10111910(
          (_BYTE *)(v18 + 320),
          (float *)(v18 + 328),
          (float *)(v18 + 340),
          (float *)(this + 800),
          (float *)(this + 812));
        v19 = sub_1026A890(this + 824);
        if ( (*(_DWORD *)(v19 + 252) & 0x800) != 0 )
          sub_100DAE60(v19);
        *(float *)(this + 800) = *(float *)(this + 800) - *(float *)(v19 + 580);
        *(float *)(this + 804) = *(float *)(this + 804) - *(float *)(v19 + 584);
        *(float *)(this + 808) = *(float *)(this + 808) - *(float *)(v19 + 588);
        v20 = sub_1026A890(this + 824);
        v21 = (float *)v20;
        if ( (*(_DWORD *)(v20 + 252) & 0x800) != 0 )
          sub_100DAE60(v20);
        *(float *)(this + 812) = *(float *)(this + 812) - v21[145];
        *(float *)(this + 816) = *(float *)(this + 816) - v21[146];
        *(float *)(this + 820) = *(float *)(this + 820) - v21[147];
      }
      HIDWORD(v38) = this;
      LODWORD(v38) = this;
      sub_1010DD80((_DWORD *)(this + 872), v38, 0.0);
      if ( (*(_BYTE *)(this + 248) & 1) != 0 )
      {
        sub_100EC3F0((_DWORD *)this, (int)sub_10130910, 0.0, 0);
        v39 = *(float *)(dword_106B31C8 + 12) + 0.5;
        sub_100EC4A0((int *)this, v39, 0);
      }
      if ( 0.0 != *(float *)(this + 860) )
      {
        for ( i = 0; i < v41; ++i )
        {
          v23 = *(_DWORD *)(v40[0] + 4 * i);
          if ( *(_BYTE *)(v23 + 306) )
          {
            v24 = *(_BYTE *)(this + 864) == 0;
            v25 = *(float *)(this + 848);
            v26 = *(float *)(this + 852);
            v54 = *(float *)(this + 844);
            v55 = v25;
            v56 = v26;
            if ( !v24 )
            {
              v27 = sub_10019AD0((_DWORD *)this);
              v28 = (_DWORD *)this;
              if ( v27 )
                v28 = (_DWORD *)sub_10019AD0((_DWORD *)this);
              v29 = (float *)sub_1001F410(v28);
              v54 = *v29 + v54;
              v55 = v29[1] + v55;
              v56 = v29[2] + v56;
            }
            sub_104222B0(&v54, &v45, v44, v43);
            v59 = v47;
            v58 = v46;
            v57 = v45;
            v30 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    -1.0,
                    1.0);
            v31 = *(float *)(this + 856);
            v57 = v44[0] * v30 * v31 + v57;
            v58 = v44[1] * v30 * v31 + v58;
            v59 = v30 * v44[2] * v31 + v59;
            v32 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    -1.0,
                    1.0);
            v33 = *(float *)(this + 856);
            v57 = v45 * v32 * v33 + v57;
            v58 = v46 * v32 * v33 + v58;
            v59 = v32 * v47 * v33 + v59;
            v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    -1.0,
                    1.0);
            v35 = *(float *)(this + 856);
            v57 = v43[0] * v34 * v35 + v57;
            v58 = v43[1] * v34 * v35 + v58;
            v59 = v34 * v43[2] * v35 + v59;
            off_10689714();
            v36 = *(float *)(this + 860);
            v57 = v57 * v36;
            v58 = v58 * v36;
            v59 = v36 * v59;
            v37 = *(_DWORD *)(v23 + 424);
            if ( v37 )
              (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v37 + 208))(v37, &v57, 0);
            else
              sub_100DD660(v23, &v57);
          }
        }
      }
    }
    return sub_102375F0(v40);
  }
  return result;
}
