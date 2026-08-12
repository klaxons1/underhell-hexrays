char __thiscall sub_102476F0(int *this, char *a2, int a3)
{
  int *v3; // ebx
  int v4; // edi
  int (__thiscall **v5)(int, int); // esi
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  char *v10; // esi
  char *v11; // edi
  int v12; // ebp
  int v13; // eax
  int v14; // edx
  int v15; // esi
  char *v16; // edi
  const char *v17; // eax
  int v19; // ebp
  int v20; // eax
  int *v21; // esi
  int v22; // ecx
  int v23; // eax
  bool v24; // zf
  _DWORD *v25; // esi
  int v26; // esi
  char *v27; // edi
  char *v28; // edi
  __int16 v29; // ax
  float *v30; // edi
  char *v31; // eax
  int v32; // ecx
  int v33; // edx
  __int16 v34; // ax
  int v35; // ebx
  int (__thiscall **v36)(int, int); // ebp
  int v37; // eax
  int v38; // ebx
  int (__thiscall **v39)(int, int); // edi
  int v40; // eax
  int v41; // ebp
  int (__thiscall **v42)(int, int); // ebx
  int v43; // eax
  char *v44; // edi
  char *v45; // edi
  double v46; // st7
  double v47; // st7
  char *v48; // edi
  char *v49; // edi
  char *v50; // edi
  char *v51; // edi
  char *v52; // edi
  char *v53; // edi
  char *v54; // edi
  char *v55; // edi
  char *v56; // edi
  char *v57; // eax
  __int16 *v58; // ecx
  char *v59; // edi
  char *v60; // edi
  char *v61; // esi
  int v62; // eax
  _WORD *v63; // edx
  const char *v64; // eax
  int v65; // [esp-4h] [ebp-290h]
  int v66; // [esp+10h] [ebp-27Ch]
  bool v67; // [esp+17h] [ebp-275h]
  int v69; // [esp+1Ch] [ebp-270h]
  int v70; // [esp+24h] [ebp-268h]
  _BYTE v71[4]; // [esp+28h] [ebp-264h] BYREF
  int v72; // [esp+2Ch] [ebp-260h]
  int v73; // [esp+30h] [ebp-25Ch]
  int v74; // [esp+34h] [ebp-258h]
  int v75; // [esp+3Ah] [ebp-252h] BYREF
  int v76; // [esp+3Eh] [ebp-24Eh] BYREF
  int v77; // [esp+42h] [ebp-24Ah] BYREF
  __int16 v78; // [esp+46h] [ebp-246h] BYREF
  int v79; // [esp+48h] [ebp-244h] BYREF
  int v80; // [esp+4Ch] [ebp-240h] BYREF
  int v81; // [esp+50h] [ebp-23Ch]
  int v82; // [esp+56h] [ebp-236h] BYREF
  __int16 v83[3]; // [esp+5Ah] [ebp-232h] BYREF
  int v84; // [esp+60h] [ebp-22Ch] BYREF
  int v85; // [esp+64h] [ebp-228h]
  int v86; // [esp+68h] [ebp-224h] BYREF
  char String[512]; // [esp+6Ch] [ebp-220h] BYREF
  char v88[32]; // [esp+26Ch] [ebp-20h] BYREF
  char *v89; // [esp+290h] [ebp+4h]

  v3 = this;
  v4 = dword_1047CA7C;
  v5 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32);
  v6 = (*(int (__fastcall **)(int *))(*this + 80))(this);
  v7 = (*v5)(v4, v6);
  v8 = v3[80];
  v9 = v3[81];
  v81 = v7;
  v72 = v8;
  v73 = v9;
  v10 = sub_1009D1F0(a2, String, 0);
  if ( !String[0] )
    return 1;
  while ( 2 )
  {
    v67 = 1;
    if ( _stricmp(String, "event") )
    {
      Warning("Couldn't parse script file: expected 'event', found '%s'\n", String);
      return 0;
    }
    v11 = sub_1009D1F0(v10, String, 0);
    if ( !strlen(String) )
    {
      Warning("Couldn't parse script file: expected <event name>, found nothing\n");
      return 0;
    }
    v12 = (unsigned __int16)*sub_10230F20(dword_1047CCCC, &v78, String);
    v65 = v3[56];
    v85 = v12;
    v13 = sub_10247330(v3 + 53, v65);
    v14 = v3[53];
    v74 = v13;
    *(float *)(v14 + 28 * v13 + 4) = 0.0;
    v15 = v14 + 28 * v13;
    v69 = v15;
    *(_WORD *)v15 = v12;
    v16 = sub_1009D1F0(v11, String, 0);
    if ( sub_10227FA0(String, "[$") )
    {
      v67 = sub_10229CE0(String);
      v16 = sub_1009D1F0(v16, String, 0);
    }
    if ( _stricmp(String, "{") )
    {
      v17 = sub_10230460(dword_1047CCCC, *(_WORD *)v15);
      Warning("Couldn't parse script sequence '%s': expected '{', found '%s'\n", v17, String);
      return 0;
    }
    while ( String[0] )
    {
      v16 = sub_1009D1F0(v16, String, 0);
      if ( String[0] == 125 )
        break;
      v19 = *(_DWORD *)(v15 + 20);
      v20 = *(_DWORD *)(v15 + 12);
      v21 = (int *)(v15 + 8);
      v70 = v19;
      if ( v19 + 1 > v20 )
        sub_101EADE0(v21, v19 - v20 + 1);
      ++v21[3];
      v22 = *v21;
      v23 = v21[3] - v19 - 1;
      v24 = v21[3] - v19 == 1;
      v21[4] = *v21;
      if ( v23 >= 0 && !v24 )
        memcpy((void *)(48 * v19 + v22 + 48), (const void *)(48 * v19 + v22), 48 * v23);
      v25 = (_DWORD *)(48 * v19 + *v21);
      *(_DWORD *)&v83[1] = 48 * v19;
      memset(v25, 0, 0x30u);
      if ( !_stricmp(String, "animate") )
      {
        *v25 = 0;
        v26 = (int)(v25 + 1);
        v27 = sub_1009D1F0(v16, String, 0);
        *(_WORD *)v26 = *sub_10230F20(dword_1047CCCC, (__int16 *)&v86, String);
        v28 = sub_1009D1F0(v27, String, 0);
        *(_WORD *)(v26 + 2) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v80 + 1, String);
        v89 = sub_1009D1F0(v28, String, 0);
        v29 = *(_WORD *)(v26 + 2);
        v30 = (float *)(v26 + 4);
        if ( v29 == *((_WORD *)v3 + 136) )
        {
          sub_10244380(v3, v26, (float *)(v26 + 4), String, v72);
          v31 = sub_1009D1F0(String, v88, 0);
          sub_1009D1F0(v31, v88, 0);
          sub_10244380(v3, v26, (float *)(v26 + 8), v88, v73);
        }
        else if ( v29 == *((_WORD *)v3 + 140) )
        {
          sub_10244380(v3, v26, (float *)(v26 + 4), String, v72);
        }
        else if ( v29 == *((_WORD *)v3 + 141) )
        {
          sub_10244380(v3, v26, (float *)(v26 + 4), String, v73);
        }
        else
        {
          if ( !sscanf(String, "%f %f %f %f", v26 + 4, v26 + 8, v26 + 12, v26 + 16) )
          {
            (*(void (__thiscall **)(int, _BYTE *, char *, _DWORD))(*(_DWORD *)v81 + 20))(v81, v71, String, 0);
            v32 = v71[3];
            v33 = v71[1];
            *v30 = (float)v71[0];
            v66 = v71[2];
            *(float *)(v26 + 8) = (float)v33;
            *(float *)(v26 + 12) = (float)v66;
            *(float *)(v26 + 16) = (float)v32;
          }
          v3 = this;
        }
        v34 = *(_WORD *)(v26 + 2);
        if ( v34 == *((_WORD *)v3 + 137) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 84))(v3) )
          {
            v35 = dword_1047CA7C;
            v36 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 52);
            v37 = (*(int (__thiscall **)(int *, int))(*this + 80))(this, (int)*v30);
            *v30 = (float)(*v36)(v35, v37);
            v38 = dword_1047CA7C;
            v39 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 52);
            v40 = (*(int (__thiscall **)(int *, int))(*this + 80))(this, (int)*(float *)(v26 + 8));
            *(float *)(v26 + 8) = (float)(*v39)(v38, v40);
            goto LABEL_32;
          }
        }
        else if ( (v34 == *((_WORD *)v3 + 142) || v34 == *((_WORD *)v3 + 143))
               && (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 84))(v3) )
        {
          v41 = dword_1047CA7C;
          v42 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 52);
          v43 = (*(int (__thiscall **)(int *, int))(*this + 80))(this, (int)*v30);
          *v30 = (float)(*v42)(v41, v43);
