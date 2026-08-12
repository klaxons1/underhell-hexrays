int __thiscall sub_10387A90(float *this, int a2)
{
  int v4; // edi
  int *v5; // eax
  int v6; // eax
  void (__thiscall *v7)(float *, int); // eax
  float v8; // edx
  float v9; // eax
  unsigned int v10; // ecx
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st4
  int v15; // eax
  double v16; // st7
  int v17; // ecx
  float *v18; // eax
  float v19; // edx
  float v20; // ecx
  float v21; // eax
  float v22; // edx
  float *v23; // eax
  double v24; // st6
  double v25; // st6
  void (__thiscall *v26)(float *, int *); // edx
  double v27; // st7
  double v28; // st6
  double v29; // st5
  double v30; // st7
  float v31; // ecx
  float v32; // edx
  double v33; // st7
  double v34; // st6
  double v35; // st5
  double v36; // st7
  void (__thiscall *v37)(float *, int); // eax
  int v38; // edi
  int v40[64]; // [esp+18h] [ebp-18Ch] BYREF
  int v41; // [esp+118h] [ebp-8Ch] BYREF
  float v42; // [esp+11Ch] [ebp-88h]
  float v43; // [esp+120h] [ebp-84h]
  float v44; // [esp+124h] [ebp-80h]
  float v45; // [esp+14Ch] [ebp-58h]
  int v46; // [esp+164h] [ebp-40h]
  int v47; // [esp+168h] [ebp-3Ch]
  float v48; // [esp+16Ch] [ebp-38h]
  float v49; // [esp+170h] [ebp-34h]
  float v50; // [esp+174h] [ebp-30h]
  _DWORD v51[2]; // [esp+178h] [ebp-2Ch] BYREF
  float v52; // [esp+180h] [ebp-24h]
  float v53; // [esp+184h] [ebp-20h]
  float v54; // [esp+188h] [ebp-1Ch]
  float v55; // [esp+18Ch] [ebp-18h] BYREF
  float v56; // [esp+190h] [ebp-14h]
  float v57; // [esp+194h] [ebp-10h]
  float v58; // [esp+198h] [ebp-Ch] BYREF
  float v59; // [esp+19Ch] [ebp-8h]
  float v60; // [esp+1A0h] [ebp-4h]
  int v61; // [esp+1ACh] [ebp+8h]

  sub_1001E4E0(&v41, a2);
  v4 = v46;
  v5 = sub_102D9B20();
  if ( v4 == sub_100B9D10(v5, "SniperRound") )
    v45 = (float)(*((int *)this + 54) >> 1);
  v6 = *(_DWORD *)(a2 + 64);
  if ( (v6 & 0x800000) != 0 )
  {
    v7 = *(void (__thiscall **)(float *, int))(*(_DWORD *)this + 600);
    this[964] = 20.0;
    v7(this, a2);
    v45 = 1.0;
    if ( *(float *)(dword_106B31C8 + 12) <= (double)this[953] )
    {
      if ( *((_BYTE *)this + 3853) )
      {
        *((_BYTE *)this + 3853) = 0;
        sub_1023C380(this, (int)"NPC_Manhack.ChargeEnd", 0.0, 0);
      }
      this[952] = *(float *)(dword_106B31C8 + 12) + 2.0;
      this[953] = *(float *)(dword_106B31C8 + 12) - 0.1;
      sub_10044510((int)this, (int)"Stopping burst");
    }
  }
  else if ( (v6 & 0x2000000) != 0 )
  {
    v45 = (float)*((int *)this + 55);
  }
  else if ( (v6 & 0x80u) == 0 )
  {
    v31 = v42;
    v32 = v43;
    this[964] = 20.0;
    v58 = v31;
    v59 = v32;
    v60 = v44;
    off_10689714();
    this[951] = *(float *)(dword_106B31C8 + 12) + 0.25;
    v33 = *(float *)(a2 + 52);
    v34 = v58 * v33;
    v35 = v59 * v33;
    v36 = v33 * v60 * 20.0;
    this[935] = v34 * 20.0;
    this[936] = v35 * 20.0;
    this[937] = v36;
    v37 = *(void (__thiscall **)(float *, int))(*(_DWORD *)this + 600);
    v42 = v42 * 20.0;
    v43 = v43 * 20.0;
    v44 = 20.0 * v44;
    v37(this, a2);
  }
  else
  {
    v8 = *(float *)(a2 + 8);
    v9 = *(float *)(a2 + 12);
    v48 = *(float *)(a2 + 4);
    v45 = v45 * 1.5;
    v49 = v8;
    v50 = v9;
    off_10689714();
    v10 = *((_DWORD *)this + 63) >> 11;
    v11 = 128.0;
    v58 = v48 * 128.0;
    v59 = v49 * 128.0;
    v60 = v50 * 128.0;
    if ( (v10 & 1) != 0 )
    {
      sub_100DAE60((int)this);
      v11 = 128.0;
    }
    v12 = this[145] + v58;
    v13 = this[146] + v59;
    v14 = this[147] + v60;
    v55 = v12 + v11;
    v56 = v13 + v11;
    v57 = v14 + v11;
    v58 = v12 - v11;
    v59 = v13 - v11;
    v60 = v14 - v11;
    sub_1025F990(v51, (int)v40, 64, 0);
    v15 = sub_1025F9C0((int)&v58, (int)&v55, (int)v51);
    *(float *)&v61 = 0.89999998;
    v16 = 200.0;
    v52 = flt_106B4F40;
    v4 = 0;
    v47 = v15;
    v53 = flt_106B4F44;
    v54 = flt_106B4F48;
    if ( v15 > 0 )
    {
      do
      {
        v17 = *(_DWORD *)(v40[v4] + 424);
        if ( v17 )
        {
          if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v17 + 116))(v17) <= 200.0 )
          {
            v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v40[v4] + 576))(v40[v4]);
            v19 = v18[1];
            v20 = *v18;
            v21 = v18[2];
            v56 = v19;
            v22 = *this;
            v55 = v20;
            v57 = v21;
            v23 = (float *)(*(int (__thiscall **)(float *))(LODWORD(v22) + 576))(this);
            v58 = v55 - *v23;
            v59 = v56 - v23[1];
            v60 = v57 - v23[2];
            off_10689714();
            v24 = flt_106B4F44 * v59 + flt_106B4F40 * v58 + flt_106B4F48 * v60;
            if ( *(float *)&v61 < v24 )
            {
              *(float *)&v61 = v24;
              v52 = v58;
              v53 = v59;
              v54 = v60;
            }
          }
        }
        ++v4;
      }
      while ( v4 < v47 );
      v16 = 200.0;
    }
    v25 = *(float *)(a2 + 52);
    v26 = *(void (__thiscall **)(float *, int *))(*(_DWORD *)this + 600);
    v42 = v52 * v25 * v16;
    v43 = v53 * v25 * v16;
    v44 = v16 * (v25 * v54);
    v26(this, &v41);
    v27 = *(float *)(a2 + 52);
    v28 = v52 * v27;
    v29 = v53 * v27;
    v30 = v27 * v54 * 0.5;
    this[935] = v28 * 0.5;
    this[936] = v29 * 0.5;
    this[937] = v30;
    this[964] = 10.0;
    sub_1023C380(this, (int)"NPC_Manhack.Bat", 0.0, 0);
    this[951] = *(float *)(dword_106B31C8 + 12) + 0.5;
    if ( *(float *)(dword_106B31C8 + 12) <= (double)this[953] )
    {
      if ( *((_BYTE *)this + 3853) )
      {
        *((_BYTE *)this + 3853) = 0;
        sub_1023C380(this, (int)"NPC_Manhack.ChargeEnd", 0.0, 0);
      }
      this[952] = *(float *)(dword_106B31C8 + 12) + 2.0;
      this[953] = *(float *)(dword_106B31C8 + 12) - 0.1;
      sub_10044510((int)this, (int)"Stopping burst");
    }
  }
  v38 = sub_10035940((int *)this, v4, (int)&v41);
  if ( v38 )
  {
    if ( *((int *)this + 55) <= 0 )
    {
      sub_10383DE0(this);
    }
    else
    {
      if ( *(char *)(a2 + 64) < 0 )
        sub_10387600((int)this, 3);
      if ( *((_DWORD *)this + 55) <= *((_DWORD *)this + 54) / 2 )
      {
        sub_10386750(this);
        return v38;
      }
    }
  }
  return v38;
}
