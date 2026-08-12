void __usercall sub_1034CF90(int a1@<ecx>, int a2@<esi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  double v6; // st7
  float *v7; // eax
  double v8; // st7
  float *v9; // eax
  int v10; // ecx
  double v11; // st6
  double v12; // st7
  void *v13; // eax
  float *v14; // eax
  double v15; // st7
  void *v16; // eax
  int v17; // edx
  const char *v18; // eax
  int v19; // ecx
  int v20; // ebx
  char *v21; // eax
  void (__thiscall *v22)(int); // eax
  int v23; // esi
  const char *v24; // eax
  const char *v25; // ecx
  const char *v26; // eax
  char *v27; // eax
  int v28; // edx
  int v29; // ecx
  _DWORD v30[3]; // [esp-8h] [ebp-ECh] BYREF
  int v31; // [esp+4h] [ebp-E0h]
  int v32; // [esp+8h] [ebp-DCh]
  _BYTE *v33; // [esp+Ch] [ebp-D8h]
  _BYTE v34[76]; // [esp+1Ch] [ebp-C8h] BYREF
  int v35; // [esp+68h] [ebp-7Ch]
  _BYTE v36[12]; // [esp+70h] [ebp-74h] BYREF
  float v37[3]; // [esp+7Ch] [ebp-68h] BYREF
  int v38; // [esp+88h] [ebp-5Ch] BYREF
  float v39[3]; // [esp+90h] [ebp-54h] BYREF
  _DWORD v40[3]; // [esp+9Ch] [ebp-48h] BYREF
  float v41[3]; // [esp+A8h] [ebp-3Ch] BYREF
  _DWORD *v42; // [esp+B4h] [ebp-30h]
  int v43; // [esp+B8h] [ebp-2Ch] BYREF
  int v44; // [esp+BCh] [ebp-28h] BYREF
  float v45; // [esp+C0h] [ebp-24h]
  float v46; // [esp+C4h] [ebp-20h]
  int v47; // [esp+C8h] [ebp-1Ch] BYREF
  float v48; // [esp+CCh] [ebp-18h]
  float v49; // [esp+D0h] [ebp-14h]
  int v50; // [esp+D4h] [ebp-10h]
  int v51; // [esp+D8h] [ebp-Ch] BYREF
  float v52; // [esp+DCh] [ebp-8h]
  float v53; // [esp+E0h] [ebp-4h]
  int savedregs; // [esp+E4h] [ebp+0h] BYREF

  v3 = *(_DWORD *)(a1 + 4016);
  if ( v3 != -1
    && (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 4016) & 0xFFF) + 1], v4[1] == v3 >> 12)
    && *v4
    && (v5 = *(_DWORD *)(a1 + 4116), v5 < *(_DWORD *)(a1 + 3952))
    && *(_DWORD *)(a1 + 4 * v5 + 4068) )
  {
    *(_DWORD *)(a1 + 4120) = -1;
    v6 = *(float *)(dword_106B31C8 + 12);
    v42 = (_DWORD *)(a1 + 4120);
    if ( v6 >= *(float *)(a1 + 3928) )
    {
      v7 = (float *)sub_10073710(0);
      v8 = *v7;
      v32 = 0;
      *(float *)&v47 = v8 - 4.0;
      v48 = v7[1] - 4.0;
      v49 = v7[2] - 4.0;
      v9 = (float *)sub_10073730(0);
      v10 = *(_DWORD *)(a1 + 4144);
      v11 = *v9 + 4.0;
      v33 = v36;
      *(float *)&v44 = v11;
      v45 = v9[1] + 4.0;
      v12 = v9[2] + 4.0;
      v31 = v10;
      v46 = v12;
      v13 = (void *)sub_1026A890((unsigned int *)(a1 + 4016));
      sub_100BCCA0(v13, v31, (int)&v51, (int)v36);
      v14 = sub_10349B00(
              (int)&savedregs,
              a2,
              v39,
              *(float *)&v51,
              v52,
              v53,
              0,
              *(float *)&v47,
              v48,
              v49,
              *(float *)&v44,
              v45,
              v46);
      v51 = *(int *)v14;
      v33 = 0;
      v15 = v14[1];
      v32 = 0;
      v52 = v15;
      v31 = a1;
      v53 = v14[2];
      sub_1023D4B0(8, (float *)&v51, 120, 2.0, a1, 0, 0);
      sub_10265570(v40, a1, 0);
      v40[0] = &CTraceFilterOnlyNPCsAndPlayer::`vftable';
      sub_10023240(
        COERCE_FLOAT(&savedregs),
        a2,
        (float *)&v51,
        (float *)&v51,
        (float *)&v47,
        (float *)&v44,
        33570827,
        (int)v40,
        (int)v34);
      if ( v35 )
      {
        if ( *(_DWORD *)(dword_106E673C + 48) == 2 )
          sub_1011BB20((int)&v51, (int)&v47, (int)&v44, 255, 0, 0, 64, 0.5);
        *(float *)(a1 + 3928) = *(float *)(dword_106B31C8 + 12) + 1.0;
      }
      else
      {
        if ( *(_DWORD *)(dword_106E673C + 48) == 2 )
          sub_1011BB20((int)&v51, (int)&v47, (int)&v44, 0, 255, 0, 64, 0.5);
        v31 = *(_DWORD *)(a1 + 4148);
        v16 = (void *)sub_1026A890((unsigned int *)(a1 + 4016));
        sub_100BCCA0(v16, v31, (int)v37, (int)v41);
        v17 = *(_DWORD *)(a1 + 4116);
        v43 = 0;
        v18 = *(const char **)(a1 + 4 * v17 + 4068);
        if ( !v18 )
          v18 = String;
        sub_101812F0(a1, a2, &v43, (int)v18, 0);
        v19 = v43;
        ++*(_DWORD *)(a1 + 4116);
        if ( v19 )
        {
          v20 = sub_100D7680(v19);
          v21 = sub_10129A00((float *)&v51, (int)&v47, (int)&v44, v20, 1);
          sub_1010C7F0((float *)dword_10614CA8, (int)v21, "Kill", 2.5, a1, a1, 0);
          if ( *(_DWORD *)(dword_106E673C + 48) == 2 )
            sub_1011BB20((int)&v51, (int)&v47, (int)&v44, 255, 255, 255, 64, 2.5);
          v41[2] = 0.0;
          v41[0] = 0.0;
          sub_100E0D20(v20, v37);
          sub_100E0EA0(v20, v41);
          sub_10260750((char *)v20);
          v22 = *(void (__thiscall **)(int))(*(_DWORD *)v20 + 136);
          *(_DWORD *)(v20 + 2324) = 1;
          v22(v20);
          v23 = sub_101811E0("scripted_sequence", -1);
          v24 = *(const char **)(v20 + 260);
          if ( !v24 )
            v24 = String;
          (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v23 + 128))(v23, "m_iszEntity", v24);
          (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v23 + 128))(
            v23,
            "m_iszPlay",
            "Dropship_Deploy");
          (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v23 + 128))(v23, "m_fMoveTo", "4");
          v25 = *(const char **)(v20 + 260);
          if ( !v25 )
            v25 = String;
          v26 = *(const char **)(a1 + 260);
          if ( !v26 )
            v26 = String;
          v50 = *(_DWORD *)v23;
          v27 = sub_1025F440("%s,NPCFinishDustoff,%s,0,-1", v26, v25);
          (*(void (__thiscall **)(int, const char *, char *))(v50 + 128))(v23, "OnEndSequence", v27);
          sub_100E0D20(v23, v37);
          sub_100E0EA0(v23, v41);
          sub_10035270(v23, v28, 608);
          (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 96))(v23);
          (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 136))(v23);
          v29 = *(_DWORD *)v23;
          v33 = 0;
          v50 = v29;
          v38 = 0;
          v39[1] = NAN;
          v39[2] = 0.0;
          sub_10023360(v30, (int)&v38);
          (*(void (__thiscall **)(int, const char *, int, int, _DWORD, _DWORD, _DWORD, int, int, _BYTE *))(v50 + 148))(
            v23,
            "BeginSequence",
            a1,
            a1,
            v30[0],
            v30[1],
            v30[2],
            v31,
            v32,
            v33);
          sub_10019680(v42, v20);
        }
        else
        {
          Warning("Dropship could not create template NPC\n");
        }
      }
    }
  }
  else
  {
    *(float *)(a1 + 3924) = *(float *)(dword_106B31C8 + 12) + 0.5;
  }
}
