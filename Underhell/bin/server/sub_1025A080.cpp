void __thiscall sub_1025A080(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  int v6; // edi
  double v7; // st7
  float *v8; // eax
  double v9; // st6
  double v10; // rt0
  double v11; // st7
  int v12; // ecx
  double v13; // st7
  int v14; // edx
  double v15; // st7
  double v16; // st4
  double v17; // st6
  double v18; // st3
  double v19; // st1
  double v20; // rt2
  double v21; // st7
  int v22; // edx
  double v23; // st7
  double v24; // st4
  double v25; // st6
  double v26; // st6
  double v27; // st5
  double v28; // rt0
  float v29; // [esp+24h] [ebp-38h]
  float v30; // [esp+28h] [ebp-34h]
  float v31; // [esp+2Ch] [ebp-30h]
  float v32[3]; // [esp+40h] [ebp-1Ch] BYREF
  float v33; // [esp+4Ch] [ebp-10h] BYREF
  float v34; // [esp+50h] [ebp-Ch]
  float v35; // [esp+54h] [ebp-8h]
  float v36; // [esp+58h] [ebp-4h]

  if ( (*(_DWORD *)(this + 248) & 0x40) != 0 )
  {
    v2 = *(_DWORD *)(this + 800);
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
      v4 = v2 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == v4 )
      {
        if ( *v3 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == v4 )
          {
            v5 = (_DWORD *)*v3;
            if ( *v3 )
            {
              if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 320))(v5) )
              {
                v6 = v5[823];
                if ( v6 != *(_DWORD *)(this + 904) && v6 )
                {
                  sub_10259E20(this);
                  return;
                }
                *(_DWORD *)(this + 904) = v6;
              }
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(this + 808) )
  {
    v7 = *(float *)(this + 828) - *(float *)(dword_106B31C8 + 16) * *(float *)(this + 108);
    *(float *)(this + 828) = v7;
    if ( v7 <= 0.0 )
    {
      (*(void (__thiscall **)(_DWORD, const char *, int, int, _DWORD))(**(_DWORD **)(this + 808) + 148))(
        *(_DWORD *)(this + 808),
        "InPass",
        this,
        this,
        0);
      v8 = (float *)sub_100D8070(*(_DWORD **)(this + 808));
      *(_DWORD *)(this + 808) = v8;
      if ( v8 )
      {
        if ( 0.0 != v8[27] )
          *(float *)(this + 832) = v8[27];
        v9 = v8[180] - *(float *)(this + 720);
        v10 = v8[181] - *(float *)(this + 724);
        *(float *)(this + 852) = v8[179] - *(float *)(this + 716);
        *(float *)(this + 856) = v9;
        *(float *)(this + 860) = v10;
        v11 = off_10689714();
        v12 = *(_DWORD *)(this + 808);
        *(float *)(this + 828) = v11;
        *(float *)(this + 824) = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v12 + 292))(v12)
                               + *(float *)(dword_106B31C8 + 12);
      }
      else
      {
        sub_100DD660(this, &flt_106F1CA8);
      }
    }
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 824) )
    {
      v13 = *(float *)(this + 832);
      v31 = *(float *)(this + 840) * *(float *)(dword_106B31C8 + 16);
      v30 = *(float *)(this + 108);
    }
    else
    {
      v31 = *(float *)(this + 844) * *(float *)(dword_106B31C8 + 16);
      v30 = *(float *)(this + 108);
      v13 = 0.0;
    }
    v29 = v13;
    sub_10424B10(v29, v30, v31);
    v14 = *(_DWORD *)(this + 252);
    *(float *)(this + 108) = v13;
    v15 = *(float *)(dword_106B31C8 + 16) + *(float *)(dword_106B31C8 + 16);
    v36 = v15;
    if ( (v14 & 0x1000) != 0 )
    {
      sub_100DAFD0(this);
      v15 = v36;
    }
    v16 = *(float *)(this + 480) * (1.0 - v15);
    v17 = (1.0 - v15) * *(float *)(this + 484);
    v18 = *(float *)(this + 108);
    v19 = v18 * *(float *)(this + 860);
    v20 = *(float *)(this + 856) * v18 * v15;
    v33 = (1.0 - v15) * *(float *)(this + 476) + *(float *)(this + 852) * v18 * v15;
    v34 = v20 + v16;
    v35 = v15 * v19 + v17;
    sub_100DD660(this, &v33);
  }
  else if ( *(_BYTE *)(this + 873) )
  {
    v21 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 900)) * 0.5;
    if ( v21 < 1.0 )
    {
      v22 = *(_DWORD *)(this + 252) >> 11;
      v23 = v21 * v21 * 3.0 - v21 * (v21 * v21 + v21 * v21);
      v24 = *(float *)(this + 896) - *(float *)(this + 884);
      v25 = (*(float *)(this + 892) - *(float *)(this + 880)) * v23;
      v33 = (*(float *)(this + 888) - *(float *)(this + 876)) * v23 + *(float *)(this + 876);
      v34 = v25 + *(float *)(this + 880);
      v35 = v23 * v24 + *(float *)(this + 884);
      if ( (v22 & 1) != 0 )
        sub_100DAE60(this);
      v26 = v34 - *(float *)(this + 584);
      v27 = v35 - *(float *)(this + 588);
      v28 = 1.0 / *(float *)(dword_106B31C8 + 16);
      v32[0] = (v33 - *(float *)(this + 580)) * v28;
      v32[1] = v26 * v28;
      v32[2] = v28 * v27;
      sub_100DD660(this, v32);
    }
    else
    {
      sub_1025F370(this, this + 888, 0);
      sub_100DD660(this, &flt_106F1CA8);
      *(_BYTE *)(this + 873) = 0;
    }
  }
}
