int *__userpurge sub_1015E780@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<esi>,
        int a4,
        int a5,
        float a6,
        int a7,
        int *a8)
{
  float v8; // edx
  int v9; // ecx
  int v10; // ebx
  double v11; // st7
  __int16 v12; // ax
  int *result; // eax
  int *v14; // esi
  float *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int *v20; // edi
  int v21; // eax
  int v22; // ecx
  double v23; // st7
  double v24; // st7
  int v25; // eax
  double v26; // st7
  float v27; // edi
  float v28; // ebx
  double v29; // st7
  int v30; // eax
  int v31; // eax
  _DWORD *v32; // esi
  int v33; // eax
  const char *v34; // eax
  float v35; // [esp+28h] [ebp-940h]
  _DWORD v37[514]; // [esp+30h] [ebp-938h] BYREF
  char v38[12]; // [esp+838h] [ebp-130h] BYREF
  float v39[3]; // [esp+844h] [ebp-124h] BYREF
  int v40; // [esp+850h] [ebp-118h] BYREF
  float v41; // [esp+854h] [ebp-114h]
  float v42; // [esp+858h] [ebp-110h]
  float v43; // [esp+85Ch] [ebp-10Ch]
  int v44; // [esp+860h] [ebp-108h]
  float v45; // [esp+864h] [ebp-104h]
  float v46; // [esp+868h] [ebp-100h]
  float v47; // [esp+884h] [ebp-E4h]
  int v48; // [esp+890h] [ebp-D8h]
  float v49[3]; // [esp+8A0h] [ebp-C8h] BYREF
  float v50[3]; // [esp+8ACh] [ebp-BCh] BYREF
  float v51[3]; // [esp+8B8h] [ebp-B0h] BYREF
  _BYTE v52[12]; // [esp+8C4h] [ebp-A4h] BYREF
  int v53; // [esp+8D0h] [ebp-98h] BYREF
  float v54; // [esp+8D4h] [ebp-94h]
  float v55; // [esp+8D8h] [ebp-90h]
  float v56[5]; // [esp+8DCh] [ebp-8Ch] BYREF
  float v57; // [esp+8F0h] [ebp-78h]
  char v58; // [esp+8FBh] [ebp-6Dh]
  int *v59; // [esp+910h] [ebp-58h]
  float v60[3]; // [esp+918h] [ebp-50h] BYREF
  int v61; // [esp+924h] [ebp-44h]
  float v62; // [esp+928h] [ebp-40h]
  float v63; // [esp+92Ch] [ebp-3Ch]
  int v64; // [esp+930h] [ebp-38h]
  BOOL v65; // [esp+934h] [ebp-34h]
  int v66; // [esp+938h] [ebp-30h] BYREF
  float v67; // [esp+93Ch] [ebp-2Ch]
  float v68; // [esp+940h] [ebp-28h]
  int v69; // [esp+944h] [ebp-24h] BYREF
  float v70; // [esp+948h] [ebp-20h]
  float v71; // [esp+94Ch] [ebp-1Ch]
  float v72; // [esp+950h] [ebp-18h] BYREF
  float v73; // [esp+954h] [ebp-14h]
  float v74; // [esp+958h] [ebp-10h]
  int v75; // [esp+95Ch] [ebp-Ch] BYREF
  float v76; // [esp+960h] [ebp-8h]
  float v77; // [esp+964h] [ebp-4h]
  int savedregs; // [esp+968h] [ebp+0h] BYREF
  int v79; // [esp+974h] [ebp+Ch]
  float v80; // [esp+978h] [ebp+10h]

  v8 = *(float *)(a5 + 4);
  v61 = a1;
  v9 = *(int *)a5;
  v77 = *(float *)(a5 + 8);
  v10 = a4;
  v75 = v9;
  v76 = v8;
  if ( 0.0 == a6 )
    v11 = 1.0;
  else
    v11 = *(float *)(a4 + 52) / a6;
  *(float *)&v79 = v11;
  v12 = (**(int (__thiscall ***)(int, int *, _DWORD, int, int))dword_106B31F4)(dword_106B31F4, &v75, 0, a3, a2);
  v65 = (v12 & 0x4030) != 0;
  if ( (v12 & 0x4030) != 0 )
  {
    v66 = v75;
    v67 = v76;
    v68 = v77 + 24.0;
    if ( ((**(int (__thiscall ***)(int, int *, _DWORD))dword_106B31F4)(dword_106B31F4, &v66, 0) & 0x4030) == 0 )
      v65 = 0;
  }
  v77 = v77 + 1.0;
  v62 = 0.5 * a6 * (0.5 * a6);
  sub_10261520((int)&v75, a6, 0);
  result = (int *)sub_1025EEE0(v37);
  v14 = result;
  while ( result )
  {
    v80 = 0.0;
    if ( v14 == a8 || !*((_BYTE *)v14 + 225) || a7 && (*(int (__thiscall **)(int *))(*v14 + 220))(v14) == a7 )
      goto LABEL_66;
    if ( v65 ? *((_BYTE *)v14 + 447) == 0 : *((_BYTE *)v14 + 447) == 3 )
      goto LABEL_66;
    v16 = (float *)(*(int (__thiscall **)(int *, char *, int *, _DWORD))(*v14 + 520))(v14, v38, &v75, 0);
    v72 = *v16;
    v73 = v16[1];
    v74 = v16[2];
    v17 = sub_100232D0((_DWORD *)v10);
    sub_1002A5F0((int)&savedregs, (int)v14, (float *)&v75, &v72, 100679683, v17, 0, (int)v52);
    if ( *(_DWORD *)(dword_106B3E34 + 48) )
    {
      if ( 1.0 != v57 && v59 != v14 )
        goto LABEL_66;
    }
    else if ( 1.0 != v57 )
    {
      if ( sub_1015E3F0((int)v52) )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)v61 + 244))(v61, v14) )
          goto LABEL_66;
        if ( (v74 - v77) * (v74 - v77) + (v72 - *(float *)&v75) * (v72 - *(float *)&v75) + (v73 - v76) * (v73 - v76) > v62 )
          goto LABEL_66;
        v60[0] = v72 - *(float *)&v53;
        v60[1] = v73 - v54;
        v60[2] = v74 - v55;
        off_10689714();
        sub_1001EFB0(v60, v56, v39);
        sub_1001EFB0(v56, v39, (float *)&v66);
        off_10689714();
        v50[0] = *(float *)&v66 * 16.0 + *(float *)&v53;
        v50[1] = v67 * 16.0 + v54;
        v50[2] = 16.0 * v68 + v55;
        v18 = sub_100232D0((_DWORD *)v10);
        sub_1002A5F0((int)&savedregs, (int)v14, (float *)&v53, v50, 100679683, v18, 0, (int)v52);
        v19 = sub_100232D0((_DWORD *)v10);
        sub_1002A5F0((int)&savedregs, (int)v14, (float *)&v53, &v72, 100679683, v19, 0, (int)v52);
        if ( 1.0 != v57 )
        {
          if ( (unsigned __int8)sub_10163140(v52) )
            goto LABEL_66;
        }
      }
      v20 = v59;
      if ( v59 )
      {
        if ( v59 != v14 && (int *)sub_10019B00(v59) != v14 )
        {
          v21 = sub_100232D0((_DWORD *)v10);
          sub_1002A5F0((int)&savedregs, (int)v14, (float *)&v75, &v72, 1, v21, 0, (int)v52);
          if ( 1.0 != v57 )
            goto LABEL_66;
          v22 = v20[106];
          if ( v22 )
          {
            v23 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v22 + 116))(v22) * 0.0028571428;
            if ( v23 >= 1.0 )
              goto LABEL_66;
          }
          else
          {
            v23 = 0.25;
          }
          v80 = v23;
        }
      }
    }
    v35 = (v77 - v55) * (v77 - v55)
        + (v76 - v54) * (v76 - v54)
        + (*(float *)&v75 - *(float *)&v53) * (*(float *)&v75 - *(float *)&v53);
    v24 = *(float *)(v10 + 52) - off_10689708(v35) * *(float *)&v79;
    v63 = v24;
    if ( v24 > 0.0 )
    {
      if ( v58 )
      {
        v53 = v75;
        v54 = v76;
        v55 = v77;
        v57 = 0.0;
      }
      sub_1001E4E0(&v40, v10);
      v47 = v63 - v80 * v63;
      if ( sub_1001E870((_DWORD *)v10) )
      {
        v25 = sub_1001E870((_DWORD *)v10);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v25 + 320))(v25) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*v14 + 284))(v14) )
            sub_10247F80(&v40);
        }
      }
      *(float *)&v69 = v72 - *(float *)&v75;
      v70 = v73 - v76;
      v71 = v74 - v77;
      off_10689714();
      v26 = flt_106F1CA8;
      if ( *(float *)&v44 != flt_106F1CA8
        || (v26 = flt_106F1CAC, v45 != flt_106F1CAC)
        || (v26 = flt_106F1CB0, v46 != flt_106F1CB0) )
      {
        v27 = v41;
        v28 = v42;
        v49[2] = v43;
        v49[0] = v41;
        v49[1] = v42;
        if ( !sub_10018CD0(v49, &flt_106F1CA8) )
        {
          v51[0] = v27;
          v51[1] = v28;
          v51[2] = v43;
          sub_100D7A40(v51);
          v29 = v26 * *(float *)&v79;
          v10 = a4;
          v41 = *(float *)&v69 * v29;
          v42 = v70 * v29;
          v43 = v29 * v71;
          v44 = v75;
          v45 = v76;
          v46 = v77;
LABEL_50:
          if ( 1.0 == v57 || v14 != v59 )
          {
            sub_100D9E70(v14, (int)v14, &v40);
          }
          else
          {
            sub_10247FD0();
            sub_100E8760(v14, (int)&v40, (int)&v69, (int)v52);
            sub_10248230();
          }
          sub_10023860((int)&savedregs, (int)&v40, (float *)&v75, (float *)&v53, &v69);
          if ( sub_1001E870((_DWORD *)v10) )
          {
            v30 = sub_1001E870((_DWORD *)v10);
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v30 + 320))(v30) )
            {
              if ( v59 && (*(int (__thiscall **)(int *))(*v59 + 288))(v59) )
              {
                LOBYTE(v64) = 1;
                v31 = sub_1001E870((_DWORD *)v10);
                v32 = (_DWORD *)sub_1001F4B0(v31);
                v33 = sub_100CF460(v32);
                if ( v33 )
                {
                  if ( *(char **)(v33 + 92) == "weapon_smg1" || sub_100D6240((_DWORD *)v33, "weapon_smg1") )
                    LOBYTE(v64) = 0;
                  v34 = *(const char **)(sub_100CF460(v32) + 92);
                  if ( !v34 )
                    v34 = String;
                }
                else
                {
                  v34 = "NULL";
                }
                (*(void (__thiscall **)(int, _DWORD *, int, const char *, int))(*(_DWORD *)off_10627F88 + 120))(
                  off_10627F88,
                  v32,
                  v64,
                  v34,
                  v10);
              }
            }
          }
          goto LABEL_66;
        }
        v10 = a4;
      }
      if ( (v48 & 0x800) == 0 )
        sub_102485A0((int)&v40, (int)&v69, (int)&v75, 1.0);
      goto LABEL_50;
    }
LABEL_66:
    ++v37[0];
    result = (int *)sub_1025EEE0(v37);
    v14 = result;
  }
  return result;
}