LABEL_32:
          v3 = this;
          v19 = v70;
        }
        v44 = sub_1009D1F0(v89, String, 0);
        if ( !_stricmp(String, "Accel") )
        {
          *(_DWORD *)(v26 + 20) = 1;
          goto LABEL_45;
        }
        if ( !_stricmp(String, "Deaccel") )
        {
          *(_DWORD *)(v26 + 20) = 2;
          goto LABEL_45;
        }
        if ( !_stricmp(String, "Spline") )
        {
          *(_DWORD *)(v26 + 20) = 5;
          goto LABEL_45;
        }
        if ( !_stricmp(String, "Pulse") )
        {
          *(_DWORD *)(v26 + 20) = 3;
          goto LABEL_43;
        }
        if ( !_stricmp(String, "Flicker") )
        {
          *(_DWORD *)(v26 + 20) = 4;
LABEL_43:
          v44 = sub_1009D1F0(v44, String, 0);
          *(float *)(v26 + 24) = atof(String);
        }
        else
        {
          *(_DWORD *)(v26 + 20) = 0;
        }
LABEL_45:
        v45 = sub_1009D1F0(v44, String, 0);
        *(float *)(v26 + 28) = atof(String);
        v16 = sub_1009D1F0(v45, String, 0);
        v46 = atof(String);
        *(float *)(v26 + 32) = v46;
        v47 = v46 + *(float *)(v26 + 28);
        if ( v47 > *(float *)(v69 + 4) )
          *(float *)(v69 + 4) = v47;
        goto LABEL_63;
      }
      if ( !_stricmp(String, "runevent") )
      {
        *v25 = 1;
        v48 = sub_1009D1F0(v16, String, 0);
        *((_WORD *)v25 + 2) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v84 + 1, String);
        v16 = sub_1009D1F0(v48, String, 0);
        *((float *)v25 + 3) = atof(String);
        goto LABEL_63;
      }
      if ( !_stricmp(String, "stopevent") )
      {
        *v25 = 2;
        v49 = sub_1009D1F0(v16, String, 0);
        *((_WORD *)v25 + 2) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v75 + 1, String);
      }
      else
      {
        if ( !_stricmp(String, "StopPanelAnimations") )
        {
          *v25 = 4;
          v50 = sub_1009D1F0(v16, String, 0);
          *((_WORD *)v25 + 2) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v76 + 1, String);
          v16 = sub_1009D1F0(v50, String, 0);
          *((float *)v25 + 3) = atof(String);
          goto LABEL_63;
        }
        if ( !_stricmp(String, "stopanimation") )
        {
          *v25 = 3;
          v51 = sub_1009D1F0(v16, String, 0);
          *((_WORD *)v25 + 2) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v77 + 1, String);
          v49 = sub_1009D1F0(v51, String, 0);
          *((_WORD *)v25 + 3) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v79, String);
        }
        else
        {
          if ( !_stricmp(String, "SetFont") )
          {
            *v25 = 5;
            v52 = sub_1009D1F0(v16, String, 0);
            *((_WORD *)v25 + 2) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v80, String);
            v53 = sub_1009D1F0(v52, String, 0);
            *((_WORD *)v25 + 3) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v82 + 1, String);
            v54 = sub_1009D1F0(v53, String, 0);
            *((_WORD *)v25 + 4) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v76, String);
            v16 = sub_1009D1F0(v54, String, 0);
            *((float *)v25 + 3) = atof(String);
            goto LABEL_63;
          }
          if ( !_stricmp(String, "SetTexture") )
          {
            *v25 = 6;
            v55 = sub_1009D1F0(v16, String, 0);
            *((_WORD *)v25 + 2) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v82, String);
            v56 = sub_1009D1F0(v55, String, 0);
            *((_WORD *)v25 + 3) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v77, String);
            v57 = sub_1009D1F0(v56, String, 0);
            v58 = (__int16 *)&v86 + 1;
          }
          else
          {
            if ( _stricmp(String, "SetString") )
            {
              v64 = sub_10230460(dword_1047CCCC, *(_WORD *)v69);
              Warning("Couldn't parse script sequence '%s': expected <anim command>, found '%s'\n", v64, String);
              return 0;
            }
            *v25 = 7;
            v59 = sub_1009D1F0(v16, String, 0);
            *((_WORD *)v25 + 2) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v75, String);
            v60 = sub_1009D1F0(v59, String, 0);
            *((_WORD *)v25 + 3) = *sub_10230F20(dword_1047CCCC, v83, String);
            v57 = sub_1009D1F0(v60, String, 0);
            v58 = (__int16 *)&v79 + 1;
          }
          v49 = v57;
          *((_WORD *)v25 + 4) = *sub_10230F20(dword_1047CCCC, v58, String);
        }
      }
      v16 = sub_1009D1F0(v49, String, 0);
      *((float *)v25 + 3) = atof(String);
