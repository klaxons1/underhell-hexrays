float *__thiscall sub_100EFF50(int this)
{
  float *result; // eax
  float v3; // edx
  float v4; // ecx
  double v5; // rt0
  double v6; // rt1
  double v7; // rt2
  double v8; // st7
  double v9; // st5
  double v10; // st6
  double v11; // st7
  bool v12; // c0
  bool v13; // c3
  double v14; // rtt
  double v15; // st5
  double v16; // st6
  double v17; // rtt
  int v18; // edi
  double v19; // st7
  bool v20; // zf
  unsigned int v21; // eax
  int v22; // eax
  bool v23; // bl
  int v24; // eax
  long double v25; // st4
  long double v26; // st3
  long double v29; // st2
  long double v30; // st0
  long double v31; // st5
  long double v32; // st6
  long double v33; // st1
  double v34; // st0
  long double v35; // st5
  double v36; // st4
  double v37; // st6
  long double v38; // st3
  long double v41; // st2
  double v42; // st3
  double v43; // rt1
  double v44; // st3
  double v45; // rt2
  double v46; // st3
  double v47; // st1
  long double v48; // st4
  double v49; // st7
  long double v50; // st7
  long double v53; // st7
  float v54; // [esp+4h] [ebp-24h]
  float v55; // [esp+8h] [ebp-20h]
  float v56; // [esp+Ch] [ebp-1Ch]
  float v57; // [esp+10h] [ebp-18h] BYREF
  float v58; // [esp+14h] [ebp-14h]
  float v59; // [esp+18h] [ebp-10h]
  float v60; // [esp+1Ch] [ebp-Ch]
  float v61; // [esp+20h] [ebp-8h]
  float v62; // [esp+24h] [ebp-4h]

  result = (float *)sub_100D7680(this);
  v61 = *(float *)&result;
  if ( result )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = *(float *)(this + 584);
    v4 = *(float *)(this + 580);
    v56 = *(float *)(this + 588);
    v55 = v3;
    v54 = v4;
    if ( *(float *)(this + 1620) == flt_106F1CA8
      && *(float *)(this + 1624) == flt_106F1CAC
      && *(float *)(this + 1628) == flt_106F1CB0 )
    {
      *(float *)(this + 1620) = v4;
      *(float *)(this + 1624) = v3;
      *(float *)(this + 1628) = v56;
    }
    v5 = v4 - *(float *)(this + 1620);
    v6 = v3 - *(float *)(this + 1624);
    v7 = v56 - *(float *)(this + 1628);
    v57 = v5;
    v8 = v5;
    v58 = v6;
    v9 = v7;
    v10 = v6;
    v59 = v7;
    if ( v5 <= 50.0 )
    {
      v12 = v8 > -50.0;
      v13 = -50.0 == v8;
      v11 = -50.0;
      if ( !v12 && !v13 )
        v57 = -50.0;
    }
    else
    {
      v11 = -50.0;
      v57 = 50.0;
    }
    if ( v10 <= 50.0 )
    {
      if ( v10 < v11 )
        v58 = v11;
      v17 = v9;
      v15 = 50.0;
      v16 = v17;
    }
    else
    {
      v14 = v9;
      v15 = 50.0;
      v16 = v14;
      v58 = 50.0;
    }
    if ( v15 >= v16 )
    {
      if ( v16 < v11 )
        v59 = v11;
    }
    else
    {
      v59 = v15;
    }
    v18 = dword_106B31C8;
    v19 = sub_100E92C0((_DWORD *)this, 0);
    v20 = (*(_DWORD *)(this + 256) & 0xC00) == 0;
    v62 = *(float *)(v18 + 12) - v19;
    v23 = 1;
    if ( v20 )
    {
      v21 = *(_DWORD *)(this + 308);
      if ( v21 == -1
        || off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] != v21 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1] )
      {
        if ( sub_101C5260(this) )
        {
          v22 = sub_101C5260(this);
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 296))(v22) )
            v23 = 0;
        }
      }
    }
    if ( *(_BYTE *)(LODWORD(v61) + 2156)
      || (v24 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v61) + 1096))(COERCE_FLOAT(LODWORD(v61)))) != 0 )
    {
      LOBYTE(v24) = 1;
    }
    if ( v23 | (unsigned __int8)v24 )
    {
      *(float *)(this + 1632) = v57;
      *(float *)(this + 1636) = v58;
      *(float *)(this + 1640) = v59;
      v50 = __FYL2X__(0.5, 0.6931471805599453094) * 10.0 * v62 * 1.442695040888963407;
      _ST6 = v50;
      __asm { frndint }
      v53 = __FSCALE__(__F2XM1__(v50 - _ST6) + 1.0, _ST6);
      v60 = v53;
      v57 = *(float *)(this + 1644) * v53;
      v58 = *(float *)(this + 1648) * v53;
      v59 = v53 * *(float *)(this + 1652);
      sub_100EE880((float *)(this + 1656), &v57);
      v57 = *(float *)(this + 1656) * v60;
      v58 = *(float *)(this + 1660) * v60;
      v49 = v60 * *(float *)(this + 1664);
    }
    else
    {
      if ( v58 * v58 + v57 * v57 + v59 * v59 <= *(float *)(this + 1640) * *(float *)(this + 1640)
                                              + *(float *)(this + 1636) * *(float *)(this + 1636)
                                              + *(float *)(this + 1632) * *(float *)(this + 1632) )
        v25 = 0.4000000059604645;
      else
        v25 = 0.6000000238418579;
      v26 = __FYL2X__(v25, 0.6931471805599453094) * 10.0 * v62 * 1.442695040888963407;
      _ST2 = v26;
      __asm { frndint }
      v29 = __FSCALE__(__F2XM1__(v26 - _ST2) + 1.0, _ST2);
      v30 = 1.0 - v29;
      v31 = v58 * v30;
      v32 = v59 * v30;
      v33 = v29 * *(float *)(this + 1632);
      v58 = *(float *)(this + 1636) * v29;
      v34 = *(float *)(this + 1640);
      v35 = v31 + v58;
      *(float *)(this + 1632) = v57 * (1.0 - v29) + v33;
      *(float *)(this + 1636) = v35;
      *(float *)(this + 1640) = v32 + v29 * v34;
      v36 = *(float *)(this + 1636) + *(float *)(this + 1624);
      v37 = *(float *)(this + 1640) + *(float *)(this + 1628);
      v38 = 10.0 * __FYL2X__(0.5, 0.6931471805599453094) * v62 * 1.442695040888963407;
      _ST2 = v38;
      __asm { frndint }
      v41 = __FSCALE__(__F2XM1__(v38 - _ST2) + 1.0, _ST2);
      v42 = v54 - (*(float *)(this + 1620) + *(float *)(this + 1632));
      v61 = v42;
      v43 = v42;
      v44 = v55 - v36;
      v62 = v44;
      v45 = v44;
      v46 = v56 - v37;
      v60 = v46;
      v47 = *(float *)(this + 1664);
      v48 = *(float *)(this + 1660) * v41;
      v57 = v43 * (1.0 - v41) + *(float *)(this + 1656) * v41;
      v58 = v45 * (1.0 - v41) + v48;
      v59 = v46 * (1.0 - v41) + v41 * v47;
      sub_100EE880((float *)(this + 1656), &v57);
      v49 = v60;
      v57 = v61;
      v58 = v62;
    }
    v59 = v49;
    result = sub_100EE810((float *)(this + 1644), &v57);
    *(float *)(this + 1620) = v54;
    *(float *)(this + 1624) = v55;
    *(float *)(this + 1628) = v56;
  }
  return result;
}
