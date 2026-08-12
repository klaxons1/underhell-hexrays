char __thiscall sub_1001B200(float *this, int a2, int a3, Concurrency::details::SchedulingRing *a4)
{
  int v6; // eax
  char result; // al
  double v8; // st7
  int v9; // eax
  float *v10; // eax
  _DWORD *v11; // ebx
  double v12; // st7
  int v13; // ecx
  float *v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  double v17; // st7
  double v18; // st7
  int v19; // ecx
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st4
  double v27; // rt2
  double v28; // st4
  double v29; // st7
  unsigned int *v30; // ecx
  double v31; // st4
  double v32; // st3
  double v33; // st7
  unsigned int v34; // eax
  int *v35; // ecx
  int v36; // ecx
  int v37; // eax
  int (__thiscall *v38)(int, char *); // edx
  char *v39; // ecx
  float v40; // ebx
  int v41; // eax
  float *v42; // eax
  double v43; // st6
  double v44; // st7
  double v45; // st5
  double v46; // st7
  double v47; // st6
  double v48; // rtt
  double v49; // st6
  double v50; // st6
  double v51; // st5
  double v52; // st4
  double v53; // rt0
  double v54; // st4
  double v55; // st6
  float v56; // edi
  int v57; // eax
  float v58; // [esp+Ch] [ebp-80h]
  float v59; // [esp+20h] [ebp-6Ch]
  float v60; // [esp+28h] [ebp-64h]
  char v61; // [esp+38h] [ebp-54h] BYREF
  char v62; // [esp+44h] [ebp-48h] BYREF
  _BYTE v63[12]; // [esp+50h] [ebp-3Ch] BYREF
  int v64[3]; // [esp+5Ch] [ebp-30h] BYREF
  float v65[3]; // [esp+68h] [ebp-24h] BYREF
  float v66; // [esp+74h] [ebp-18h] BYREF
  double v67; // [esp+78h] [ebp-14h]
  float v68; // [esp+80h] [ebp-Ch]
  unsigned int *v69; // [esp+84h] [ebp-8h]
  float v70; // [esp+88h] [ebp-4h]
  char v71; // [esp+97h] [ebp+Bh]
  float v72; // [esp+98h] [ebp+Ch]
  float v73; // [esp+98h] [ebp+Ch]
  int v74; // [esp+98h] [ebp+Ch]
  int v75; // [esp+98h] [ebp+Ch]
  float v76; // [esp+9Ch] [ebp+10h]
  float v77; // [esp+9Ch] [ebp+10h]
  float v78; // [esp+9Ch] [ebp+10h]

  v6 = sub_10418360(*(_DWORD *)a2);
  if ( v6 == 8 )
  {
    v69 = (unsigned int *)(a2 + 36);
    v16 = *(_DWORD *)(a2 + 36);
    if ( v16 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a2 + 36) & 0xFFF) + 2] == v16 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a2 + 36) & 0xFFF) + 1] )
    {
      v71 = 0;
      if ( !(unsigned __int8)sub_10418670(a4) )
        v71 = sub_100EFD10(a3, a4, 1);
      if ( !*(_BYTE *)(a2 + 12) )
      {
        v17 = this[183];
        *(float *)(a2 + 44) = this[183];
        *(float *)(a2 + 48) = v17;
        *(float *)(a2 + 52) = *(float *)(a2 + 44);
        if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 296))(this) )
          v18 = 1.0;
        else
          v18 = 0.0;
        *(float *)(a2 + 32) = v18;
      }
      if ( *v69 == -1 || off_1061BE18[4 * (*v69 & 0xFFF) + 2] != *v69 >> 12 )
        v19 = 0;
      else
        v19 = off_1061BE18[4 * (*v69 & 0xFFF) + 1];
      if ( (float *)v19 != this )
      {
        if ( !v71 || *(_BYTE *)(a2 + 40) != (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 296))(this) )
          *(float *)(a2 + 44) = this[183];
        *(_BYTE *)(a2 + 40) = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 296))(this);
        v67 = sub_1041CA40(a3);
        if ( sub_10418520(a4) - 0.1 >= v67 )
        {
          v68 = sub_1041CA40(a3);
          if ( sub_10418510(a4) <= v68 )
            v20 = sub_1041CA40(a3);
          else
            v20 = sub_10418510(a4);
        }
        else
        {
          v20 = sub_10418520(a4) - 0.1;
        }
        v60 = v20;
        sub_1041A260((int)a4, v60);
        v70 = v20;
        v73 = sub_1041CA40(a3);
        v21 = v73 - sub_10418510(a4);
        if ( v21 >= 0.5 )
          v22 = 1.0;
        else
          v22 = 3.0 * (v21 * 2.0 * (v21 * 2.0)) - v21 * 2.0 * (2.0 * (v21 * 2.0 * (v21 * 2.0)));
        if ( v70 <= v22 )
        {
          if ( v70 < 0.0 )
            v70 = 0.0;
        }
        else
        {
          v70 = v22;
        }
        if ( v71 && *(_BYTE *)(a2 + 40) )
          *(float *)(a2 + 44) = this[183];
        if ( !(unsigned __int8)sub_10418670(a4) && !*(_BYTE *)(a2 + 40) && v71 )
          sub_1001A2E0(this, *(float *)(a2 + 52), v70);
        v23 = *(float *)(a2 + 48);
        sub_10424C10(*(float *)(a2 + 48), this[183]);
        if ( v23 >= 0.0 )
        {
          v24 = 1.0;
        }
        else
        {
          v23 = -v23;
          v24 = -1.0;
        }
        v25 = 30.0;
        if ( v23 >= 30.0 )
          v26 = 30.0;
        else
          v26 = v23;
        v27 = v26;
        v28 = v23 - v26;
        v29 = v27;
        if ( v28 < 30.0 )
          v25 = v28;
        v30 = v69;
        v31 = 1.0 - v70;
        v32 = v29 * v70;
        v33 = v70;
        this[930] = v32 * v24 + this[930] * v31;
        this[931] = v24 * (v33 * v25) + v31 * this[931];
        v34 = *v30;
        if ( *v30 == -1 || (v35 = &off_1061BE18[4 * (*v30 & 0xFFF) + 1], v35[1] != v34 >> 12) )
          v36 = 0;
        else
          v36 = *v35;
        v37 = sub_100D7680(v36);
        if ( v37 )
        {
          v38 = *(int (__thiscall **)(int, char *))(*(_DWORD *)v37 + 1824);
          v39 = &v62;
        }
        else
        {
          v37 = sub_1026A890(v69);
          v38 = *(int (__thiscall **)(int, char *))(*(_DWORD *)v37 + 504);
          v39 = &v61;
        }
        v40 = *this;
        v41 = v38(v37, v39);
        *(float *)&v74 = ((double (__thiscall *)(float *, int))*(_DWORD *)(LODWORD(v40) + 1696))(this, v41);
        if ( *(int *)(dword_106CE684 + 48) > 0 && *(_DWORD *)(dword_10690394 + 48) )
        {
          v42 = (float *)sub_10019640(this);
          v64[0] = *(int *)v42;
          v64[1] = *((int *)v42 + 1);
          *(float *)&v64[2] = v42[2] + 1.0;
          v58 = v70 * 32.0 + 8.0;
          sub_1011C710((int)v64, *(float *)&v74, v58, 8.0, 255, 255, 255, 0, 1, 0.12);
        }
        sub_10424C10(*(float *)&v74, *(float *)(a2 + 44));
        v43 = *(float *)&v74 * v70;
        v44 = v70;
        *(float *)&v75 = v43;
        v68 = 1.0;
        HIDWORD(v67) = (unsigned __int16)(int)((*(float *)(a2 + 44) + v43) * 182.04445);
        *(float *)(a2 + 48) = (double)SHIDWORD(v67) * 0.0054931641;
        if ( v43 < 0.0 )
        {
          *(float *)&v75 = -v43;
          v68 = -1.0;
          v43 = -v43;
        }
        v45 = v44 - 0.5 + v44 - 0.5;
        if ( v45 >= 0.0 )
        {
          v48 = v43;
          v47 = v45;
          v46 = v48;
        }
        else
        {
          v46 = v43;
          v47 = 0.0;
        }
        *((float *)&v67 + 1) = 1.0 - v47;
        if ( v71 && (v46 = *(float *)&v75, !(unsigned __int8)sub_10418670(a4)) )
          v49 = *((float *)&v67 + 1);
        else
          v49 = 1.0;
        v50 = v49 * v46;
        v51 = 30.0;
        if ( v50 >= 30.0 )
          v52 = 30.0;
        else
          v52 = v50;
        v53 = v52;
        v54 = v50 - v52;
        v55 = v53;
        if ( v54 < 30.0 )
          v51 = v54;
        *(float *)(a2 + 52) = (v46 - v51 - v55) * v68 + *(float *)(a2 + 44);
        if ( !(unsigned __int8)sub_10418670(a4) )
        {
          v56 = *this;
          v59 = v70;
          v57 = sub_1026A890(v69);
          (*(void (__thiscall **)(float *, int, _DWORD, _DWORD, _DWORD))(LODWORD(v56) + 1712))(
            this,
            v57,
            LODWORD(v59),
            0.2,
            0.0);
        }
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else if ( v6 == 16 )
  {
    switch ( *(_DWORD *)(a2 + 56) )
    {
      case 1:
        v76 = sub_10418520(a4);
        v8 = v76 - sub_1041CA40(a3) + *(float *)(dword_106B31C8 + 12);
        if ( v8 < this[935] )
          v8 = this[935];
        this[935] = v8;
        result = 1;
        break;
      case 2:
      case 3:
      case 7:
        return 1;
      case 4:
        if ( !sub_1026A890(a2 + 36) )
          return 1;
        v9 = sub_1026A890(a2 + 36);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v9 + 504))(v9, v65);
        v10 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 504))(this, v63);
        v66 = v65[0] - *v10;
        *(float *)&v67 = v65[1] - v10[1];
        *((float *)&v67 + 1) = v65[2] - v10[2];
        off_10689714();
        (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 1836))(this, &v66);
        result = 1;
        break;
      case 5:
        if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(a2 + 60) )
          return 1;
        v11 = this + 942;
        *(float *)(a2 + 60) = ((double (__thiscall *)(float *, float *, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 2256))(
                                this,
                                this + 942,
                                0,
                                1.5,
                                2.5)
                            + *(float *)(dword_106B31C8 + 12)
                            - 0.4;
        if ( *((int *)this + 945) <= 0 )
          return 1;
        v77 = sub_10418520(a4);
        v12 = v77 - sub_1041CA40(a3) + *(float *)(dword_106B31C8 + 12);
        v13 = 4 * (9 * *((_DWORD *)this + 945) - 9);
        v14 = (float *)(v13 + *v11 + 24);
        if ( v12 > *v14 )
          v12 = *v14;
        *v14 = v12;
        *(float *)(v13 + *v11 + 32) = 0.1;
        result = 1;
        break;
      case 6:
        result = sub_10019750(this, a2, a3, (int)a4);
        break;
      case 8:
        if ( !sub_1026A890(a2 + 36) || *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(a2 + 60) )
          return 1;
        v78 = sub_10418520(a4);
        v72 = v78 - sub_1041CA40(a3);
        v15 = sub_1026A890(a2 + 36);
        sub_101CABB0((int)this, v15, 1, v72);
        result = 1;
        *(float *)(a2 + 60) = *(float *)(dword_106B31C8 + 12) + v72;
        break;
      case 9:
        if ( *((_DWORD *)this + 581) == 4 || (unsigned __int8)sub_100697A0(62, 1) )
          return 1;
        sub_100EFD10(a3, a4, 0);
        result = 1;
        break;
      default:
        return 0;
    }
  }
  else
  {
    return sub_100F2C50(a2, a3, a4);
  }
  return result;
}
