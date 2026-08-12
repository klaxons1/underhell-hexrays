void __thiscall sub_103D0FD0(int this)
{
  bool v2; // zf
  double v3; // st7
  double v4; // st6
  unsigned int v5; // eax
  double v6; // st5
  int *v7; // ecx
  _DWORD *v8; // edi
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st5
  float *v13; // eax
  float *v14; // eax
  double v15; // st7
  double v16; // st7
  double v17; // st6
  double v18; // st7
  int v19; // eax
  float v20; // ecx
  bool v21; // c0
  bool v22; // c3
  double v23; // st6
  double v24; // st7
  double v25; // st7
  double v26; // st6
  float *v27; // eax
  int v28; // eax
  int v29; // edi
  int v30; // eax
  char *v31; // edi
  char *v32; // eax
  _DWORD *v33; // eax
  float v34; // [esp+10h] [ebp-104h]
  float v35; // [esp+10h] [ebp-104h]
  float v36; // [esp+10h] [ebp-104h]
  __int64 v37; // [esp+10h] [ebp-104h]
  float v38; // [esp+10h] [ebp-104h]
  float v39; // [esp+14h] [ebp-100h]
  _BYTE v40[44]; // [esp+24h] [ebp-F0h] BYREF
  float v41; // [esp+50h] [ebp-C4h]
  _DWORD *v42; // [esp+70h] [ebp-A4h]
  float v43[16]; // [esp+78h] [ebp-9Ch] BYREF
  float v44[3]; // [esp+B8h] [ebp-5Ch] BYREF
  float v45; // [esp+C4h] [ebp-50h]
  float v46; // [esp+C8h] [ebp-4Ch]
  float v47; // [esp+CCh] [ebp-48h]
  float v48[3]; // [esp+D0h] [ebp-44h] BYREF
  float v49; // [esp+DCh] [ebp-38h] BYREF
  float v50; // [esp+E0h] [ebp-34h]
  float v51; // [esp+E4h] [ebp-30h]
  float v52[3]; // [esp+E8h] [ebp-2Ch] BYREF
  float v53; // [esp+F4h] [ebp-20h] BYREF
  float v54; // [esp+F8h] [ebp-1Ch]
  float v55; // [esp+FCh] [ebp-18h]
  float v56; // [esp+100h] [ebp-14h] BYREF
  float v57; // [esp+104h] [ebp-10h]
  int v58; // [esp+108h] [ebp-Ch]
  float v59; // [esp+10Ch] [ebp-8h]
  char v60; // [esp+113h] [ebp-1h]
  int savedregs; // [esp+114h] [ebp+0h] BYREF

  v49 = 0.0;
  v50 = 0.0;
  v2 = (*(_BYTE *)(this + 248) & 1) == 0;
  v51 = 0.0;
  if ( !v2 )
  {
    v34 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v34, 0);
    sub_102608F0(v43, (_DWORD *)this, 0);
    v3 = *(float *)(this + 832);
    v4 = *(float *)(this + 836);
    v5 = *(_DWORD *)(this + 872);
    v6 = *(float *)(this + 840);
    v45 = v43[1] * v4 + v43[0] * v3 + v43[2] * v6 + v43[3];
    v46 = v43[5] * v4 + v43[4] * v3 + v43[6] * v6 + v43[7];
    v47 = v6 * v43[10] + v3 * v43[8] + v4 * v43[9] + v43[11];
    v51 = v47;
    v49 = v45;
    v50 = v46;
    if ( v5 == -1
      || (v7 = &off_1061BE18[4 * (v5 & 0xFFF) + 1], off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12)
      || (v8 = (_DWORD *)*v7) == 0
      || (v8[64] & 0x8000) != 0 )
    {
      v31 = *(char **)(this + 868);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v32 = v31;
      if ( !v31 )
        v32 = (char *)String;
      v33 = sub_1012C650(v32, (float *)(this + 580), 0.0, this, 0, 0, 0);
      if ( v33 )
        *(_DWORD *)(this + 872) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v33 + 8))(v33);
      else
        *(_DWORD *)(this + 872) = -1;
      if ( (*(_BYTE *)(this + 248) & 1) != 0 )
      {
        v38 = *(float *)(dword_106B31C8 + 12) + 2.0;
        sub_100EC4A0((int *)this, v38, 0);
      }
    }
    else
    {
      v9 = (float *)(*(int (__thiscall **)(_DWORD *, float *))(*v8 + 504))(v8, v44);
      v10 = *v9;
      v48[0] = *v9;
      v11 = v9[1];
      v48[1] = v9[1];
      v12 = v9[2];
      v48[2] = v9[2];
      v39 = (v11 - v46) * (v11 - v46) + (v10 - v45) * (v10 - v45) + (v12 - v47) * (v12 - v47);
      v59 = off_10689708(v39);
      if ( !sub_103D0CB0((float *)this, v59) )
        goto LABEL_7;
      sub_1002A5F0((int)&savedregs, this, &v49, v48, 16449, this, 0, (int)v40);
      v60 = 0;
      if ( 1.0 == v41 || v42 == v8 )
      {
        v60 = 1;
        if ( sub_103D0CB0((float *)this, v59) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v8 + 264))(v8) )
          {
            v13 = (float *)(*(int (__thiscall **)(_DWORD *, float *, int, _DWORD))(*v8 + 520))(v8, v44, this + 716, 0);
            *(float *)(this + 844) = *v13;
            *(float *)(this + 848) = v13[1];
            *(float *)(this + 852) = v13[2];
          }
        }
      }
      sub_100D5C50((float *)(this + 876), v48, (float *)(this + 844));
      v14 = sub_103D0F20((float *)this, v44, v48);
      v53 = *v14;
      v15 = v14[1];
      v54 = v15;
      v55 = v14[2];
      v35 = v15;
      sub_10424C60(v35, *(float *)(this + 800));
      v59 = v15;
      v16 = v53;
      sub_10424C60(v53, *(float *)(this + 812));
      v17 = *(float *)(this + 800) + v59;
      v54 = v17;
      v53 = v16 + *(float *)(this + 812);
      v36 = v17;
      sub_10424C60(v36, *(float *)(this + 732));
      v18 = v17 * 10.0;
      v19 = *(_DWORD *)(this + 496);
      v20 = *(float *)(this + 488);
      v57 = v17 * 10.0;
      v21 = v17 * 10.0 < *(float *)(this + 804);
      v22 = v17 * 10.0 == *(float *)(this + 804);
      v58 = v19;
      v56 = v20;
      if ( v21 || v22 )
      {
        v23 = -*(float *)(this + 804);
        if ( v23 > v18 )
          v57 = v23;
      }
      else
      {
        v57 = *(float *)(this + 804);
      }
      v24 = v53;
      sub_10424C60(v53, *(float *)(this + 728));
      v25 = v24 * 10.0;
      v56 = v25;
      if ( v25 <= *(float *)(this + 816) )
      {
        v26 = -*(float *)(this + 816);
        if ( v26 > v25 )
          v56 = v26;
      }
      else
      {
        v56 = *(float *)(this + 816);
      }
      sub_100D7260((float *)this, &v56);
      sub_100D8290((float *)this, 0.1);
      sub_10422220(this + 728, v52);
      v27 = sub_102C8C70((float *)(this + 876), v44, v52);
      v52[0] = *v27;
      v52[1] = v27[1];
      v52[2] = v27[2];
      sub_10422220(&v53, v52);
      if ( v60 == 1 )
      {
        v28 = sub_1001F4B0((int)v8);
        v29 = v28;
        if ( v28 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v28 + 1088))(v28) )
          {
            v30 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 1092))(v29);
            if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v30 + 92))(v30, v29, 1) == 1 )
            {
              if ( *(_BYTE *)(this + 968) )
              {
                if ( *(float *)(this + 964) < (double)*(float *)(dword_106B31C8 + 12) )
                {
                  HIDWORD(v37) = this;
                  LODWORD(v37) = this;
                  sub_1017CC60((float *)(this + 940), v52, v37);
                }
              }
              else
              {
                *(_BYTE *)(this + 968) = 1;
                *(float *)(this + 964) = *(float *)(dword_106B31C8 + 12) + 1.5;
              }
            }
          }
        }
      }
      else
      {
LABEL_7:
        *(_BYTE *)(this + 968) = 0;
      }
    }
  }
}
