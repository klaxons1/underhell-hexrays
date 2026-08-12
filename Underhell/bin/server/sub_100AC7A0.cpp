char *__cdecl sub_100AC7A0(float *a1, int a2)
{
  char *v2; // eax
  unsigned int v3; // eax
  char *v4; // eax
  char *v5; // eax
  float *v6; // eax
  char *v7; // eax
  int v8; // eax
  char *v9; // eax
  int v10; // edi
  char *v11; // eax
  bool v12; // al
  double v13; // st4
  double v14; // st7
  double v15; // st4
  double v16; // st5
  double v17; // st7
  double ArgList; // [esp+Ch] [ebp-24h]
  double ArgLista; // [esp+Ch] [ebp-24h]
  double ArgListb; // [esp+Ch] [ebp-24h]
  char *ArgList_4; // [esp+10h] [ebp-20h]
  float v23; // [esp+14h] [ebp-1Ch]
  float v24; // [esp+14h] [ebp-1Ch]
  float v25; // [esp+14h] [ebp-1Ch]
  float v26; // [esp+14h] [ebp-1Ch]
  _BYTE v27[12]; // [esp+24h] [ebp-Ch] BYREF

  v2 = (char *)sub_10008F90(*((_DWORD *)a1 + 593));
  if ( v2 )
    sub_10067DE0(a2, (void *)"activity", v2, 1.0);
  v3 = *((_DWORD *)a1 + 581);
  if ( v3 < 7 )
  {
    v4 = (char *)sub_1025F440("[NPCState::%s]", *(_DWORD *)&off_1060B460[4 * v3]);
    sub_10067DE0(a2, "npcstate", v4, 1.0);
  }
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1) )
  {
    v5 = *(char **)((*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1) + 92);
    if ( !v5 )
      v5 = (char *)String;
    sub_10067DE0(a2, "enemy", v5, 1.0);
    sub_10067DE0(a2, "timesincecombat", "-1", 1.0);
  }
  else if ( 0.0 == a1[686] )
  {
    sub_10067DE0(a2, "timesincecombat", "999999.0", 1.0);
  }
  else
  {
    ArgList = *(float *)(dword_106B31C8 + 12) - a1[686];
    ArgList_4 = (char *)sub_1025F440("%f", SLOBYTE(ArgList));
    sub_10067DE0(a2, "timesincecombat", ArgList_4, 1.0);
  }
  v6 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)a1 + 536))(a1, v27);
  v23 = v6[1] * v6[1] + *v6 * *v6 + v6[2] * v6[2];
  ArgLista = off_10689708(v23);
  v7 = (char *)sub_1025F440("%.3f", SLOBYTE(ArgLista));
  sub_10067DE0(a2, "speed", v7, 1.0);
  v8 = sub_100CF460(a1);
  if ( v8 )
  {
    v9 = *(char **)(v8 + 92);
    if ( !v9 )
      v9 = (char *)String;
    sub_10067DE0(a2, "weapon", v9, 1.0);
  }
  else
  {
    sub_10067DE0(a2, "weapon", "none", 1.0);
  }
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
  {
    v10 = 0;
LABEL_19:
    v24 = 1.0;
    v11 = (char *)sub_1025F440("%i", 0);
    goto LABEL_20;
  }
  v10 = sub_10261B20();
  if ( !v10 )
    goto LABEL_19;
  if ( ((_DWORD)a1[63] & 0x800) != 0 )
    sub_100DAE60(a1);
  if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
    sub_100DAE60(v10);
  v13 = *(float *)(v10 + 580) - a1[145];
  v14 = v13 * v13;
  v15 = *(float *)(v10 + 584) - a1[146];
  v16 = *(float *)(v10 + 588) - a1[147];
  v26 = v16 * v16 + v15 * v15 + v14;
  v17 = off_10689708(v26);
  v24 = 1.0;
  ArgListb = v17;
  v11 = (char *)sub_1025F440("%f", SLOBYTE(ArgListb));
LABEL_20:
  sub_10067DE0(a2, "distancetoplayer", v11, v24);
  v12 = sub_10023D10(a1, 32);
  v25 = 1.0;
  if ( v12 )
    sub_10067DE0(a2, "seeplayer", "1", v25);
  else
    sub_10067DE0(a2, "seeplayer", "0", v25);
  if ( v10
    && (*(unsigned __int8 (__thiscall **)(int, float *))(*(_DWORD *)v10 + 876))(v10, a1)
    && (*(unsigned __int8 (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)v10 + 548))(v10, a1, 16449, 0) )
  {
    return sub_10067DE0(a2, "seenbyplayer", "1", 1.0);
  }
  else
  {
    return sub_10067DE0(a2, "seenbyplayer", "0", 1.0);
  }
}
