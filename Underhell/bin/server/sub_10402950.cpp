void __thiscall sub_10402950(_DWORD *this)
{
  int v1; // ebx
  int v2; // eax
  int v3; // eax
  int v4; // esi
  bool v5; // al
  float *v6; // eax
  char *v7; // esi
  int v8; // eax
  void *v9; // edi
  int v10; // ebx
  int v11; // edi
  double v12; // st7
  unsigned int v13; // eax
  _DWORD *v14; // edi
  int v15; // ebx
  int v16; // esi
  int v17; // eax
  int v18; // esi
  double (__thiscall *v19)(int, _DWORD, _DWORD); // edx
  double v20; // st7
  _DWORD *v21; // ebx
  int v22; // edi
  int *v23; // eax
  int v24; // ecx
  int v25; // esi
  int v26; // eax
  int v27; // esi
  double v28; // st7
  int v29; // esi
  int v30; // eax
  double v31; // st7
  int v32; // esi
  _DWORD *v33; // eax
  int v34; // eax
  int v35; // ebx
  int *v36; // ecx
  _DWORD *v37; // edi
  unsigned int v38; // eax
  int *v39; // ecx
  unsigned int v40; // eax
  int v41; // ecx
  double v42; // st7
  unsigned int v43; // ecx
  int *v44; // eax
  unsigned int v45; // ecx
  int v46; // esi
  int v47; // eax
  unsigned int v48; // eax
  int v49; // esi
  double v50; // st7
  int v51; // esi
  int v52; // eax
  unsigned int v53; // eax
  double v54; // st7
  unsigned int v55; // ecx
  int *v56; // eax
  unsigned int v57; // ecx
  int v58; // esi
  int v59; // eax
  unsigned int v60; // eax
  int v61; // esi
  double v62; // st7
  int v63; // esi
  int v64; // eax
  unsigned int v65; // eax
  double v66; // st7
  int v67[5]; // [esp+34h] [ebp-68h] BYREF
  float v68; // [esp+48h] [ebp-54h]
  int v69; // [esp+4Ch] [ebp-50h]
  int v70; // [esp+50h] [ebp-4Ch]
  int v71; // [esp+54h] [ebp-48h]
  float v72[5]; // [esp+64h] [ebp-38h] BYREF
  float v73[3]; // [esp+78h] [ebp-24h] BYREF
  float v74[3]; // [esp+84h] [ebp-18h] BYREF
  int v75; // [esp+90h] [ebp-Ch]
  _DWORD *v76; // [esp+94h] [ebp-8h]
  float v77; // [esp+98h] [ebp-4h] BYREF

  v1 = (int)this;
  v2 = this[48] >> 5;
  v76 = this;
  if ( (v2 & 1) != 0 )
  {
    sub_10401640(this, *(float *)&this, 1);
    return;
  }
  v3 = sub_100D1940(this);
  v4 = v3;
  v75 = v3;
  if ( v3 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
  {
    if ( *(_BYTE *)(v1 + 9832) == (*(_BYTE *)(dword_106B3CDC + 12) == 1)
      || (sub_103FB4F0((_DWORD *)v1),
          sub_103FF610((_DWORD *)v1, *(float *)&v1),
          v5 = *(_BYTE *)(dword_106B3CDC + 12) == 1,
          (*(_BYTE *)(v1 + 9832) = v5) != 0) )
    {
LABEL_12:
      if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
        v12 = 1.5;
      else
        v12 = 1.0;
      v13 = *(_DWORD *)(v1 + 1472);
      v77 = v12;
      v14 = (_DWORD *)(v1 + 1472);
      if ( v13 != -1
        && off_1061BE18[4 * (v13 & 0xFFF) + 2] == v13 >> 12
        && off_1061BE18[4 * (v13 & 0xFFF) + 1]
        && sub_103E0CF0((unsigned int *)(v1 + 1476), 0) )
      {
        v15 = 2;
        do
        {
          if ( *v14 == -1 || off_1061BE18[4 * (*v14 & 0xFFF) + 2] != *v14 >> 12 )
            v16 = 0;
          else
            v16 = off_1061BE18[4 * (*v14 & 0xFFF) + 1];
          *(float *)&v71 = 0.0;
          v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 200, 255);
          sub_10242820(v16, v17, *(float *)&v71);
          if ( *v14 == -1 || off_1061BE18[4 * (*v14 & 0xFFF) + 2] != *v14 >> 12 )
            v18 = 0;
          else
            v18 = off_1061BE18[4 * (*v14 & 0xFFF) + 1];
          v19 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
          *(float *)&v71 = 0.0;
          v20 = v19(dword_106B31E4, 0.1, 0.15000001);
          *(float *)&v70 = v20 * v77;
          sub_102428B0(v18, *(float *)&v70, *(float *)&v71);
          ++v14;
          --v15;
        }
        while ( v15 );
        v1 = (int)v76;
      }
      v21 = (_DWORD *)(v1 + 1448);
      v22 = 6;
      do
      {
        if ( *v21 != -1 )
        {
          v23 = &off_1061BE18[4 * (*v21 & 0xFFF) + 1];
          v24 = *v21 >> 12;
          if ( off_1061BE18[4 * (*v21 & 0xFFF) + 2] == v24 )
          {
            if ( *v23 )
            {
              if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
              {
                if ( off_1061BE18[4 * (*v21 & 0xFFF) + 2] == v24 )
                  v25 = *v23;
                else
                  v25 = 0;
                *(float *)&v71 = 0.0;
                v26 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 32, 48);
                sub_10242820(v25, v26, *(float *)&v71);
                if ( *v21 == -1 || off_1061BE18[4 * (*v21 & 0xFFF) + 2] != *v21 >> 12 )
                  v27 = 0;
                else
                  v27 = off_1061BE18[4 * (*v21 & 0xFFF) + 1];
                *(float *)&v71 = 0.0;
                *(float *)&v70 = 0.2;
                v28 = 0.15000001;
              }
              else
              {
                if ( off_1061BE18[4 * (*v21 & 0xFFF) + 2] == v24 )
                  v29 = *v23;
                else
                  v29 = 0;
                *(float *)&v71 = 0.0;
                v30 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 16, 24);
                sub_10242820(v29, v30, *(float *)&v71);
                if ( *v21 == -1 || off_1061BE18[4 * (*v21 & 0xFFF) + 2] != *v21 >> 12 )
                  v27 = 0;
                else
                  v27 = off_1061BE18[4 * (*v21 & 0xFFF) + 1];
                *(float *)&v71 = 0.0;
                *(float *)&v70 = 0.34999999;
                v28 = 0.30000001;
              }
              *(float *)&v69 = v28;
              v31 = ((double (__thiscall *)(int, int, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                      dword_106B31E4,
                      v69,
                      v70);
              *(float *)&v70 = v31 * v77;
              sub_102428B0(v27, *(float *)&v70, *(float *)&v71);
            }
          }
        }
        ++v21;
        --v22;
      }
      while ( v22 );
      if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
      {
        if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 100)
          || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 320))(dword_106B31D0) )
        {
          goto LABEL_72;
        }
        v32 = sub_100FB5C0("sprites/lgtning_noz.vmt", 1.0);
        v33 = (_DWORD *)sub_101E7EA0((_DWORD *)v75, 0);
        sub_100FAE40(v32, v33, v33);
        if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
        {
          v34 = sub_100BEF30((int)v76, "fork1t");
          v35 = 0;
        }
        else
        {
          v34 = sub_100BEF30((int)v76, "fork2t");
          v35 = 1;
        }
        sub_1024A060(v32, v34);
        sub_1005BC90(v32, 1);
        *(float *)&v71 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                           dword_106B31E4,
                           8.0,
                           16.0);
        sub_100FA790(v32, *(float *)&v71);
        sub_1005C620((_BYTE *)(v32 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v32 + 116)));
        sub_100FA830(v32, 25);
        if ( *(_BYTE *)(v32 + 119) != 0x80 )
        {
          if ( *(_BYTE *)(v32 + 84) )
          {
            *(_BYTE *)(v32 + 88) |= 1u;
          }
          else
          {
            v36 = *(int **)(v32 + 24);
            if ( v36 )
              sub_100194B0(v36, 116);
          }
          *(_BYTE *)(v32 + 119) = 0x80;
        }
        sub_1005C3A0(v32, 1.0);
        *(float *)&v71 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                           dword_106B31E4,
                           2.0,
                           8.0);
        sub_1005C410(v32, *(float *)&v71);
        *(float *)&v75 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                           dword_106B31E4,
                           0.2,
                           0.40000001);
        sub_100EC3F0((_DWORD *)v32, (int)sub_10246D70, 0.0, 0);
        *(float *)&v70 = *(float *)(dword_106B31C8 + 12) + *(float *)&v75;
        sub_100EC4A0((int *)v32, *(float *)&v70, 0);
        v37 = v76;
        v38 = v76[v35 + 368];
        if ( v38 == -1 )
        {
LABEL_72:
          v37 = v76;
        }
        else
        {
          v39 = &off_1061BE18[4 * (v76[v35 + 368] & 0xFFF) + 1];
          v40 = v38 >> 12;
          if ( off_1061BE18[4 * (v76[v35 + 368] & 0xFFF) + 2] == v40 && *v39 )
          {
            if ( off_1061BE18[4 * (v76[v35 + 368] & 0xFFF) + 2] == v40 )
              v41 = *v39;
            else
              v41 = 0;
            sub_10242BA0(v41);
            v42 = *(float *)(dword_106B31C8 + 12);
            *(float *)&v71 = 0.0;
            *(float *)&v37[v35 + 370] = v42 + *(float *)&v75;
            sub_1023C380(v37, (int)"Weapon_MegaPhysCannon.ChargeZap", 0.0, v71);
          }
        }
        v43 = v37[372];
        if ( v43 != -1 )
        {
          v44 = &off_1061BE18[4 * (v37[372] & 0xFFF) + 1];
          v45 = v43 >> 12;
          if ( off_1061BE18[4 * (v37[372] & 0xFFF) + 2] == v45 )
          {
            if ( *v44 )
            {
              if ( v37[2457] == 3 )
              {
                if ( off_1061BE18[4 * (v37[372] & 0xFFF) + 2] == v45 )
                  v46 = *v44;
                else
                  v46 = 0;
                *(float *)&v71 = 0.0;
                v47 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 32, 64);
                sub_10242820(v46, v47, *(float *)&v71);
                v48 = v37[372];
                if ( v48 == -1 || off_1061BE18[4 * (v37[372] & 0xFFF) + 2] != v48 >> 12 )
                  v49 = 0;
                else
                  v49 = off_1061BE18[4 * (v37[372] & 0xFFF) + 1];
                *(float *)&v71 = 0.0;
                *(float *)&v70 = 0.25;
                v50 = 0.2;
              }
              else
              {
                if ( off_1061BE18[4 * (v37[372] & 0xFFF) + 2] == v45 )
                  v51 = *v44;
                else
                  v51 = 0;
                *(float *)&v71 = 0.0;
                v52 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 32, 64);
                sub_10242820(v51, v52, *(float *)&v71);
                v53 = v37[372];
                if ( v53 == -1 || off_1061BE18[4 * (v37[372] & 0xFFF) + 2] != v53 >> 12 )
                  v49 = 0;
                else
                  v49 = off_1061BE18[4 * (v37[372] & 0xFFF) + 1];
                *(float *)&v71 = 0.0;
                *(float *)&v70 = 0.15000001;
                v50 = 0.125;
              }
              *(float *)&v69 = v50;
              v54 = ((double (__thiscall *)(int, int, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                      dword_106B31E4,
                      v69,
                      v70);
              *(float *)&v70 = v54 * v77;
              sub_102428B0(v49, *(float *)&v70, *(float *)&v71);
            }
          }
        }
        v55 = v37[373];
        if ( v55 != -1 )
        {
          v56 = &off_1061BE18[4 * (v37[373] & 0xFFF) + 1];
          v57 = v55 >> 12;
          if ( off_1061BE18[4 * (v37[373] & 0xFFF) + 2] == v57 )
          {
            if ( *v56 )
            {
              if ( v37[2457] == 3 )
              {
                if ( off_1061BE18[4 * (v37[373] & 0xFFF) + 2] == v57 )
                  v58 = *v56;
                else
                  v58 = 0;
                *(float *)&v71 = 0.0;
                v59 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 125, 150);
                sub_10242820(v58, v59, *(float *)&v71);
                v60 = v37[373];
                if ( v60 == -1 || off_1061BE18[4 * (v37[373] & 0xFFF) + 2] != v60 >> 12 )
                  v61 = 0;
                else
                  v61 = off_1061BE18[4 * (v37[373] & 0xFFF) + 1];
                *(float *)&v71 = 0.0;
                *(float *)&v70 = 0.15000001;
                v62 = 0.125;
              }
              else
              {
                if ( off_1061BE18[4 * (v37[373] & 0xFFF) + 2] == v57 )
                  v63 = *v56;
                else
                  v63 = 0;
                *(float *)&v71 = 0.0;
                v64 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 32, 64);
                sub_10242820(v63, v64, *(float *)&v71);
                v65 = v37[373];
                if ( v65 == -1 || off_1061BE18[4 * (v37[373] & 0xFFF) + 2] != v65 >> 12 )
                  v61 = 0;
                else
                  v61 = off_1061BE18[4 * (v37[373] & 0xFFF) + 1];
                *(float *)&v71 = 0.0;
                *(float *)&v70 = 0.15000001;
                v62 = 0.075000003;
              }
              *(float *)&v69 = v62;
              v66 = ((double (__thiscall *)(int, int, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                      dword_106B31E4,
                      v69,
                      v70);
              *(float *)&v70 = v66 * v77;
              sub_102428B0(v61, *(float *)&v70, *(float *)&v71);
            }
          }
        }
      }
      return;
    }
    sub_1023C380((_DWORD *)v1, (int)"Weapon_Physgun.Off", 0.0, 0);
    sub_10401510(v1, *(float *)&v1);
    sub_103FEC80(*(float *)&v1, 1, 0);
    sub_10401640((_DWORD *)v1, *(float *)&v1, 1);
    v6 = (float *)__RTDynamicCast(
                    v4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
                    (int)&CHL2_Player `RTTI Type Descriptor',
                    0);
    if ( v6 )
      sub_103F97E0(v6);
    v7 = (char *)sub_101811E0("env_citadel_energy_core", -1);
    if ( v7 )
    {
      v8 = sub_101E7EA0((_DWORD *)v75, 0);
      v9 = (void *)v8;
      if ( v8 )
      {
        v10 = sub_100BEF30(v8, "muzzle");
        sub_100BCCA0(v9, v10, (int)v74, (int)v73);
        sub_100E0D20((int)v7, v74);
        sub_100E0EA0((int)v7, v73);
        sub_10260750(v7);
        (*(void (__thiscall **)(char *))(*(_DWORD *)v7 + 136))(v7);
        (*(void (__thiscall **)(char *, void *, int))(*(_DWORD *)v7 + 140))(v7, v9, v10);
        sub_1012A3F0((int)v7, 2.5);
        v11 = v75;
        v72[0] = 1.0;
        v72[3] = NAN;
        LODWORD(v72[4]) = 1;
        sub_1010C7F0((float *)dword_10614CA8, (int)v7, "StartDischarge", 0.0, v75, v75, 0);
        *(float *)&v71 = 0.0;
        v70 = v11;
        v69 = v11;
        v68 = 1.0;
        sub_10023360(v67, (int)v72);
        sub_1010C6E0(
          (float *)dword_10614CA8,
          (int)v7,
          "Stop",
          v67[0],
          v67[1],
          v67[2],
          v67[3],
          v67[4],
          v68,
          v69,
          v70,
          v71);
        sub_100EC3F0(v7, (int)sub_10246D70, 0.0, 0);
        *(float *)&v70 = *(float *)(dword_106B31C8 + 12) + 10.0;
        sub_100EC4A0((int *)v7, *(float *)&v70, 0);
        v77 = 0.0;
        sub_10031670(v76 + 212, &v77);
        v1 = (int)v76;
      }
      goto LABEL_12;
    }
  }
}
