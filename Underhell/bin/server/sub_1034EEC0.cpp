bool __thiscall sub_1034EEC0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // edx
  unsigned int *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  char *v29; // eax
  _DWORD *v30; // eax
  const char *v31; // eax
  float *v32; // eax
  int *v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // edx
  unsigned int *v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // ebx
  int v45; // eax
  int *v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  unsigned int v52; // eax
  int v53; // edx
  float *v54; // eax
  double v55; // st6
  int (__thiscall *v56)(int); // edx
  double v57; // st7
  float *v58; // eax
  double v59; // st6
  double v60; // st7
  char v61; // bl
  unsigned int v62; // ecx
  int *v63; // eax
  unsigned int v64; // ecx
  _BYTE *v65; // eax
  _BYTE *v66; // edi
  void (__thiscall *v67)(int); // edx
  void (__noreturn ***v68)(); // eax
  bool result; // al
  _DWORD *v70; // [esp+24h] [ebp-114h]
  float *v71; // [esp+2Ch] [ebp-10Ch]
  float *v72; // [esp+2Ch] [ebp-10Ch]
  float *v73; // [esp+2Ch] [ebp-10Ch]
  int v74[16]; // [esp+3Ch] [ebp-FCh] BYREF
  _BYTE v75[64]; // [esp+7Ch] [ebp-BCh] BYREF
  int v76[16]; // [esp+BCh] [ebp-7Ch] BYREF
  int v77; // [esp+FCh] [ebp-3Ch] BYREF
  int v78; // [esp+100h] [ebp-38h] BYREF
  float v79[3]; // [esp+104h] [ebp-34h] BYREF
  void (__thiscall **v80)(int, _DWORD *, _DWORD *, _DWORD, _DWORD); // [esp+110h] [ebp-28h]
  float v81; // [esp+114h] [ebp-24h] BYREF
  float v82; // [esp+118h] [ebp-20h]
  float v83; // [esp+11Ch] [ebp-1Ch]
  float v84; // [esp+120h] [ebp-18h] BYREF
  float v85; // [esp+124h] [ebp-14h]
  float v86; // [esp+128h] [ebp-10h]
  int v87; // [esp+12Ch] [ebp-Ch] BYREF
  int v88; // [esp+130h] [ebp-8h]
  int v89; // [esp+134h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/combine_dropship.mdl");
  sub_100B6CC0(this, 128.0, 128.0, 256.0);
  v2 = *(_DWORD *)(this + 3988) + 3;
  *(_DWORD *)(this + 4024) = 0;
  *(_DWORD *)(this + 4116) = 0;
  *(_BYTE *)(this + 3985) = 0;
  *(_DWORD *)(this + 4132) = -1;
  *(_DWORD *)(this + 4136) = -1;
  *(_DWORD *)(this + 4140) = -1;
  *(_DWORD *)(this + 4144) = -1;
  *(_DWORD *)(this + 4148) = -1;
  switch ( v2 )
  {
    case 0:
      v42 = sub_101811E0("prop_dynamic_override", -1);
      if ( v42 )
        *(_DWORD *)(this + 4016) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v42 + 8))(v42);
      else
        *(_DWORD *)(this + 4016) = -1;
      if ( sub_1026A890((unsigned int *)(this + 4016)) )
      {
        v43 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v43 + 104))(v43, "models/buggy.mdl");
        v44 = *sub_10162BE0(&v77, "dropship_jeep");
        *(_DWORD *)(sub_1026A890((unsigned int *)(this + 4016)) + 260) = v44;
        v73 = (float *)sub_10019640((_DWORD *)this);
        v45 = sub_1026A890((unsigned int *)(this + 4016));
        sub_100E0D20(v45, v73);
        v46 = sub_1001F410((_DWORD *)this);
        v87 = *v46;
        v88 = v46[1];
        v89 = v46[2];
        sub_10425BC0(&v87, v75);
        sub_10425F30((int)v74, -90.0);
        sub_10425BE0(v75, v74, v76);
        sub_10421A90(v76, &v87);
        v47 = sub_1026A890((unsigned int *)(this + 4016));
        sub_100E0EA0(v47, (float *)&v87);
        v48 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v48 + 140))(v48, this, 0);
        v49 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v49 + 76))(v49, this);
        v50 = sub_1026A890((unsigned int *)(this + 4016));
        sub_10112C00(v50 + 320, 6);
        v51 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int))(*(_DWORD *)v51 + 96))(v51);
      }
      break;
    case 1:
      v29 = *(char **)(this + 4040);
      *(_DWORD *)(this + 3952) = 0;
      if ( !v29 )
        v29 = (char *)String;
      v30 = sub_1012BF20(&dword_1069E3E0, 0, v29, 0, 0, 0, 0);
      if ( v30 )
        *(_DWORD *)(this + 4016) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v30 + 8))(v30);
      else
        *(_DWORD *)(this + 4016) = -1;
      if ( sub_102DC130((unsigned int *)(this + 4016)) )
      {
        v31 = *(const char **)(this + 4040);
        if ( !v31 )
          v31 = String;
        Warning("Unable to find APC %s\n", v31);
      }
      else
      {
        v32 = (float *)sub_10019640((_DWORD *)this);
        v81 = *v32;
        v82 = v32[1];
        v83 = v32[2] - 25.0;
        v33 = sub_1001F410((_DWORD *)this);
        v87 = *v33;
        v88 = v33[1];
        v89 = v33[2];
        sub_10425BC0(&v87, v75);
        sub_10425F30((int)v76, -90.0);
        sub_10425BE0(v75, v76, v74);
        sub_10421A90(v74, &v87);
        v34 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int, float *, int *, _DWORD))(*(_DWORD *)v34 + 416))(v34, &v81, &v87, 0);
        *(_DWORD *)(this + 4024) = *(unsigned __int8 *)(sub_1026A890((unsigned int *)(this + 4016)) + 306);
        v35 = *(_DWORD *)(sub_1026A890((unsigned int *)(this + 4016)) + 424);
        if ( v35 )
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v35 + 268))(
            v35,
            10000.0,
            10000.0,
            0,
            0);
        v36 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v36 + 140))(v36, this, 0);
        v37 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v37 + 76))(v37, this);
        v38 = sub_1026A890((unsigned int *)(this + 4016));
        sub_100E0970(v38, v39, 7, 0);
        v40 = (unsigned int *)sub_1026A890((unsigned int *)(this + 4016));
        sub_101C73D0(v40, 0);
        v41 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v41 + 620))(v41, 0.0);
      }
      break;
    case 2:
      v22 = sub_101811E0("npc_strider", -1);
      if ( v22 )
        *(_DWORD *)(this + 4016) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v22 + 8))(v22);
      else
        *(_DWORD *)(this + 4016) = -1;
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v79[0] = *(float *)(this + 580);
      v79[1] = *(float *)(this + 584);
      v79[2] = *(float *)(this + 588) - 100.0;
      v23 = sub_1026A890((unsigned int *)(this + 4016));
      sub_100E0D20(v23, v79);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v24 = sub_1026A890((unsigned int *)(this + 4016));
      sub_100E0EA0(v24, (float *)(this + 704));
      v25 = sub_1026A890((unsigned int *)(this + 4016));
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v25 + 140))(v25, this, 0);
      v26 = sub_1026A890((unsigned int *)(this + 4016));
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v26 + 76))(v26, this);
      v27 = sub_1026A890((unsigned int *)(this + 4016));
      (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 96))(v27);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v84 = *(float *)(this + 580);
      v85 = *(float *)(this + 584);
      v86 = *(float *)(this + 588) - 100.0;
      v28 = sub_1026A890((unsigned int *)(this + 4016));
      sub_100E0D20(v28, &v84);
      break;
    case 4:
      v3 = sub_101811E0("prop_dropship_container", -1);
      if ( v3 )
        *(_DWORD *)(this + 4016) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
      else
        *(_DWORD *)(this + 4016) = -1;
      if ( sub_1026A890((unsigned int *)(this + 4016)) )
      {
        v4 = *sub_10162BE0(&v78, "dropship_container");
        *(_DWORD *)(sub_1026A890((unsigned int *)(this + 4016)) + 260) = v4;
        v71 = (float *)sub_10019640((_DWORD *)this);
        v5 = sub_1026A890((unsigned int *)(this + 4016));
        sub_100E0D20(v5, v71);
        v72 = (float *)sub_1001F410((_DWORD *)this);
        v6 = sub_1026A890((unsigned int *)(this + 4016));
        sub_100E0EA0(v6, v72);
        v7 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 140))(v7, this, 0);
        v8 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 76))(v8, this);
        v9 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9);
        v10 = *(_DWORD *)(sub_1026A890((unsigned int *)(this + 4016)) + 424);
        if ( v10 )
        {
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v10 + 268))(
            v10,
            10000.0,
            10000.0,
            0,
            0);
          v80 = (void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v10 + 272);
          v11 = (_DWORD *)sub_1026A890((unsigned int *)(this + 4016));
          v70 = sub_1001F410(v11);
          v12 = (_DWORD *)sub_1026A890((unsigned int *)(this + 4016));
          v13 = sub_10019640(v12);
          (*v80)(v10, v13, v70, 0, 0.0);
        }
        v14 = sub_1026A890((unsigned int *)(this + 4016));
        sub_100E0970(v14, v15, 7, 0);
        v16 = (unsigned int *)sub_1026A890((unsigned int *)(this + 4016));
        sub_101C73D0(v16, 0);
        v17 = sub_1026A890((unsigned int *)(this + 4016));
        *(_DWORD *)(this + 4144) = sub_100BEF30(v17, "deploy_landpoint");
        v18 = sub_1026A890((unsigned int *)(this + 4016));
        *(_DWORD *)(this + 4148) = sub_100BEF30(v18, "Deploy_Start");
        v19 = sub_1026A890((unsigned int *)(this + 4016));
        *(_DWORD *)(this + 4132) = sub_100BEF30(v19, "muzzle");
        v20 = sub_1026A890((unsigned int *)(this + 4016));
        *(_DWORD *)(this + 4136) = sub_100BEF30(v20, "gun_base");
        v21 = sub_1026A890((unsigned int *)(this + 4016));
        *(_DWORD *)(this + 4140) = sub_100BEF30(v21, "gun_ref");
      }
      break;
    default:
      break;
  }
  v52 = *(_DWORD *)(this + 4016);
  if ( v52 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] == v52 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1] )
  {
    v81 = 40.0;
    v82 = 40.0;
    v83 = 40.0;
    v84 = -40.0;
    v85 = -40.0;
    v86 = -60.0;
    sub_1025F360((_DWORD *)this, (int)&v84, (int)&v81);
    v53 = dword_106E66F4;
  }
  else
  {
    v81 = 40.0;
    v82 = 40.0;
    v83 = 40.0;
    v84 = -40.0;
    v85 = -40.0;
    v86 = 0.0;
    sub_1025F360((_DWORD *)this, (int)&v84, (int)&v81);
    v53 = dword_106E66F8;
  }
  sub_10039F40((int *)this, v53);
  v54 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320);
  v55 = v54[1] - 300.0;
  v56 = *(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 8);
  v57 = v54[2] - 200.0;
  *(float *)(this + 3876) = *v54 - 300.0;
  *(float *)(this + 3880) = v55;
  *(float *)(this + 3884) = v57;
  v58 = (float *)v56(this + 320);
  v59 = v58[1] + 300.0;
  v60 = v58[2] + 200.0;
  *(float *)(this + 3888) = *v58 + 300.0;
  *(float *)(this + 3892) = v59;
  *(float *)(this + 3896) = v60;
  sub_102B4360(this);
  v61 = *(_BYTE *)(this + 4000) != 0 ? 0 : 2;
  if ( v61 != *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = v61;
  }
  if ( *(_BYTE *)(this + 4000) )
  {
    v62 = *(_DWORD *)(this + 4016);
    if ( v62 != -1 )
    {
      v63 = &off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
      v64 = v62 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] == v64 )
      {
        if ( *v63 )
        {
          v65 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] == v64 ? (_BYTE *)*v63 : 0;
          v66 = v65 + 225;
          if ( v65[225] )
          {
            (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v65 + 480))(v65, v65 + 225);
            *v66 = 0;
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(this + 220) != 100 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 100;
  }
  v67 = *(void (__thiscall **)(int))(*(_DWORD *)this + 800);
  *(float *)(this + 1684) = 0.5;
  *(_DWORD *)(this + 3980) = 15;
  v67(this);
  sub_1034D6A0();
  *(float *)(this + 3832) = 1056.0;
  *(float *)(this + 3836) = 250.0;
  *(_DWORD *)(this + 4020) = -1;
  *(_DWORD *)(this + 4032) = -1;
  sub_100457E0((_DWORD *)this, 1);
  if ( *(_DWORD *)(this + 3960) )
  {
    if ( *(_DWORD *)(this + 4160) )
    {
      v68 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v68)[12])(
        v68,
        *(_DWORD *)(this + 4160),
        0.0,
        0.0);
    }
    *(_DWORD *)(this + 3960) = 0;
  }
  result = (*(_DWORD *)(this + 248) & 0x8000) != 0;
  *(_BYTE *)(this + 4028) = result;
  return result;
}
