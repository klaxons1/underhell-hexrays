int __thiscall sub_10309F40(int this, int a2)
{
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ecx
  int *v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // ebx
  int (__thiscall *v15)(int); // edx
  int (__thiscall *v16)(int); // edx
  int v17; // eax
  double v18; // st7
  int (__thiscall *v19)(int); // eax
  double v20; // st7
  int v21; // edi
  float v22[18]; // [esp+2Ch] [ebp-C8h] BYREF
  __int16 v23; // [esp+74h] [ebp-80h]
  int v24; // [esp+78h] [ebp-7Ch]
  int v25; // [esp+7Ch] [ebp-78h]
  int v26; // [esp+80h] [ebp-74h]
  char v27; // [esp+84h] [ebp-70h]
  int v28[4]; // [esp+8Ch] [ebp-68h] BYREF
  float v29; // [esp+9Ch] [ebp-58h]
  float v30; // [esp+A0h] [ebp-54h]
  float v31; // [esp+A4h] [ebp-50h]
  unsigned int v32; // [esp+B4h] [ebp-40h]
  unsigned int v33; // [esp+B8h] [ebp-3Ch]
  float v34; // [esp+C0h] [ebp-34h]
  char v35; // [esp+CCh] [ebp-28h]
  float v36; // [esp+DCh] [ebp-18h] BYREF
  float v37; // [esp+E0h] [ebp-14h]
  float v38; // [esp+E4h] [ebp-10h]
  int v39; // [esp+E8h] [ebp-Ch]
  float v40; // [esp+ECh] [ebp-8h]
  float v41; // [esp+F0h] [ebp-4h]
  int v42; // [esp+FCh] [ebp+8h]
  int v43; // [esp+FCh] [ebp+8h]
  int v44; // [esp+FCh] [ebp+8h]

  sub_1001E4E0(v28, a2);
  if ( v33 != -1 )
  {
    v3 = &off_1061BE18[4 * (v33 & 0xFFF) + 1];
    v4 = v33 >> 12;
    if ( off_1061BE18[4 * (v33 & 0xFFF) + 2] == v33 >> 12 )
    {
      if ( *v3 )
      {
        v5 = off_1061BE18[4 * (v33 & 0xFFF) + 2] == v4 ? *v3 : 0;
        if ( v5 != this )
        {
          v6 = off_1061BE18[4 * (v33 & 0xFFF) + 2] == v4 ? *v3 : 0;
          if ( *(char **)(v6 + 92) == "npc_antlionguard" || sub_100D6240((_DWORD *)v6, "npc_antlionguard") )
            return 0;
        }
      }
    }
  }
  if ( (v35 & 1) != 0 && (v35 & 0x10) == 0 )
  {
    v8 = v32 == -1 || off_1061BE18[4 * (v32 & 0xFFF) + 2] != v32 >> 12 ? 0 : off_1061BE18[4 * (v32 & 0xFFF) + 1];
    v9 = *(_DWORD *)(v8 + 424);
    if ( !v9 || ((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 76))(v9) & 0x100) == 0 )
      return 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 3)
    && (*(_BYTE *)(a2 + 64) & 1) == 0 )
  {
    v34 = v34 * 0.75;
  }
  if ( (v35 & 1) != 0 && v34 > 100.0 )
    v34 = 100.0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)this + 2120))(this, v28) )
  {
    v10 = *(_DWORD *)(a2 + 40);
    if ( v10 != -1 )
    {
      v11 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
      v12 = v10 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v12 )
      {
        if ( *v11 )
        {
          v13 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v12 ? *v11 : 0;
          if ( (unsigned __int8)sub_103D2100(v13) )
            v34 = 50.0;
        }
      }
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10261B70((float *)(this + 580), 32.0, 8.0, 0.5, 512.0, 0, 0);
    v36 = v29;
    v38 = v31;
    v37 = v30;
    sub_10308620((_DWORD *)this, &v36);
    sub_10023CB0((char *)this, 18);
    v22[3] = 0.0;
    v22[4] = 0.0;
    v22[5] = 0.0;
    v22[12] = 0.0;
    v22[9] = 0.0;
    v22[13] = 0.0;
    v22[10] = 0.0;
    v22[17] = 0.0;
    v22[11] = 0.0;
    v23 = 0;
    v24 = 0;
    v22[14] = 1.0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v22[15] = 0.0;
    v22[16] = 0.0;
    v22[0] = v29;
    v22[1] = v30;
    v22[2] = v31;
    v22[6] = -*(float *)&v28[1];
    v22[7] = -*(float *)&v28[2];
    v22[8] = -*(float *)&v28[3];
    off_10689714();
    sub_1028E890((int)"HunterDamage", (int)v22);
    if ( (v35 & 1) != 0 )
      sub_1023C380((_DWORD *)this, (int)"NPC_AntlionGuard.ShellCrack", 0.0, 0);
    sub_1023C380((_DWORD *)this, (int)"NPC_AntlionGuard.Pain_Roar", 0.0, 0);
  }
  v39 = *(_DWORD *)(this + 220);
  v14 = sub_10035940((int *)this, 0, (int)v28);
  if ( !*(_BYTE *)(this + 3675) && !sub_10023D10((_DWORD *)this, 18) && (*(_BYTE *)(a2 + 64) & 2) != 0 )
  {
    v15 = *(int (__thiscall **)(int))(*(_DWORD *)this + 448);
    v41 = (float)*(int *)(this + 220);
    v42 = v15(this);
    if ( v41 / (double)v42 > 0.89999998 )
    {
      v16 = *(int (__thiscall **)(int))(*(_DWORD *)this + 448);
      v41 = (float)v39;
      v17 = v16(this);
      v43 = *(_DWORD *)(this + 220);
      v18 = v41 / (double)v17;
      v19 = *(int (__thiscall **)(int))(*(_DWORD *)this + 448);
      v40 = v18;
      v41 = (float)v43;
      v44 = v19(this);
      if ( v40 >= 0.94999999 && v41 / (double)v44 < 0.94999999 )
        goto LABEL_49;
    }
    v20 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)this + 448))(this) * 0.2;
    v40 = v20;
    v21 = (int)ceil((double)v39 / v20);
    if ( v21 != (int)ceil((double)*(int *)(this + 220) / v40) )
    {
LABEL_49:
      v36 = v29;
      v38 = v31;
      v37 = v30;
      sub_10308620((_DWORD *)this, &v36);
      sub_1023C380((_DWORD *)this, (int)"NPC_AntlionGuard.Pain_Roar", 0.0, 0);
      sub_10023CB0((char *)this, 18);
    }
  }
  return v14;
}
