int __thiscall sub_10036B00(_BYTE *this)
{
  bool v2; // zf
  int v3; // ebx
  int *v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int (__thiscall *v8)(_BYTE *, int *); // edx
  double v9; // st6
  double v10; // st5
  long double v11; // st3
  long double v12; // st2
  long double v13; // rt2
  long double v14; // st2
  float *v15; // eax
  int v16; // eax
  int (__thiscall *v17)(_BYTE *, int *, _DWORD); // edx
  float *v18; // eax
  int (__thiscall *v19)(_BYTE *); // edx
  int v20; // eax
  int (__thiscall *v21)(_BYTE *, int *, _DWORD); // edx
  float *v22; // eax
  int (__thiscall *v23)(_BYTE *); // edx
  int v24; // eax
  int v25; // edx
  int (__thiscall *v26)(_BYTE *); // edx
  int v27; // eax
  char v28; // bl
  double v29; // st7
  void (__thiscall *v30)(_BYTE *); // eax
  double v31; // st6
  int v32; // eax
  int v33; // edi
  int v34; // eax
  double v35; // st6
  void (__thiscall *v36)(_BYTE *, _DWORD, float *, _DWORD); // edx
  double v37; // st7
  int v38; // eax
  int (__thiscall *v39)(_BYTE *, _DWORD); // edx
  int result; // eax
  float v41; // [esp+20h] [ebp-7Ch]
  float v42; // [esp+24h] [ebp-78h]
  float v43; // [esp+28h] [ebp-74h]
  float v44; // [esp+2Ch] [ebp-70h]
  float v45; // [esp+2Ch] [ebp-70h]
  int v46[3]; // [esp+40h] [ebp-5Ch] BYREF
  int v47[3]; // [esp+4Ch] [ebp-50h] BYREF
  int v48; // [esp+58h] [ebp-44h] BYREF
  float v49; // [esp+5Ch] [ebp-40h]
  float v50; // [esp+60h] [ebp-3Ch]
  int v51; // [esp+64h] [ebp-38h] BYREF
  float v52; // [esp+68h] [ebp-34h]
  float v53; // [esp+6Ch] [ebp-30h]
  float v54; // [esp+70h] [ebp-2Ch] BYREF
  float v55; // [esp+74h] [ebp-28h]
  float v56; // [esp+78h] [ebp-24h]
  __int64 *v57; // [esp+7Ch] [ebp-20h]
  int v58; // [esp+80h] [ebp-1Ch] BYREF
  unsigned __int64 v59; // [esp+84h] [ebp-18h] BYREF
  char v60[4]; // [esp+8Ch] [ebp-10h]
  float v61; // [esp+90h] [ebp-Ch] BYREF
  float v62; // [esp+94h] [ebp-8h] BYREF
  char v63; // [esp+9Bh] [ebp-1h] BYREF

  v2 = *((_DWORD *)this + 527) == 0;
  v63 = 0;
  if ( !v2 && *(float *)(dword_106B31C8 + 12) - *((float *)this + 530) > 1.0 )
  {
    v3 = 0;
    for ( *((float *)this + 530) = *(float *)(dword_106B31C8 + 12); v3 < dword_106960D8; ++v3 )
    {
      v4 = *(int **)(dword_106960D0 + 4);
      if ( v3 > 0 )
      {
        v5 = v3;
        do
        {
          --v5;
          v4 = (int *)v4[1];
        }
        while ( v5 );
      }
      v6 = *v4;
      if ( (unsigned __int8)sub_100AAC30(*v4) && !*(_BYTE *)(v6 + 4437) && !v63 )
      {
        v7 = *(_DWORD *)(v6 + 4396);
        *(_BYTE *)(v6 + 4437) = 1;
        v63 = 1;
        if ( v7 == 8 )
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1156))(this);
        sub_1010DD80((int)this, v6, 0.0);
      }
    }
  }
  if ( *(_DWORD *)(dword_1069088C + 48) == 1 )
  {
    *(float *)v60 = acos(*((float *)this + 421));
    (*(void (__thiscall **)(_BYTE *, float *))(*(_DWORD *)this + 920))(this, &v54);
    v57 = (__int64 *)&v61;
    HIDWORD(v59) = &v62;
    v61 = cos(*(float *)v60);
    v62 = sin(*(float *)v60);
    v8 = *(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)this + 504);
    v9 = v54 * v61 - v55 * v62;
    v10 = v61 * v55 + v62 * v54;
    v11 = -*(float *)v60;
    v12 = sin(v11);
    v62 = v12;
    v13 = v12;
    v14 = cos(v11);
    v61 = v14;
    *(float *)&v51 = v54 * v14 - v55 * v13;
    v52 = v14 * v55 + v13 * v54;
    v53 = v56;
    *(float *)&v58 = v9 * 200.0;
    *(float *)&v59 = v10 * 200.0;
    *((float *)&v59 + 1) = v56 * 200.0;
    v15 = (float *)v8(this, v47);
    *(float *)&v48 = *v15 + *(float *)&v58;
    v49 = v15[1] + *(float *)&v59;
    v50 = v15[2] + *((float *)&v59 + 1);
    v16 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 504))(this);
    sub_1011C790(v16, (int)v46, COERCE_FLOAT(&v48), COERCE_INT(64.0), 255, 0, 0, 50, 0.0);
    v17 = *(int (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)this + 504);
    *(float *)&v58 = *(float *)&v51 * 200.0;
    *(float *)&v59 = v52 * 200.0;
    *((float *)&v59 + 1) = 200.0 * v53;
    v18 = (float *)v17(this, v46, 0.0);
    v19 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 504);
    *(float *)&v48 = *v18 + *(float *)&v58;
    v49 = v18[1] + *(float *)&v59;
    v50 = v18[2] + *((float *)&v59 + 1);
    v20 = v19(this);
    sub_1011C790(v20, (int)v47, COERCE_FLOAT(&v48), COERCE_INT(64.0), 255, 0, 0, 50, 0.0);
    v21 = *(int (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)this + 504);
    *(float *)&v51 = v54 * 100.0;
    v52 = v55 * 100.0;
    v53 = 100.0 * v56;
    v22 = (float *)v21(this, v46, 0.0);
    v23 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 504);
    *(float *)&v48 = *v22 + *(float *)&v51;
    v49 = v22[1] + v52;
    v50 = v22[2] + v53;
    v24 = v23(this);
    sub_1011C790(v24, (int)v47, COERCE_FLOAT(&v48), COERCE_INT(8.0), 0, 255, 0, 50, 0.0);
    v25 = *(_DWORD *)this;
    *(float *)&v48 = 2.0;
    v26 = *(int (__thiscall **)(_BYTE *))(v25 + 504);
    v49 = 2.0;
    v50 = 2.0;
    *(float *)&v51 = -2.0;
    v52 = -2.0;
    v53 = -2.0;
    v27 = v26(this);
    sub_1011BB20(v27, (int)v46, (int)&v51, (int)&v48, 0, 255, 0, COERCE_FLOAT(128));
  }
  if ( this[3545] )
    sub_10027810((int)this, 0, (int)this);
  sub_100EC4A0(-1.0, 0);
  v60[0] = sub_10025DD0(this);
  sub_100259E0((int)this, v60[0]);
  v28 = 0;
  if ( *((int *)this + 585) < 4 && !*((_DWORD *)this + 588) )
  {
    if ( (dword_10691AF8 & 1) == 0 )
    {
      dword_10691AF8 |= 1u;
      qword_10691AF0 = 0;
    }
    v29 = *(float *)(dword_1069049C + 44);
    *((float *)&v59 + 1) = *(float *)(dword_1069049C + 44);
    if ( v29 > 0.0 )
    {
      v57 = &qword_10691AF0;
      qword_10691AF0 = __rdtsc();
    }
    if ( dword_10693628 && *(_BYTE *)(dword_10693628 + 812) )
    {
      CVProfile::EnterScope(g_VProfCurrentProfile, "NPCs", 0, "NPCs", 0, 4);
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1280))(this);
      if ( sub_1002B540((float *)this) )
      {
        if ( *(float *)(dword_106B31C8 + 12) < (double)*((float *)this + 587) )
        {
          if ( this[2156] )
            sub_10043050(0, 0);
          if ( this[2157] )
            (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 651) + 76))(*((_DWORD *)this + 651), -1);
        }
        else
        {
          v30 = *(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1216);
          v28 = 1;
          *((_WORD *)this + 1078) = 0;
          v30(this);
        }
        sub_10025440(this);
        sub_10025220((float *)this);
        v63 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 296))(this);
        sub_10035020(this + 3597, &v63);
        sub_100200F0((float *)this);
        sub_10035310((int)this, *(float *)(dword_106B31C8 + 12));
      }
      else
      {
        *((float *)this + 653) = 3.4028235e38;
      }
      CVProfile::ExitScope(g_VProfCurrentProfile);
      v29 = *((float *)&v59 + 1);
    }
    if ( v29 > 0.0 )
    {
      v57 = (__int64 *)&v59;
      v59 = __rdtsc();
      qword_10691AF0 = v59 - qword_10691AF0;
      v31 = (double)qword_10690DC8 * g_ClockSpeedMillisecondsMultiplier;
      if ( v31 > v29 )
      {
        v43 = v29 * 3.0;
        v42 = v29;
        v41 = v31;
        v32 = (int)sub_1001F0E0(v41, v42, v43, 96.0, 255.0);
        v33 = v32;
        if ( v32 <= 255 )
        {
          if ( v32 < 96 )
            v33 = 96;
        }
        else
        {
          v33 = 255;
        }
        v34 = (*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)this + 504))(this, v46);
        v35 = *(float *)(v34 + 4);
        v36 = *(void (__thiscall **)(_BYTE *, _DWORD, float *, _DWORD))(*(_DWORD *)this + 528);
        v37 = *(float *)(v34 + 8) + 12.0;
        v58 = *(int *)v34;
        *(float *)&v59 = v35;
        *((float *)&v59 + 1) = v37;
        v36(this, 0, &v54, 0);
        v48 = v58;
        v49 = *(float *)&v59;
        v50 = *((float *)&v59 + 1) + 64.0;
        sub_1011BC50((int)&v58, (int)&v48, v33, 0, 0, 0, 1.0);
        *(float *)&v48 = v54 * 16.0 + *(float *)&v58;
        v49 = v55 * 16.0 + *(float *)&v59;
        v50 = v56 * 16.0 + *((float *)&v59 + 1) + 16.0;
        sub_1011BC50((int)&v58, (int)&v48, v33, 0, 0, 0, 1.0);
        *(float *)&v48 = *(float *)&v58 - v54 * 16.0;
        v49 = *(float *)&v59 - v55 * 16.0;
        v50 = *((float *)&v59 + 1) + 16.0 - v56 * 16.0;
        sub_1011BC50((int)&v58, (int)&v48, v33, 0, 0, 0, 1.0);
      }
    }
  }
  v38 = sub_100E9270(0);
  v39 = *(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 1408);
  this[2165] = v38 == -1;
  result = v39(this, *(_DWORD *)v60);
  if ( this[2165] )
  {
    if ( *(_DWORD *)(dword_10690724 + 48) )
      sub_10029660(this, (int)"Eff: %s, Move: %s\n");
    if ( v28 )
      *((float *)this + 587) = flt_105FE754[*((_DWORD *)this + 585)] + *(float *)(dword_106B31C8 + 12);
    if ( *((_DWORD *)this + 586) && *((_DWORD *)this + 585) )
    {
      v44 = *(float *)(dword_106B31C8 + 12) + 0.2;
      return sub_100EC4A0(v44, 0);
    }
    else
    {
      v45 = *(float *)(dword_106B31C8 + 12) + 0.1;
      return sub_100EC4A0(v45, 0);
    }
  }
  else
  {
    *((float *)this + 587) = 0.0;
  }
  return result;
}
