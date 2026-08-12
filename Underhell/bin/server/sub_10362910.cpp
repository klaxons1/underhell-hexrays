void __thiscall sub_10362910(int this, char *String1)
{
  unsigned int v3; // eax
  _DWORD *v4; // esi
  int v5; // ecx
  int *v6; // ebx
  float *v7; // eax
  double v8; // st7
  int v9; // eax
  int v10; // ecx
  int *v11; // edx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  int *v19; // eax
  unsigned int v20; // ecx
  _DWORD *v21; // esi
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // eax
  int v25; // ecx
  double v26; // st7
  double v27; // st7
  unsigned int v28; // eax
  int v29; // ecx
  float *v30; // eax
  double v31; // st6
  double v32; // st7
  double v33; // st7
  double v34; // st7
  int v35; // eax
  double v36; // st3
  int v37; // eax
  unsigned int *v38; // ebx
  int v39; // esi
  int v40; // eax
  float *v41; // eax
  int v42; // ecx
  float *v43; // eax
  int v44; // ecx
  int v45; // esi
  int v46; // ecx
  int (__thiscall *v47)(int); // edx
  float *v48; // eax
  int v49; // esi
  float *v50; // eax
  __int64 v51; // [esp+48h] [ebp-A0h]
  float v52; // [esp+4Ch] [ebp-9Ch]
  float v53; // [esp+50h] [ebp-98h]
  float v54; // [esp+50h] [ebp-98h]
  _BYTE v55[12]; // [esp+60h] [ebp-88h] BYREF
  _DWORD v56[8]; // [esp+6Ch] [ebp-7Ch] BYREF
  float v57[3]; // [esp+8Ch] [ebp-5Ch] BYREF
  float v58; // [esp+98h] [ebp-50h]
  int v59; // [esp+9Ch] [ebp-4Ch] BYREF
  int v60; // [esp+A0h] [ebp-48h]
  int v61; // [esp+A4h] [ebp-44h]
  unsigned int *v62; // [esp+A8h] [ebp-40h]
  int v63; // [esp+ACh] [ebp-3Ch] BYREF
  float v64; // [esp+B0h] [ebp-38h]
  float v65; // [esp+B4h] [ebp-34h]
  float v66; // [esp+B8h] [ebp-30h]
  float v67; // [esp+BCh] [ebp-2Ch]
  float v68; // [esp+C0h] [ebp-28h]
  int v69; // [esp+C4h] [ebp-24h] BYREF
  float v70; // [esp+C8h] [ebp-20h]
  float v71; // [esp+CCh] [ebp-1Ch]
  float v72; // [esp+D0h] [ebp-18h] BYREF
  float v73; // [esp+D4h] [ebp-14h]
  float v74; // [esp+D8h] [ebp-10h]
  int v75; // [esp+DCh] [ebp-Ch] BYREF
  int v76; // [esp+E0h] [ebp-8h]
  int v77; // [esp+E4h] [ebp-4h]
  float String1a; // [esp+F0h] [ebp+8h]

  v3 = *(_DWORD *)(this + 4184);
  v4 = (_DWORD *)(this + 4184);
  v62 = (unsigned int *)(this + 4184);
  if ( v3 != -1 && off_1061BE18[4 * (v3 & 0xFFF) + 2] == v3 >> 12 && off_1061BE18[4 * (v3 & 0xFFF) + 1] )
  {
    *(_BYTE *)(this + 4288) = 0;
    if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
    v6 = *(int **)(v5 + 424);
    if ( v6 )
    {
      v58 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*v6 + 116))(*(_DWORD *)(v5 + 424));
      v7 = sub_1001F010((float *)&v63, -250.0, -250.0);
      v8 = 1.0 / v58;
      v57[0] = *v7 * v8;
      v57[1] = v7[1] * v8;
      v57[2] = v8 * v7[2];
      sub_100BCCF0((_DWORD *)this);
      v9 = sub_100BEF30(this, String1);
      if ( !v9 )
        v9 = *(_DWORD *)(this + 4192);
      sub_100BCCA0((void *)this, v9, (int)&v59, (int)v55);
      (*(void (__thiscall **)(int *))(*v6 + 96))(v6);
      if ( (*(int (__thiscall **)(int *))(*v6 + 280))(v6) )
      {
        if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
          v10 = 0;
        else
          v10 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v10 + 140))(v10, 0, -1);
        if ( *v4 == -1 || (v11 = off_1061BE18, off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12) )
          v12 = 0;
        else
          v12 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
        sub_100E0970(v12, (int)v11, *(_DWORD *)(this + 4280), 0);
        if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
          v13 = 0;
        else
          v13 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 76))(v13, this);
        (*(void (__thiscall **)(int *))(*v6 + 284))(v6);
        if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
          v14 = 0;
        else
          v14 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
        if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
          v15 = 0;
        else
          v15 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
        (*(void (__thiscall **)(int *, int, int, int))(*v6 + 180))(v6, v15 + 716, v14 + 728, 1);
        (*(void (__thiscall **)(int *))(*v6 + 104))(v6);
        (*(void (__thiscall **)(int *))(*v6 + 108))(v6);
      }
      v16 = *(_DWORD *)(this + 4188);
      if ( v16 == -1
        || off_1061BE18[4 * (*(_DWORD *)(this + 4188) & 0xFFF) + 2] != v16 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(this + 4188) & 0xFFF) + 1] )
      {
        if ( *(int *)(dword_106B31C8 + 20) <= 1 )
          v17 = sub_10261B20();
        else
          v17 = 0;
        if ( v17 )
          *(_DWORD *)(this + 4188) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17);
        else
          *(_DWORD *)(this + 4188) = -1;
      }
      v18 = *(_DWORD *)(this + 4188);
      if ( v18 != -1 )
      {
        v19 = &off_1061BE18[4 * (*(_DWORD *)(this + 4188) & 0xFFF) + 1];
        v20 = v18 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 4188) & 0xFFF) + 2] == v20 )
        {
          if ( *v19 )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(this + 4188) & 0xFFF) + 2] == v20 )
              v21 = (_DWORD *)*v19;
            else
              v21 = 0;
            if ( (v21[63] & 0x800) != 0 )
              sub_100DAE60((int)v21);
            v22 = v21[145];
            v23 = v21[147];
            v76 = v21[146];
            v24 = *(_DWORD *)(this + 4188);
            v75 = v22;
            v77 = v23;
            if ( v24 == -1 || off_1061BE18[4 * (v24 & 0xFFF) + 2] != v24 >> 12 )
              v25 = 0;
            else
              v25 = off_1061BE18[4 * (v24 & 0xFFF) + 1];
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v25 + 320))(v25) )
            {
              *(float *)&v63 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                 dword_106B31E4,
                                 -128.0,
                                 128.0);
              v26 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                      dword_106B31E4,
                      -128.0,
                      128.0);
              *(float *)&v75 = *(float *)&v75 + *(float *)&v63;
              *(float *)&v76 = v26 + *(float *)&v76;
            }
            sub_101692F0((float *)&v69, this, v59, v60, v61, v75, v76, v77, *(float *)(this + 4276), 1.0, 1, 0, 0);
            if ( sub_10018CD0((float *)&v69, &flt_106F1CA8) )
            {
              (*(void (__thiscall **)(int, int *, _DWORD, int *))(*(_DWORD *)this + 528))(this, &v63, 0, &v75);
              *(float *)&v69 = *(float *)&v75 + *(float *)&v63;
              v70 = *(float *)&v76 + v64;
              v71 = *(float *)&v77 + v65;
              off_10689714();
              v27 = ((double (__thiscall *)(int *))*(_DWORD *)(*v6 + 116))(v6) * 30.0;
              *(float *)&v69 = *(float *)&v69 * v27;
              v70 = v70 * v27;
              v71 = v27 * v71;
            }
            v28 = *(_DWORD *)(this + 4188);
            if ( v28 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4188) & 0xFFF) + 2] != v28 >> 12 )
              v29 = 0;
            else
              v29 = off_1061BE18[4 * (*(_DWORD *)(this + 4188) & 0xFFF) + 1];
            v30 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v29 + 536))(v29, &v63);
            v31 = v30[1] * 0.5 + v70;
            v32 = 0.5 * v30[2] + v71;
            v72 = *v30 * 0.5 + *(float *)&v69;
            v66 = v72;
            v73 = v31;
            v74 = v32;
            v67 = v73;
            v68 = v74;
            off_10689714();
            v53 = v73 * v73 + v72 * v72 + v74 * v74;
            String1a = 1000.0 / off_10689708(v53);
            v33 = ((double (__thiscall *)(int *, float *))*(_DWORD *)(*v6 + 256))(v6, &v72);
            v34 = v33 * v33;
            v35 = *v6;
            v36 = 1.0 / String1a;
            v72 = v66 * v34 * v36 + v72;
            v73 = v67 * v34 * v36 + v73;
            v74 = v34 * v68 * v36 + v74;
            (*(void (__thiscall **)(int *, float *, float *))(v35 + 196))(v6, &v72, v57);
            *(float *)(this + 4176) = *(float *)(dword_106E7C8C + 44) + *(float *)(dword_106B31C8 + 12);
            v54 = v73 * v73 + v72 * v72 + v74 * v74;
            *(float *)(this + 4180) = 1000.0 / off_10689708(v54) + *(float *)(dword_106B31C8 + 12);
          }
        }
      }
      HIDWORD(v51) = this;
      LODWORD(v51) = this;
      sub_1010DD80((_DWORD *)(this + 4204), v51, 0.0);
      sub_10360B50((_DWORD *)this);
      if ( *(_BYTE *)(this + 4289) == 1 )
      {
        sub_1023C380((_DWORD *)this, (int)"Weapon_PhysCannon.Launch", 0.0, 0);
        v37 = sub_100FB5C0("sprites/orangelight1.vmt", 1.8);
        v38 = v62;
        v39 = v37;
        if ( v37 )
        {
          v40 = sub_1026A890(v62);
          v41 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 576))(v40);
          sub_100FAD20(v39, v41, (_DWORD *)this);
          sub_1005BC90(v39, *(_DWORD *)(this + 4192));
          sub_1005C3A0(v39, 6.4000001);
          sub_1005C410(v39, 12.8);
          sub_100FB020(v39, 255);
          sub_1005C620((_BYTE *)(v39 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v39 + 116)));
          sub_100EC3F0((_DWORD *)v39, (int)sub_10246D70, 0.0, 0);
          v52 = *(float *)(dword_106B31C8 + 12) + 0.2;
          sub_100EC4A0((int *)v39, v52, 0);
          sub_100F9B80(v39);
          sub_100FA790(v39, 2.0);
        }
        if ( *v38 == -1 || off_1061BE18[4 * (*v38 & 0xFFF) + 2] != *v38 >> 12 )
          v42 = 0;
        else
          v42 = off_1061BE18[4 * (*v38 & 0xFFF) + 1];
        v43 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v42 + 576))(v42);
        v66 = *v43 - *(float *)&v59;
        v67 = v43[1] - *(float *)&v60;
        v68 = v43[2] - *(float *)&v61;
        off_10689714();
        if ( *v38 == -1 || off_1061BE18[4 * (*v38 & 0xFFF) + 2] != *v38 >> 12 )
          v44 = 0;
        else
          v44 = off_1061BE18[4 * (*v38 & 0xFFF) + 1];
        v45 = (*(int (__thiscall **)(int))(*(_DWORD *)v44 + 576))(v44);
        sub_10219BB0(v56);
        v56[0] = &CPVSFilter::`vftable';
        sub_1021A300(v56, v45);
        if ( *v38 == -1 || off_1061BE18[4 * (*v38 & 0xFFF) + 2] != *v38 >> 12 )
          v46 = 0;
        else
          v46 = off_1061BE18[4 * (*v38 & 0xFFF) + 1];
        v47 = *(int (__thiscall **)(int))(*(_DWORD *)v46 + 576);
        *(float *)&v75 = v66 * 4.0;
        *(float *)&v76 = v67 * 4.0;
        *(float *)&v77 = 4.0 * v68;
        v48 = (float *)v47(v46);
        *(float *)&v63 = *v48 - *(float *)&v75;
        v64 = v48[1] - *(float *)&v76;
        v65 = v48[2] - *(float *)&v77;
        v49 = (int)*off_1065C5EC;
        v50 = sub_1001F010((float *)&v69, -1.0, 1.0);
        (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, int *, float *, _DWORD))(v49 + 148))(
          off_1065C5EC,
          v56,
          0.0,
          &v63,
          v50,
          0);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v56);
      }
    }
  }
}
