void __usercall sub_10355830(int *a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // edi
  int v10; // ecx
  double v11; // st4
  double v12; // st6
  double v13; // st4
  double v14; // st5
  double v15; // st6
  double v16; // st7
  int v17; // edx
  float v18; // ecx
  float v19; // edx
  unsigned int v20; // eax
  float v21; // edx
  float v22; // eax
  double v23; // st7
  int v24; // ecx
  int v25; // eax
  float *v26; // eax
  float *v27; // eax
  int (__thiscall *v28)(int); // eax
  int v29; // eax
  float v30; // edi
  int v31; // eax
  float v32; // [esp+4h] [ebp-28h]
  float v33; // [esp+4h] [ebp-28h]
  int v34; // [esp+10h] [ebp-1Ch] BYREF
  float v35; // [esp+14h] [ebp-18h]
  float v36; // [esp+18h] [ebp-14h]
  float v37; // [esp+1Ch] [ebp-10h] BYREF
  float v38; // [esp+20h] [ebp-Ch]
  float v39; // [esp+24h] [ebp-8h]
  float v40; // [esp+28h] [ebp-4h]
  int savedregs; // [esp+2Ch] [ebp+0h] BYREF

  if ( (*(int (__thiscall **)(int *))(*a1 + 368))(a1) && sub_10023D10(a1, 26) )
  {
    if ( (*(int (__thiscall **)(int *))(*a1 + 368))(a1) )
    {
      v3 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
      {
        if ( *(float *)(dword_106B31C8 + 12) > (double)*((float *)a1 + 1042) )
        {
          v4 = (unsigned int)a1[62] >> 13;
          *((float *)a1 + 1042) = *(float *)(dword_106B31C8 + 12) + 5.0;
          if ( (v4 & 1) == 0 )
            sub_1023C380(a1, (int)"NPC_CombineGunship.SeeEnemy", 0.0, 0);
        }
      }
    }
    if ( (*(int (__thiscall **)(int *))(*a1 + 368))(a1) )
    {
      v5 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
      if ( *(char **)(v5 + 92) == "rpg_missile" || sub_100D6240((_DWORD *)v5, "rpg_missile") )
      {
        sub_1023C380(a1, (int)"NPC_CombineGunship.SeeMissile", 0.0, 0);
        if ( *(float *)(dword_106B31C8 + 12) < (double)*((float *)a1 + 1041)
          && *((float *)a1 + 1041) - *(float *)(dword_106B31C8 + 12) > 0.4 )
        {
          *((float *)a1 + 1041) = *(float *)(dword_106B31C8 + 12) + 0.4;
          a1[1034] = *(_DWORD *)(dword_106E68F4 + 48);
        }
      }
    }
    *((_BYTE *)a1 + 4252) = 0;
  }
  v6 = a1[1023];
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (a1[1023] & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (a1[1023] & 0xFFF) + 2] == v8 && *v7 && !*((_BYTE *)a1 + 4080) )
    {
      if ( off_1061BE18[4 * (a1[1023] & 0xFFF) + 2] == v8 )
        v9 = *v7;
      else
        v9 = 0;
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        sub_100DAE60(v9);
      v10 = a1[63];
      v37 = *(float *)(v9 + 580);
      v38 = *(float *)(v9 + 584);
      v39 = *(float *)(v9 + 588) + 512.0;
      if ( (v10 & 0x800) != 0 )
        sub_100DAE60((int)a1);
      v11 = v38 - *((float *)a1 + 146);
      v12 = v11 * v11;
      v13 = v37 - *((float *)a1 + 145);
      v14 = v12;
      v15 = v39 - *((float *)a1 + 147);
      v32 = v13 * v13 + v14 + v15 * v15;
      v16 = off_10689708(v32);
      v17 = a1[63];
      v40 = v16;
      if ( (v17 & 0x1000) != 0 )
        sub_100DAFD0((int)a1);
      v18 = *((float *)a1 + 120);
      v19 = *((float *)a1 + 121);
      v37 = *((float *)a1 + 119);
      v20 = a1[1023];
      v38 = v18;
      v39 = v19;
      if ( v20 == -1 || off_1061BE18[4 * (v20 & 0xFFF) + 2] != v20 >> 12 )
        a2 = 0;
      else
        a2 = off_1061BE18[4 * (v20 & 0xFFF) + 1];
      if ( (*(_DWORD *)(a2 + 252) & 0x1000) != 0 )
        sub_100DAFD0(a2);
      v21 = *(float *)(a2 + 480);
      v22 = *(float *)(a2 + 484);
      v34 = *(int *)(a2 + 476);
      v35 = v21;
      v36 = v22;
      v33 = (v37 - *(float *)&v34) * (v37 - *(float *)&v34) + (v38 - v21) * (v38 - v21);
      v23 = off_10689708(v33);
      if ( v40 < 100.0 && v23 < 200.0 )
        sub_10353060((int)a1, a2);
    }
  }
  if ( *((_BYTE *)a1 + 4142) )
  {
    v24 = a1[1034];
    if ( v24 <= 0 || *((float *)a1 + 1041) >= (double)*(float *)(dword_106B31C8 + 12) )
    {
      if ( v24 < 1 )
      {
        sub_10352CE0(a1);
        if ( sub_103516C0(a1) )
          *((float *)a1 + 1041) = *(float *)(dword_106B31C8 + 12) + 0.5;
      }
    }
    else
    {
      sub_10350E50((int)a1);
      sub_10354140(a1);
    }
  }
  else
  {
    if ( (*(int (__thiscall **)(int *))(*a1 + 368))(a1) )
    {
      v25 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
      v26 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v25 + 504))(v25, &v34);
      a1[1045] = *(int *)v26;
      a1[1046] = *((int *)v26 + 1);
      a1[1047] = *((int *)v26 + 2);
    }
    if ( *((_BYTE *)a1 + 4080) )
    {
      v27 = sub_10352F00(a1, (int)&savedregs, (int)a1, (float *)&v34);
      sub_10352DE0((float *)a1 + 1060, v27);
      sub_10351BA0(a1, (int)&savedregs, a2, (int)a1);
      if ( *(float *)(dword_106B31C8 + 12) > (double)*((float *)a1 + 1021) )
        sub_10353A10((int)a1, a2, 1);
    }
  }
  if ( (a1[62] & 0x2000) != 0 )
  {
    sub_100BF1B0(a1, "gun", (int)&v34, 0, 0, 0);
    v37 = *((float *)a1 + 1045) - *(float *)&v34;
    v38 = *((float *)a1 + 1046) - v35;
    v39 = *((float *)a1 + 1047) - v36;
    sub_10352840((int)a1, (int)&v37);
  }
  v28 = *(int (__thiscall **)(int))(*a1 + 368);
  v40 = *((float *)a1 + 952) - *((float *)a1 + 953);
  if ( v28((int)a1) )
  {
    v29 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 220))(v29) == 22 && v40 > 6.0 )
    {
      v30 = *(float *)a1;
      v31 = (*(int (__thiscall **)(int *, int, int))(*a1 + 368))(a1, 4, 5);
      (*(void (__thiscall **)(int *, int))(LODWORD(v30) + 1120))(a1, v31);
      *((_BYTE *)a1 + 4252) = 1;
      sub_100285C0(a1, 0, 1);
    }
  }
}
