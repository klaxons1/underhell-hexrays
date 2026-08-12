char __userpurge sub_10071420@<al>(
        int a1@<ecx>,
        int a2@<esi>,
        float *a3,
        _DWORD *a4,
        float *a5,
        float *a6,
        char a7,
        char a8)
{
  char result; // al
  _DWORD *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  float *v18; // ebx
  float *v19; // eax
  double v20; // st4
  double v21; // st6
  double v22; // st4
  double v23; // st5
  double v24; // st6
  _DWORD *v25; // ebx
  float *v26; // eax
  int (__thiscall *v27)(float *); // edx
  float *v28; // eax
  float *v29; // eax
  float *v30; // eax
  double v31; // st7
  int v32; // ebx
  float *v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // esi
  float *v37; // ebx
  float *v38; // eax
  float *v39; // eax
  int v40; // eax
  _DWORD *v41; // eax
  float *v42; // [esp-8h] [ebp-ACh]
  float *v43; // [esp-4h] [ebp-A8h]
  float *v44; // [esp+0h] [ebp-A4h]
  float *v45; // [esp+0h] [ebp-A4h]
  const char *v46; // [esp+8h] [ebp-9Ch]
  float v47; // [esp+10h] [ebp-94h]
  _BYTE v48[44]; // [esp+20h] [ebp-84h] BYREF
  float v49; // [esp+4Ch] [ebp-58h]
  _BYTE v50[12]; // [esp+74h] [ebp-30h] BYREF
  float v51[3]; // [esp+80h] [ebp-24h] BYREF
  float v52; // [esp+8Ch] [ebp-18h] BYREF
  float v53; // [esp+90h] [ebp-14h]
  float v54; // [esp+94h] [ebp-10h]
  float v55; // [esp+98h] [ebp-Ch] BYREF
  float v56; // [esp+9Ch] [ebp-8h]
  float v57; // [esp+A0h] [ebp-4h]
  int savedregs; // [esp+A4h] [ebp+0h] BYREF
  char v59; // [esp+BFh] [ebp+1Bh]
  int v60; // [esp+C0h] [ebp+1Ch]

  if ( !a7 && sub_10070BB0(a1) )
  {
    if ( (a4[5] & 0x80) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      sub_1011CF30(a1 + 580, (int)"Node is locked.", 0, 60.0);
    }
    return 0;
  }
  v10 = a4;
  if ( !a8 )
  {
    result = sub_10070940(a4, *(__int16 *)(a1 + 816));
    if ( !result )
      return result;
  }
  v11 = *(_DWORD *)(a1 + 844);
  if ( v11 > 1 || *(int *)(a1 + 848) < 3 )
  {
    if ( a3 )
    {
      v12 = *((_DWORD *)a3 + 581);
      if ( v12 < v11 || v12 > *(_DWORD *)(a1 + 848) )
      {
        if ( (a4[5] & 0x80) == 0 )
          return 0;
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        sub_1011CF30(a1 + 580, (int)"NPC not in correct state.", 0, 60.0);
        return 0;
      }
    }
  }
  v13 = a4[8];
  if ( v13 )
  {
    v14 = *(_DWORD *)(a1 + 824);
    if ( !v14 || v14 != v13 )
    {
      if ( (a4[5] & 0x80) == 0 )
        return 0;
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      sub_1011CF30(a1 + 580, (int)"Doesn't match NPC hint group.", 0, 60.0);
      return 0;
    }
  }
  if ( a4[12] )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( !sub_10070990((int)(a4 + 9), (float *)(a1 + 580)) )
    {
      if ( (a4[5] & 0x80) != 0 )
      {
        v47 = 60.0;
        v46 = "Not inside include zones.";
        goto LABEL_104;
      }
      return 0;
    }
  }
  if ( a4[17] )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( sub_10070990((int)(a4 + 14), (float *)(a1 + 580)) )
    {
      if ( (a4[5] & 0x80) != 0 )
      {
        v47 = 60.0;
        v46 = "Inside exclude zones.";
        goto LABEL_104;
      }
      return 0;
    }
  }
  if ( a3 && !(*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)a3 + 2056))(a3, a1) )
  {
    if ( (a4[5] & 0x80) != 0 )
    {
      v47 = 60.0;
      v46 = "NPC doesn't know how to handle that type.";
      goto LABEL_104;
    }
    return 0;
  }
  if ( (a4[5] & 0x400) != 0 && a3 && !sub_10070440(a1, (int)a3) )
  {
    if ( (a4[5] & 0x80) != 0 )
    {
      v47 = 60.0;
      v46 = "NPC Not in hint's FOV";
      goto LABEL_104;
    }
    return 0;
  }
  if ( (a4[5] & 0x200) != 0 && a3 )
  {
    v15 = *(_DWORD *)a3;
    v16 = sub_10019640((_DWORD *)a1);
    if ( !(*(unsigned __int8 (__thiscall **)(float *, _DWORD *))(v15 + 880))(a3, v16) )
    {
      if ( (a4[5] & 0x80) != 0 )
      {
        v47 = 60.0;
        v46 = "Hint isn't in NPC's aimcone";
        goto LABEL_104;
      }
      return 0;
    }
    v10 = a4;
  }
  if ( (v10[5] & 0x100) != 0 && a3 && !(*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)a3 + 876))(a3, a1) )
  {
    if ( (v10[5] & 0x80) != 0 )
    {
      v47 = 60.0;
      v46 = "Hint isn't in NPC's viewcone";
      goto LABEL_104;
    }
    return 0;
  }
  if ( (v10[5] & 0x800) != 0 )
  {
    if ( a3 )
    {
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 368))(a3) )
      {
        v17 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 368))(a3);
        v18 = (float *)sub_10019640(v17);
        v19 = (float *)sub_10019640((_DWORD *)a1);
        v20 = v19[1] - v18[1];
        v21 = v20 * v20;
        v22 = *v19 - *v18;
        v23 = v21;
        v24 = v19[2] - v18[2];
        if ( v22 * v22 + v23 + v24 * v24 < 129600.0 )
        {
          if ( (a4[5] & 0x80) != 0 )
          {
            v47 = 60.0;
            v46 = "Hint takes NPC close to Enemy";
            goto LABEL_104;
          }
          return 0;
        }
      }
    }
  }
  v25 = a4;
  if ( (a4[5] & 1) != 0 && a3 )
  {
    if ( *(_DWORD *)(a1 + 820) == -1 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(float *, int, int, _DWORD))(*(_DWORD *)a3 + 548))(a3, a1, 16449, 0) )
      {
        if ( (a4[5] & 0x80) != 0 )
        {
          v47 = 60.0;
          v46 = "Hint isn't visible to NPC.";
          goto LABEL_104;
        }
        return 0;
      }
    }
    else
    {
      sub_10070340(a1, (int)a3, &v55);
      v26 = (float *)(*(int (__thiscall **)(float *, int))(*(_DWORD *)a3 + 532))(a3, a2);
      v52 = *v26 + v55;
      v53 = v26[1] + v56;
      v27 = *(int (__thiscall **)(float *))(*(_DWORD *)a3 + 504);
      v54 = v26[2] + v57;
      v28 = (float *)v27(a3);
      sub_1002A5F0((int)&savedregs, (int)a3, v28, v51, (int)&v52, 147467, (int)a3, 0);
      if ( 1.0 != v49 )
      {
        if ( (a4[5] & 0x80) != 0 )
        {
          v47 = 60.0;
          v46 = "Node isn't visible to NPC.";
          goto LABEL_104;
        }
        return 0;
      }
    }
  }
  if ( (a4[5] & 8) != 0 )
  {
    if ( a3 )
    {
      v44 = (float *)sub_1001F490(a3);
      v43 = (float *)sub_1001F470(a3);
      v42 = (float *)sub_10019640((_DWORD *)a1);
      v29 = (float *)sub_10019640((_DWORD *)a1);
      sub_100231A0((int)&savedregs, (int)a3, v29, v42, v43, v44, 33570827, (int)a3, 0, (int)v48);
      if ( 1.0 != v49 )
      {
        if ( (a4[5] & 0x80) != 0 )
        {
          v47 = 60.0;
          v46 = "Node isn't clear.";
          goto LABEL_104;
        }
        return 0;
      }
    }
  }
  if ( (a4[5] & 2) != 0 )
  {
    v30 = (float *)sub_10019640((_DWORD *)a1);
    v52 = *v30 - *a5;
    v53 = v30[1] - a5[1];
    v54 = v30[2] - a5[2];
    v31 = sub_100D7A40(&v52);
    if ( v31 > *a6 )
    {
      if ( (a4[5] & 0x80) != 0 )
      {
        v47 = 60.0;
        v46 = "Not the nearest node.";
        goto LABEL_104;
      }
      return 0;
    }
    *a6 = v31;
  }
  if ( (a4[5] & 0x3000) == 0 )
    goto LABEL_91;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v32 = sub_10261B20();
    if ( v32 )
    {
      v33 = (float *)sub_10019640((_DWORD *)a1);
      v55 = *v33;
      v56 = v33[1];
      v34 = a4[5] >> 13;
      v57 = v33[2];
      if ( (v34 & 1) != 0 )
      {
        v55 = a3[655] + v55;
        v56 = a3[656] + v56;
        v57 = a3[657] + v57;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)v32 + 544))(v32, &v55, 16449, 0) )
      {
        if ( (a4[5] & 0x80) != 0 )
        {
          v47 = 60.0;
          v46 = "Do not have LOS to player";
          goto LABEL_104;
        }
        return 0;
      }
    }
