int __thiscall sub_1004C4B0(char *this, char a2)
{
  int result; // eax
  float *v4; // eax
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  unsigned int v8; // eax
  int v9; // ebx
  int *v10; // ecx
  unsigned int v11; // eax
  char *v12; // ebx
  int v13; // eax
  float *v14; // eax
  int v15; // ebx
  float *v16; // edi
  float *v17; // eax
  double v18; // st7
  int v19; // eax
  float *v20; // eax
  double v21; // st6
  double v22; // st7
  float *v23; // edi
  float *v24; // eax
  int v25; // eax
  char v26; // cl
  double v27; // st7
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  unsigned int v31; // eax
  _BYTE v32[48]; // [esp+Ch] [ebp-124h] BYREF
  _BYTE v33[12]; // [esp+3Ch] [ebp-F4h] BYREF
  _BYTE v34[12]; // [esp+48h] [ebp-E8h] BYREF
  float v35[3]; // [esp+54h] [ebp-DCh] BYREF
  char v36[16]; // [esp+60h] [ebp-D0h] BYREF
  float v37; // [esp+70h] [ebp-C0h]
  float v38; // [esp+74h] [ebp-BCh]
  float v39; // [esp+78h] [ebp-B8h]
  float v40; // [esp+7Ch] [ebp-B4h]
  float v41; // [esp+80h] [ebp-B0h]
  float v42; // [esp+84h] [ebp-ACh]
  float v43; // [esp+88h] [ebp-A8h]
  float v44; // [esp+8Ch] [ebp-A4h]
  float v45; // [esp+90h] [ebp-A0h]
  float v46; // [esp+94h] [ebp-9Ch]
  float v47; // [esp+98h] [ebp-98h]
  int v48; // [esp+9Ch] [ebp-94h]
  int v49; // [esp+A0h] [ebp-90h]
  __int16 v50; // [esp+A4h] [ebp-8Ch]
  float v51; // [esp+A8h] [ebp-88h]
  float v52; // [esp+ACh] [ebp-84h]
  float v53; // [esp+B0h] [ebp-80h]
  float v54; // [esp+B4h] [ebp-7Ch]
  float v55; // [esp+B8h] [ebp-78h]
  float v56; // [esp+BCh] [ebp-74h]
  int v57; // [esp+C0h] [ebp-70h]
  char v58; // [esp+C4h] [ebp-6Ch]
  int v59; // [esp+C8h] [ebp-68h]
  int v60; // [esp+CCh] [ebp-64h]
  int v61; // [esp+D0h] [ebp-60h]
  int v62; // [esp+D4h] [ebp-5Ch]
  _BYTE v63[12]; // [esp+D8h] [ebp-58h] BYREF
  _BYTE v64[12]; // [esp+E4h] [ebp-4Ch] BYREF
  _BYTE v65[12]; // [esp+F0h] [ebp-40h] BYREF
  float v66; // [esp+FCh] [ebp-34h]
  float v67; // [esp+100h] [ebp-30h] BYREF
  float v68; // [esp+104h] [ebp-2Ch]
  float v69; // [esp+108h] [ebp-28h]
  float v70[3]; // [esp+10Ch] [ebp-24h] BYREF
  float v71; // [esp+118h] [ebp-18h]
  float v72; // [esp+11Ch] [ebp-14h]
  float v73; // [esp+120h] [ebp-10h]
  float v74; // [esp+124h] [ebp-Ch] BYREF
  float v75; // [esp+128h] [ebp-8h]
  float v76; // [esp+12Ch] [ebp-4h]

  if ( this[1200] )
  {
    v4 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 36))(this);
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v51 = 1024.0;
    v71 = v5;
    v52 = 2.0;
    v73 = v7;
    v8 = *((_DWORD *)this + 299);
    v53 = 16.0;
    v9 = 0;
    v54 = 0.00050000002;
    v72 = v6;
    v50 = 0;
    v55 = 0.0;
    v58 = 0;
    v56 = 0.0;
    v59 = -1;
    v60 = -1;
    v61 = -1;
    v62 = -1;
    v57 = 0;
    if ( v8 != -1
      && (v10 = (int *)((char *)off_103DCD74 + 16 * (v8 & 0xFFF) + 4), v11 = v8 >> 12, v10[1] == v11)
      && *v10 )
    {
      if ( this[1211] )
      {
        v12 = sub_10034AE0(this);
        v13 = sub_100422D0();
        if ( v13 )
        {
          v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 40))(v13);
          v67 = *v14;
          v68 = v14[1];
          v69 = v14[2];
          sub_101EE040(&v67, v33, v34, v63);
          sub_101EE440(v12, v32);
          sub_101ED8C0(v33, v32, v70);
          sub_101ED8C0(v34, v32, v65);
          sub_101ED8C0(v63, v32, v64);
          v15 = sub_1006BE10(this + 1196);
          v16 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 36))(this);
          v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 36))(v15);
          v74 = *v17 - *v16;
          v75 = v17[1] - v16[1];
          v18 = v17[2] - v16[2];
          v76 = v18;
          sub_10011670(&v74);
          v66 = v18;
          v19 = sub_1006BE10(this + 1196);
          v74 = v70[0] * v66;
          v75 = v70[1] * v66;
          v76 = v66 * v70[2];
          v20 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 36))(v19);
          v21 = v20[1] - v75;
          v22 = v20[2] - v76;
          v71 = *v20 - v74;
          v72 = v21;
          v73 = v22;
          off_103EDFEC();
          off_103EDFEC();
          off_103EDFEC();
        }
      }
      else
      {
        if ( v10[1] == v11 )
          v9 = *v10;
        v23 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 36))(this);
        v24 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 36))(v9);
        v67 = *v24 - *v23;
        v68 = v24[1] - v23[1];
        v69 = v24[2] - v23[2];
        sub_101EE190(&v67, v63);
        sub_101EE040(v63, v70, v65, v64);
      }
    }
    else
    {
      v25 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 40))(this);
      sub_101EE040(v25, v70, v65, v64);
    }
    v39 = *((float *)this + 301);
    v40 = *((float *)this + 301);
    v35[0] = v71;
    v35[1] = v72;
    v35[2] = v73;
    sub_101F0FA0(v70, v65, v64, v36);
    v41 = 0.0;
    v26 = this[1208];
    v42 = 100.0;
    v43 = 0.0;
    v44 = *((float *)this + 303);
    v45 = *((float *)this + 304);
    v46 = *((float *)this + 305);
    v47 = 0.0;
    v37 = *((float *)this + 307);
    v38 = *((float *)this + 308);
    v53 = *(float *)(dword_1040A354 + 44);
    v27 = *(float *)(dword_1040A39C + 44);
    LOBYTE(v50) = v26;
    v54 = v27;
    v28 = (*(int (__thiscall **)(int, _DWORD *, const char *, _DWORD))(*(_DWORD *)dword_1047C96C + 304))(
            dword_1047C96C,
            (_DWORD *)this + 309,
            "Other textures",
            0);
    v29 = *((unsigned __int16 *)this + 596);
    v30 = *((_DWORD *)this + 375);
    v48 = v28;
    v49 = *((_DWORD *)this + 374);
    v57 = v30;
    if ( (_WORD)v29 == 0xFFFF )
    {
      *((_WORD *)this + 596) = (*(int (__thiscall **)(void *, float *))(*(_DWORD *)off_103DD080 + 72))(
                                 off_103DD080,
                                 v35);
    }
    else
    {
      v31 = *((_DWORD *)this + 299);
      if ( v31 != -1
        && *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 299) & 0xFFF) + 2) == v31 >> 12
        && *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 299) & 0xFFF) + 1)
        || a2 == 1 )
      {
        (*(void (__thiscall **)(void *, int, float *))(*(_DWORD *)off_103DD080 + 76))(off_103DD080, v29, v35);
      }
    }
    if ( this[1209] )
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)off_103DD080 + 148))(
        *((unsigned __int16 *)this + 596),
        *((_DWORD *)this + 299));
    else
      (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)off_103DD080 + 148))(*((unsigned __int16 *)this + 596), -1);
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)off_103DD080 + 152))(
      *((unsigned __int16 *)this + 596),
      (unsigned __int8)this[1210]);
    return (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)off_103DD080 + 84))(
             off_103DD080,
             *((unsigned __int16 *)this + 596),
             1);
  }
  else
  {
    result = *((unsigned __int16 *)this + 596);
    if ( (_WORD)result != 0xFFFF )
    {
      result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_103DD080 + 80))(
                 off_103DD080,
                 *((unsigned __int16 *)this + 596));
      *((_WORD *)this + 596) = -1;
    }
  }
  return result;
}
