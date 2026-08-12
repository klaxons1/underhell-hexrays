int *__thiscall sub_1032E170(int *this, float a2, int a3, float *a4, float *a5, int a6)
{
  int (__thiscall *v7)(int *); // edx
  int *v8; // ebx
  int v9; // eax
  float *v10; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  float *v17; // eax
  float *v18; // eax
  int v19; // edx
  int *v20; // edi
  int v21; // eax
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  char v25; // al
  unsigned int v26; // eax
  int *v27; // ebx
  float *v28; // edi
  float *v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  int v32; // eax
  double v33; // st7
  int v34; // eax
  unsigned int v35; // eax
  int v36; // ecx
  float *v37; // [esp+10h] [ebp-240h]
  float v38; // [esp+1Ch] [ebp-234h]
  float v39; // [esp+1Ch] [ebp-234h]
  float v40; // [esp+1Ch] [ebp-234h]
  float v41; // [esp+1Ch] [ebp-234h]
  float v42; // [esp+1Ch] [ebp-234h]
  int v43; // [esp+24h] [ebp-22Ch]
  float v44; // [esp+28h] [ebp-228h]
  float v45; // [esp+28h] [ebp-228h]
  _BYTE v46[44]; // [esp+38h] [ebp-218h] BYREF
  float v47; // [esp+64h] [ebp-1ECh]
  _DWORD v48[20]; // [esp+8Ch] [ebp-1C4h] BYREF
  _DWORD v49[20]; // [esp+DCh] [ebp-174h] BYREF
  _DWORD v50[20]; // [esp+12Ch] [ebp-124h] BYREF
  _DWORD v51[20]; // [esp+17Ch] [ebp-D4h] BYREF
  _DWORD v52[20]; // [esp+1CCh] [ebp-84h] BYREF
  float v53[2]; // [esp+21Ch] [ebp-34h] BYREF
  float v54; // [esp+224h] [ebp-2Ch]
  int v55; // [esp+228h] [ebp-28h]
  float v56[3]; // [esp+22Ch] [ebp-24h] BYREF
  char v57[4]; // [esp+238h] [ebp-18h] BYREF
  float v58; // [esp+23Ch] [ebp-14h]
  float v59; // [esp+240h] [ebp-10h]
  int v60; // [esp+244h] [ebp-Ch] BYREF
  int v61; // [esp+248h] [ebp-8h]
  int v62; // [esp+24Ch] [ebp-4h]
  int savedregs; // [esp+250h] [ebp+0h] BYREF
  int v64; // [esp+258h] [ebp+8h]

  v7 = *(int (__thiscall **)(int *))(*this + 368);
  v55 = -1;
  v8 = 0;
  if ( v7(this) )
  {
    v9 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    *(float *)v57 = 8.0;
    v58 = 8.0;
    v59 = 8.0;
    *(float *)&v60 = -8.0;
    *(float *)&v61 = -8.0;
    *(float *)&v62 = -8.0;
    v37 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 576))(v9);
    v10 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
    sub_100231A0((int)&savedregs, (int)this, v10, v37, (float *)&v60, (float *)v57, 16395, (int)this, 0, (int)v46);
    if ( v47 < 1.0 )
      return 0;
    if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
    {
      v12 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 288))(v12);
      if ( v13 )
      {
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 1096))(v13);
        v15 = v14;
        if ( v14 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 340))(v14)
            && __RTDynamicCast(
                 v15,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                 (int)&CPropVehicleDriveable `RTTI Type Descriptor',
                 0) )
          {
            v16 = (**(int (__thiscall ***)(int))(v15 + 1484))(v15 + 1484);
            v8 = (int *)v16;
            if ( v16 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 320))(v16) )
              v55 = v8[55];
            else
              v8 = 0;
          }
        }
      }
    }
  }
  v17 = (float *)sub_10073710(this[419]);
  v53[0] = *v17;
  v53[1] = v17[1];
  v43 = this[419];
  v54 = v17[2];
  v18 = (float *)sub_10073730(v43);
  v56[0] = *v18;
  v56[1] = v18[1];
  v54 = v53[0];
  v19 = *this;
  v56[2] = v56[0];
  v20 = 0;
  if ( !(*(int (__thiscall **)(int *))(v19 + 368))(this)
    || (v21 = (*(int (__thiscall **)(int *))(*this + 368))(this),
        (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 220))(v21) != 6) )
  {
    if ( !*((_BYTE *)this + 1668) )
      goto LABEL_37;
    if ( !*((_BYTE *)this + 1712) )
      goto LABEL_38;
    if ( a6 )
    {
      if ( a6 != 1 )
      {
        if ( a6 != 2 )
          goto LABEL_38;
LABEL_37:
        v20 = (int *)(*(int (__thiscall **)(int *, _DWORD, float *, float *, int, int, _DWORD, _DWORD))(*this + 1072))(
                       this,
                       LODWORD(a2),
                       v53,
                       v56,
                       a3,
                       4,
                       1.0,
                       0);
        goto LABEL_38;
      }
      v25 = (*(int (__thiscall **)(int *))(*this + 2236))(this);
    }
    else
    {
      v25 = (*(int (__thiscall **)(int *))(*this + 2232))(this);
    }
    if ( !v25 )
      goto LABEL_38;
    goto LABEL_37;
  }
  if ( *((_BYTE *)this + 1668) )
  {
    if ( *((_BYTE *)this + 1712) )
    {
      if ( a6 )
      {
        if ( a6 == 1 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 2236))(this) )
          {
            v40 = (float)a3;
            v20 = (int *)(*(int (__thiscall **)(int *))(*this + 368))(this);
            v23 = (float *)sub_10019640(this);
            sub_102487B0((int)v48, (int)this, (int)this, &flt_106F1CA8, v23, v40, 4, 0, 0);
            sub_100D9E70(v20, (int)this, v48);
          }
        }
        else if ( a6 == 2 )
        {
          v39 = (float)a3;
          v20 = (int *)(*(int (__thiscall **)(int *))(*this + 368))(this);
          v22 = (float *)sub_10019640(this);
          sub_102487B0((int)v50, (int)this, (int)this, &flt_106F1CA8, v22, v39, 4, 0, 0);
          sub_100D9E70(v20, (int)this, v50);
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 2232))(this) )
      {
        v41 = (float)a3;
        v20 = (int *)(*(int (__thiscall **)(int *))(*this + 368))(this);
        v24 = (float *)sub_10019640(this);
        sub_102487B0((int)v51, (int)this, (int)this, &flt_106F1CA8, v24, v41, 4, 0, 0);
        sub_100D9E70(v20, (int)this, v51);
      }
    }
  }
  else
  {
    v20 = (int *)(*(int (__thiscall **)(int *))(*this + 368))(this);
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v38 = (float)a3;
    sub_102487B0((int)v52, (int)this, (int)this, &flt_106F1CA8, (float *)this + 145, v38, 4, 0, 0);
    sub_100D9E70(v20, (int)this, v52);
  }
LABEL_38:
  if ( v8 && v55 != v8[55] )
    v20 = v8;
  if ( v20 )
    goto LABEL_49;
  v26 = this[949];
  if ( v26 == -1
    || off_1061BE18[4 * (this[949] & 0xFFF) + 2] != v26 >> 12
    || !off_1061BE18[4 * (this[949] & 0xFFF) + 1]
    || !sub_100697A0(this, 91, 1) )
  {
    goto LABEL_73;
  }
  v27 = (int *)sub_1026A890((unsigned int *)this + 949);
  v28 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
  v29 = (float *)(*(int (__thiscall **)(int *))(*v27 + 576))(v27);
  *(float *)v57 = *v29 - *v28;
  v58 = v29[1] - v28[1];
  v59 = v29[2] - v28[2];
  off_10689714();
  v30 = (unsigned int)this[63] >> 11;
  *(float *)v57 = *(float *)v57 * 120.0;
  v58 = v58 * 120.0;
  v59 = 120.0 * v59;
  if ( (v30 & 1) != 0 )
    sub_100DAE60((int)this);
  v42 = (float)a3;
  sub_102487B0((int)v49, (int)this, (int)this, (float *)v57, (float *)this + 145, v42, 4, 0, 0);
  sub_100D9E70(v27, (int)this, v49);
  v20 = (int *)sub_1026A890((unsigned int *)this + 949);
  if ( v20 )
  {
LABEL_49:
    (*(void (__thiscall **)(int *))(*this + 2304))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v20 + 320))(v20) )
    {
      if ( (v20[64] & 0x4000) == 0 )
      {
        sub_100F7A60((float *)v20, a4);
        sub_101E28A0((unsigned int *)v20, a5);
      }
      goto LABEL_74;
    }
    v31 = (*(int (__thiscall **)(int *))(*v20 + 276))(v20);
    if ( sub_10265BF0(v31) )
    {
      if ( a6 )
      {
        if ( a6 == 1 )
        {
          if ( !sub_100BF1B0(this, "blood_right", (int)&v60, 0, 0, 0) )
            goto LABEL_74;
          if ( a3 >= 30 )
            a3 = 30;
          v33 = (double)a3;
        }
        else
        {
          if ( a6 != 2 )
            goto LABEL_74;
          if ( sub_100BF1B0(this, "blood_left", (int)&v60, 0, 0, 0) )
          {
            v64 = a3;
            if ( a3 >= 30 )
              v64 = 30;
            v44 = (float)v64;
            v32 = (*(int (__thiscall **)(int *))(*v20 + 276))(v20);
            sub_100E84B0(v60, v61, v62, (int)&flt_106B4F40, v32, v44);
          }
          if ( !sub_100BF1B0(this, "blood_right", (int)&v60, 0, 0, 0) )
            goto LABEL_74;
          if ( a3 >= 30 )
            a3 = 30;
          v33 = (double)a3;
        }
      }
      else
      {
        if ( !sub_100BF1B0(this, "blood_left", (int)&v60, 0, 0, 0) )
          goto LABEL_74;
        if ( a3 >= 30 )
          a3 = 30;
        v33 = (double)a3;
      }
      v45 = v33;
      v34 = (*(int (__thiscall **)(int *))(*v20 + 276))(v20);
      sub_100E84B0(v60, v61, v62, (int)&flt_106B4F40, v34, v45);
    }
  }
  else
  {
LABEL_73:
    (*(void (__thiscall **)(int *))(*this + 2308))(this);
  }
LABEL_74:
  v35 = this[949];
  if ( v35 == -1 || off_1061BE18[4 * (this[949] & 0xFFF) + 2] != v35 >> 12 )
    v36 = 0;
  else
    v36 = off_1061BE18[4 * (this[949] & 0xFFF) + 1];
  if ( v20 == (int *)v36 && sub_100697A0(this, 91, 1) )
  {
    this[949] = -1;
    *((float *)this + 951) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                               dword_106B31E4,
                               2.0,
                               4.0)
                           + *(float *)(dword_106B31C8 + 12);
  }
  return v20;
}