LABEL_63:
      v61 = sub_1009D1F0(v16, String, 0);
      if ( sub_10227FA0(String, "[$") )
      {
        if ( !sub_10229CE0(String) )
        {
          if ( *(_DWORD *)(v69 + 20) - v19 - 1 > 0 )
            memcpy(
              (void *)(*(_DWORD *)(v69 + 8) + *(_DWORD *)&v83[1]),
              (const void *)(*(_DWORD *)(v69 + 8) + *(_DWORD *)&v83[1] + 48),
              48 * (*(_DWORD *)(v69 + 20) - v19 - 1));
          --*(_DWORD *)(v69 + 20);
        }
        v16 = v61;
      }
      v15 = v69;
    }
    if ( !v67 )
      goto LABEL_75;
    v62 = 0;
    if ( v3[56] - 1 > 0 )
    {
      v63 = (_WORD *)v3[53];
      while ( *v63 != (_WORD)v85 )
      {
        ++v62;
        v63 += 14;
        if ( v62 >= v3[56] - 1 )
          goto LABEL_76;
      }
LABEL_75:
      sub_102474B0(v3 + 53, v74);
    }
LABEL_76:
    v10 = sub_1009D1F0(v16, String, 0);
    if ( String[0] )
      continue;
    return 1;
  }
}
