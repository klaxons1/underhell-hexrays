// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_100E9CD0@<al>(
        int *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        float *a6,
        int a7,
        float *a8,
        int a9)
{
  float *v9; // esi
  int *v10; // edi
  int v11; // eax
  float v12; // edx
  float v13; // ecx
  float v14; // eax
  float v15; // edx
  float v16; // ecx
  char *v17; // eax
  int v18; // edx
  double v19; // st4
  double v20; // st2
  double v21; // st3
  double v22; // st1
  double v23; // st4
  double v24; // st2
  double v25; // st3
  _DWORD *v26; // eax
  void *v27; // eax
  bool v28; // zf
  double v29; // st1
  double v30; // st7
  _BYTE v34[12]; // [esp+20h] [ebp-180h] BYREF
  _BYTE v35[12]; // [esp+2Ch] [ebp-174h] BYREF
  float v36; // [esp+38h] [ebp-168h] BYREF
  float v37; // [esp+3Ch] [ebp-164h]
  float v38; // [esp+40h] [ebp-160h]
  float v39[26]; // [esp+84h] [ebp-11Ch] BYREF
  float v40[18]; // [esp+ECh] [ebp-B4h] BYREF
  __int16 v41; // [esp+134h] [ebp-6Ch]
  int v42; // [esp+138h] [ebp-68h]
  int v43; // [esp+13Ch] [ebp-64h]
  int v44; // [esp+140h] [ebp-60h]
  char v45; // [esp+144h] [ebp-5Ch]
  _DWORD *v46; // [esp+150h] [ebp-50h]
  float v47[3]; // [esp+154h] [ebp-4Ch] BYREF
  int v48; // [esp+160h] [ebp-40h]
  float v49; // [esp+164h] [ebp-3Ch]
  float *v50; // [esp+168h] [ebp-38h]
  float v51; // [esp+16Ch] [ebp-34h] BYREF
  float v52; // [esp+170h] [ebp-30h]
  float v53; // [esp+174h] [ebp-2Ch]
  int v54; // [esp+178h] [ebp-28h]
  float v55; // [esp+17Ch] [ebp-24h] BYREF
  float v56; // [esp+180h] [ebp-20h]
  float v57; // [esp+184h] [ebp-1Ch]
  float v58; // [esp+188h] [ebp-18h]
  float v59; // [esp+18Ch] [ebp-14h]
  float v60; // [esp+190h] [ebp-10h]
  int v61; // [esp+194h] [ebp-Ch]
  void *v62; // [esp+198h] [ebp-8h]
  void *retaddr; // [esp+1A0h] [ebp+0h]

  v61 = a2;
  v62 = retaddr;
  v9 = (float *)a5;
  v10 = a1;
  v48 = (int)a1;
  sub_1001F180(v39, (float *)(a5 + 4), a6);
  (*(void (__thiscall **)(int, float *, int, int, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v39,
    1174421555,
    a7,
    v35,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v35, (int)&v36, 255, 0, 0, 1, -1.0);
  v11 = sub_101811E0("btbullet", -1);
  v54 = v11;
  if ( v11 )
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v11 + 76))(v11, v10);
    v50 = (float *)(v54 + 1120);
    sub_100E86B0((float *)(v54 + 1120), a5);
    v12 = *(float *)(a5 + 8);
    v49 = 24.0;
    v13 = *(float *)(a5 + 4);
    v14 = *(float *)(a5 + 12);
    v59 = v12;
    v15 = *(float *)(a5 + 20);
    v58 = v13;
    v16 = *(float *)(a5 + 16);
    v60 = v14;
    v17 = *(char **)(a5 + 24);
    v56 = v15;
    v18 = *v10;
    v55 = v16;
    v57 = *(float *)&v17;
    if ( (*(unsigned __int8 (__thiscall **)(int *))(v18 + 320))(v10) )
    {
      *(_BYTE *)(v54 + 1212) = 1;
      if ( (v10[63] & 0x800) != 0 )
        sub_100DAE60((int)v10);
      sub_104222B0(v10 + 176, v34, &v51, v47);
      if ( !*(_BYTE *)(sub_101E7EA0(0) + 1120) || *(_BYTE *)(a5 + 85) )
      {
        v19 = v51 * 8.0;
        v20 = v52 * 8.0;
        v21 = 8.0 * v53;
        v22 = v58;
        if ( *(_BYTE *)(a5 + 84) )
        {
          v23 = v22 - v19;
          v24 = v59 - v20;
          v25 = v60 - v21;
        }
        else
        {
          v23 = v19 + v22;
          v24 = v20 + v59;
          v25 = v21 + v60;
        }
        v58 = v23 - v47[0] * 4.0;
        v59 = v24 - v47[1] * 4.0;
        v60 = v25 - 4.0 * v47[2];
      }
      v55 = v36 - v58;
      v56 = v37 - v59;
      v57 = v38 - v60;
      off_10689714();
      qmemcpy(v39, (const void *)a5, 0x58u);
      v39[4] = v55;
      v39[5] = v56;
      v39[6] = v57;
      v39[1] = v58;
      v39[2] = v59;
      v39[3] = v60;
      sub_100E86B0(v50, (int)v39);
      v10 = (int *)v48;
      v9 = (float *)a5;
    }
    else
    {
      v59 = 0.0;
      v58 = COERCE_FLOAT(&CBaseCombatCharacter `RTTI Type Descriptor');
      v57 = COERCE_FLOAT(&CBaseEntity `RTTI Type Descriptor');
      v56 = 0.0;
      v55 = *(float *)&v10;
      *(_BYTE *)(v54 + 1212) = 0;
      v26 = (_DWORD *)__RTDynamicCast(
                        SLODWORD(v55),
                        SLODWORD(v56),
                        (struct _s_RTTICompleteObjectLocator *)LODWORD(v57),
                        SLODWORD(v58),
                        SLODWORD(v59));
      v46 = v26;
      if ( v26 )
      {
        if ( sub_100CF460(v26) )
        {
          v59 = COERCE_FLOAT(v34);
          v49 = 12.0;
          v58 = COERCE_FLOAT(&v51);
          v57 = COERCE_FLOAT("muzzle");
          v27 = (void *)sub_100CF460(v46);
          sub_100BEFA0(v27, (char *)LODWORD(v57), SLODWORD(v58), SLODWORD(v59));
          v28 = *(_DWORD *)(a5 + 44) == 7;
          v58 = v51;
          v59 = v52;
          v60 = v53;
          if ( v28 )
          {
            v55 = v36 - v51;
            v56 = v37 - v52;
            v57 = v38 - v53;
            off_10689714();
            qmemcpy(v39, (const void *)a5, 0x58u);
            v39[4] = v55;
            v39[5] = v56;
            v39[6] = v57;
            v39[1] = v58;
            v39[2] = v59;
            v39[3] = v60;
            sub_100E86B0(v50, (int)v39);
            v10 = (int *)v48;
            v9 = (float *)a5;
          }
        }
      }
    }
    v51 = v55 * v49 + COERCE_FLOAT(&v55);
    v52 = v56 * v49 + *(float *)&v10;
    v53 = v49 * COERCE_FLOAT(&v51) + v60;
    sub_10107970(&v51, &v55, v10);
    v40[6] = 0.0;
    v40[13] = 0.0;
    v40[7] = 0.0;
    v40[17] = 0.0;
    v40[8] = 0.0;
    v42 = 0;
    v40[9] = 0.0;
    v43 = 0;
    v40[10] = 0.0;
    v44 = 0;
    v40[11] = 0.0;
    v45 = 0;
    v40[14] = 1.0;
    v59 = COERCE_FLOAT(v40);
    v58 = COERCE_FLOAT("TracerSound");
    v41 = 0;
    v40[15] = 0.0;
    LODWORD(v40[12]) = 16;
    v40[16] = 0.0;
    v40[3] = v36;
    v40[4] = v37;
    v40[5] = v38;
    v29 = v9[6];
    v30 = v9[5] * 400.0 + v37;
    v40[0] = v9[4] * 400.0 + v36;
    v40[1] = v30;
    v40[2] = 400.0 * v29 + v38;
    sub_1028E890("TracerSound", v40);
  }
  *a8 = v36;
  a8[1] = v37;
  a8[2] = v38;
  return 1;
}
