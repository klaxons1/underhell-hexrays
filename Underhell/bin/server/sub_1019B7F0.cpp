char __thiscall sub_1019B7F0(int this, float a2)
{
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int i; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // eax
  int *v15; // ecx
  int v16; // ecx
  int *v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  float *v21; // ecx
  char *v22; // eax
  const char *v23; // eax
  char *v24; // [esp-4h] [ebp-38h]
  int v25[2]; // [esp+8h] [ebp-2Ch] BYREF
  int v26; // [esp+10h] [ebp-24h]
  int v27; // [esp+14h] [ebp-20h]
  int v28; // [esp+18h] [ebp-1Ch]
  int v29; // [esp+1Ch] [ebp-18h]
  int v30; // [esp+20h] [ebp-14h]
  int v31; // [esp+24h] [ebp-10h]
  int v32; // [esp+28h] [ebp-Ch]
  double v33; // [esp+2Ch] [ebp-8h]
  int savedregs; // [esp+34h] [ebp+0h] BYREF
  _DWORD *v35; // [esp+3Ch] [ebp+8h]

  v33 = Plat_FloatTime();
  switch ( *(_DWORD *)(this + 1236) )
  {
    case 0:
      sub_10197B40("Sampling walkable space...", 100, *(_DWORD *)(this + 1248) / 10, 0);
      *(_DWORD *)(this + 1248) = (*(_DWORD *)(this + 1248) + 1) % 1000;
      if ( !sub_1019A1D0((_DWORD *)this, (int)&savedregs) )
        goto LABEL_5;
      while ( a2 >= Plat_FloatTime() - v33 )
      {
        if ( !sub_1019A1D0((_DWORD *)this, (int)&savedregs) )
        {
LABEL_5:
          *(_DWORD *)(this + 1236) = 1;
          return 1;
        }
      }
      return 1;
    case 1:
      Msg("Creating navigation areas from sampled data...\n");
      sub_1019B380((_DWORD *)this);
      sub_1019EF70(this);
      v4 = -1;
      v25[0] = 0;
      v25[1] = 0;
      v26 = 0;
      v30 = 0;
      v32 = 0;
      v5 = dword_10632630;
      v31 = -1;
      v27 = -1;
      v28 = -1;
      v29 = -1;
      if ( dword_10632630 != -1 )
      {
        v6 = dword_10632624;
        do
        {
          v7 = 12 * v5;
          sub_1018F640(v25, (_DWORD *)(12 * v5 + v6));
          v6 = dword_10632624;
          v5 = *(_DWORD *)(v7 + dword_10632624 + 8);
        }
        while ( v5 != -1 );
        v4 = v27;
      }
      sub_1018EC70(&dword_10632624);
      for ( i = v4; i != -1; i = v35[2] )
      {
        v35 = (_DWORD *)(v25[0] + 12 * i);
        v9 = sub_1018CED0(&dword_10632624, 0);
        sub_1018ED30(&dword_10632624, v9);
        v10 = dword_10632624;
        v11 = 12 * v9;
        *(_DWORD *)(dword_10632624 + v11 + 8) = -1;
        v12 = dword_10632634;
        *(_DWORD *)(v10 + v11 + 4) = dword_10632634;
        dword_10632634 = v9;
        if ( v12 == -1 )
          dword_10632630 = v9;
        else
          *(_DWORD *)(dword_10632624 + 12 * v12 + 8) = v9;
        ++dword_1063263C;
        v13 = (_DWORD *)(dword_10632624 + v11);
        if ( v13 )
          *v13 = *v35;
      }
      *(_DWORD *)(this + 1236) = 2;
      *(_DWORD *)(this + 1244) = dword_10632630;
      sub_1018EC70(v25);
      if ( v26 >= 0 )
      {
        if ( v25[0] )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
      }
      return 1;
    case 2:
      if ( *(_DWORD *)(this + 1244) == -1 )
        goto LABEL_25;
      while ( 1 )
      {
        v14 = dword_10632624 + 12 * *(_DWORD *)(this + 1244);
        v15 = *(int **)v14;
        *(_DWORD *)(this + 1244) = *(_DWORD *)(v14 + 8);
        sub_101902F0(v15);
        if ( a2 < Plat_FloatTime() - v33 )
          break;
        if ( *(_DWORD *)(this + 1244) == -1 )
        {
LABEL_25:
          Msg("Finding hiding spots...DONE\n");
          *(_DWORD *)(this + 1236) = 3;
          *(_DWORD *)(this + 1244) = dword_10632630;
          return 1;
        }
      }
      sub_10197B40("Finding hiding spots...", 100, 100 * *(_DWORD *)(this + 1244) / dword_1063263C, 1);
      return 1;
    case 3:
      if ( *(_DWORD *)(this + 1244) == -1 )
        goto LABEL_30;
      while ( 1 )
      {
        v16 = *(_DWORD *)(dword_10632624 + 12 * *(_DWORD *)(this + 1244));
        *(_DWORD *)(this + 1244) = *(_DWORD *)(dword_10632624 + 12 * *(_DWORD *)(this + 1244) + 8);
        sub_101983E0(v16, -1);
        if ( a2 < Plat_FloatTime() - v33 )
          break;
        if ( *(_DWORD *)(this + 1244) == -1 )
        {
LABEL_30:
          Msg("Finding approach areas...DONE\n");
          *(_DWORD *)(this + 1236) = 4;
          *(_DWORD *)(this + 1244) = dword_10632630;
          return 1;
        }
      }
      sub_10197B40("Finding approach areas...", 100, 100 * *(_DWORD *)(this + 1244) / dword_1063263C, 1);
      return 1;
    case 4:
      if ( *(_DWORD *)(this + 1244) == -1 )
        goto LABEL_35;
      while ( 1 )
      {
        v17 = (int *)(dword_10632624 + 12 * *(_DWORD *)(this + 1244));
        v18 = *v17;
        *(_DWORD *)(this + 1244) = v17[2];
        sub_10190A40(v18);
        if ( a2 < Plat_FloatTime() - v33 )
          break;
        if ( *(_DWORD *)(this + 1244) == -1 )
        {
LABEL_35:
          Msg("Finding encounter spots...DONE\n");
          *(_DWORD *)(this + 1236) = 5;
          *(_DWORD *)(this + 1244) = dword_10632630;
          return 1;
        }
      }
      sub_10197B40("Finding encounter spots...", 100, 100 * *(_DWORD *)(this + 1244) / dword_1063263C, 1);
      return 1;
    case 5:
      if ( *(_DWORD *)(this + 1244) == -1 )
        goto LABEL_40;
      while ( 1 )
      {
        v19 = *(_DWORD *)(dword_10632624 + 12 * *(_DWORD *)(this + 1244));
        *(_DWORD *)(this + 1244) = *(_DWORD *)(dword_10632624 + 12 * *(_DWORD *)(this + 1244) + 8);
        sub_1018DA90(v19, (int)&savedregs);
        if ( a2 < Plat_FloatTime() - v33 )
          break;
        if ( *(_DWORD *)(this + 1244) == -1 )
        {
LABEL_40:
          Msg("Finding sniper spots...DONE\n");
          *(_DWORD *)(this + 1236) = 6;
          *(_DWORD *)(this + 1244) = dword_10632630;
          return 1;
        }
      }
      sub_10197B40("Finding sniper spots...", 100, 100 * *(_DWORD *)(this + 1244) / dword_1063263C, 1);
      return 1;
    case 6:
      if ( *(_DWORD *)(this + 1244) == -1 )
        goto LABEL_45;
      break;
    case 7:
      Msg("Generation complete!\n");
      *(_DWORD *)(this + 1240) = 0;
      *(_BYTE *)(this + 32) = 1;
      sub_10197C20();
      if ( *(_DWORD *)(dword_106B831C + 48) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 20))(this) )
        {
          v24 = sub_101959B0();
          Msg("Navigation map '%s' saved.\n", v24);
        }
        else
        {
          v22 = sub_101959B0();
          if ( !v22 )
            v22 = "(null)";
          Msg("ERROR: Cannot save navigation map '%s'.\n", v22);
        }
        v23 = *(const char **)(dword_106B31C8 + 60);
        if ( !v23 )
          v23 = String;
        (**(void (__thiscall ***)(int, const char *, _DWORD))dword_106B31D0)(dword_106B31D0, v23, 0);
      }
      return 0;
    default:
      return 0;
  }
  while ( 1 )
  {
    v20 = dword_10632624 + 12 * *(_DWORD *)(this + 1244);
    v21 = *(float **)v20;
    *(_DWORD *)(this + 1244) = *(_DWORD *)(v20 + 8);
    sub_101956E0(v21);
    if ( a2 < Plat_FloatTime() - v33 )
      break;
    if ( *(_DWORD *)(this + 1244) == -1 )
    {
LABEL_45:
      Msg("Finding earliest occupy times...DONE\n");
      *(_DWORD *)(this + 1236) = 7;
      *(_DWORD *)(this + 1244) = dword_10632630;
      return 1;
    }
  }
  sub_10197B40("Finding earliest occupy times...", 100, 100 * *(_DWORD *)(this + 1244) / dword_1063263C, 1);
  return 1;
}