LABEL_91:
    v25 = a4;
  }
  if ( (v25[5] & 0x60) == 0 )
    return 1;
  v59 = 0;
  v60 = 1;
  if ( *(int *)(dword_106B31C8 + 20) >= 1 )
  {
    while ( 1 )
    {
      v35 = sub_1025FB50(v60);
      v36 = v35;
      if ( v35 )
      {
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v35 + 924))(v35, &v52);
        v37 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v36 + 504))(v36, v51);
        v38 = (float *)sub_10019640((_DWORD *)a1);
        v55 = *v38 - *v37;
        v56 = v38[1] - v37[1];
        v57 = v38[2] - v37[2];
        off_10689714();
        if ( v53 * v56 + v55 * v52 + v54 * v57 > 0.0 )
        {
          v45 = (float *)sub_10019640((_DWORD *)a1);
          v39 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v36 + 504))(v36, v50);
          sub_1002A5F0((int)&savedregs, v36, v39, v45, 16395, v36, 0, (int)v48);
          if ( 1.0 == v49 )
          {
            if ( (a4[5] & 0x40) != 0 )
            {
              if ( (a4[5] & 0x80) == 0 )
                return 0;
              v47 = 60.0;
              v46 = "Node is visible to player.";
LABEL_104:
              v41 = sub_10019640((_DWORD *)a1);
              sub_1011CF30((int)v41, (int)v46, 0, v47);
              return 0;
            }
            v59 = 1;
          }
        }
      }
      if ( ++v60 > *(_DWORD *)(dword_106B31C8 + 20) )
      {
        if ( v59 )
          return 1;
        break;
      }
    }
  }
  v40 = a4[5];
  if ( (v40 & 0x20) == 0 )
    return 1;
  if ( (v40 & 0x80) != 0 )
  {
    v47 = 60.0;
    v46 = "Node isn't visible to player.";
    goto LABEL_104;
  }
  return 0;
}
