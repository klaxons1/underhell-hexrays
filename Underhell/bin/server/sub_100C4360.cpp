char __userpurge sub_100C4360@<al>(_DWORD *a1@<ecx>, int a2@<edi>, float *a3, char a4, _DWORD *a5)
{
  int *v6; // ecx
  int v7; // eax
  int (__thiscall *v8)(_DWORD *); // edx
  double v9; // st7
  float *v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  char *v14; // ecx
  _BYTE *v15; // edx
  char v16; // al
  char *v17; // ecx
  _BYTE *v18; // edx
  char v19; // al
  char *v20; // ecx
  _BYTE *v21; // edx
  char v22; // al
  char *v23; // ecx
  _BYTE *v24; // edx
  char v25; // al
  char *v26; // ecx
  _BYTE *v27; // edx
  char v28; // al
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  unsigned int v32; // esi
  int v33; // eax
  float v35; // [esp+10h] [ebp-6Ch]
  float v36; // [esp+14h] [ebp-68h]
  _BYTE v37[4]; // [esp+20h] [ebp-5Ch] BYREF
  float v38; // [esp+24h] [ebp-58h]
  float v39; // [esp+28h] [ebp-54h]
  float v40; // [esp+2Ch] [ebp-50h]
  float v41; // [esp+30h] [ebp-4Ch]
  float v42; // [esp+34h] [ebp-48h]
  float v43; // [esp+38h] [ebp-44h]
  int v44; // [esp+60h] [ebp-1Ch]
  float v45[3]; // [esp+70h] [ebp-Ch] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 764))(a1) )
    return 0;
  (*(void (__thiscall **)(_DWORD *, int))(*a1 + 592))(a1, a2);
  sub_101129A0(*((unsigned __int16 *)a1 + 178) | 4);
  if ( *((_BYTE *)a1 + 112) != 23 )
  {
    if ( *((_BYTE *)a1 + 84) )
    {
      *((_BYTE *)a1 + 88) |= 1u;
    }
    else
    {
      v6 = (int *)a1[6];
      if ( v6 )
        sub_100194B0(v6, 112);
    }
    *((_BYTE *)a1 + 112) = 23;
  }
  (*(void (__thiscall **)(_DWORD *, float *))(*a1 + 744))(a1, a3);
  sub_100C0DD0((float *)a1 + 209, v45);
  (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 140))(a1, 0, -1);
  sub_100EA940(0x20000000);
  sub_100E0970(0, 0);
  sub_100EC3F0(0, 0.0, 0);
  v35 = *(float *)(dword_106B31C8 + 12) + 2.0;
  sub_100EC4A0(v35, 0);
  if ( *(_DWORD *)(dword_106960A4 + 48) == -1 )
  {
    sub_1016B050(a1);
    sub_100EC3F0((int)sub_10246D70, 0.0, 0);
  }
  else
  {
    sub_10247EC0(v37);
    v7 = *a1;
    v38 = *a3;
    v8 = *(int (__thiscall **)(_DWORD *))(v7 + 576);
    v39 = a3[1];
    v9 = a3[2];
    v44 = 0;
    v40 = v9;
    v10 = (float *)v8(a1);
    v41 = *v10;
    v42 = v10[1];
    v43 = v10[2];
    v11 = sub_101D0270(a1, 0, v37, 0, 0);
    v12 = v11;
    if ( (a4 & 1) != 0 )
      sub_101AB3B0((int)"blood_advisor_puncture_withdraw", 4, v11, "Neck", 0);
    if ( (a4 & 2) != 0 )
      sub_101AB3B0((int)"blood_advisor_puncture_withdraw", 4, v12, "UpperArm_L", 0);
    if ( (a4 & 4) != 0 )
      sub_101AB3B0((int)"blood_advisor_puncture_withdraw", 4, v12, "UpperArm_R", 0);
    if ( (a4 & 8) != 0 )
      sub_101AB3B0((int)"blood_advisor_puncture_withdraw", 4, v12, "Thigh_L", 0);
    if ( (a4 & 0x10) != 0 )
      sub_101AB3B0((int)"blood_advisor_puncture_withdraw", 4, v12, "Thigh_R", 0);
    *(_DWORD *)(v12 + 260) = a1[65];
    sub_100EBE30(*(_DWORD *)(dword_106960A4 + 48));
    *(_BYTE *)(v12 + 1864) = 0;
    *(_DWORD *)(v12 + 4400) = *a5;
    *(_DWORD *)(v12 + 4404) = a5[1];
    *(_DWORD *)(v12 + 4408) = a5[2];
    *(_DWORD *)(v12 + 4412) = a5[3];
    *(_DWORD *)(v12 + 4416) = a5[4];
    *(_BYTE *)(v12 + 4392) = 1;
    *(_DWORD *)(v12 + 1860) = (*(int (__thiscall **)(_DWORD *))(*a1 + 276))(a1);
    v13 = __RTDynamicCast(
            (int)a1,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseAnimating `RTTI Type Descriptor',
            (int)&CNPC_CombineS `RTTI Type Descriptor',
            0);
    if ( v13 && *(_BYTE *)(v13 + 4977) )
      *(_DWORD *)(v12 + 4396) = 10;
    else
      *(_DWORD *)(v12 + 4396) = a1[202];
    v14 = (char *)a1[203];
    v15 = *(_BYTE **)(v12 + 1868);
    do
    {
      v16 = *v14;
      *v15++ = *v14++;
    }
    while ( v16 );
    v17 = (char *)a1[204];
    v18 = *(_BYTE **)(v12 + 1872);
    do
    {
      v19 = *v17;
      *v18++ = *v17++;
    }
    while ( v19 );
    v20 = (char *)a1[205];
    v21 = *(_BYTE **)(v12 + 1876);
    do
    {
      v22 = *v20;
      *v21++ = *v20++;
    }
    while ( v22 );
    v23 = (char *)a1[206];
    v24 = *(_BYTE **)(v12 + 1880);
    do
    {
      v25 = *v23;
      *v24++ = *v23++;
    }
    while ( v25 );
    v26 = (char *)a1[207];
    v27 = *(_BYTE **)(v12 + 1884);
    do
    {
      v28 = *v26;
      *v27++ = *v26++;
    }
    while ( v28 );
    if ( (a1[64] & 0x8000000) != 0 )
      sub_100C35E0((_BYTE *)(v12 + 116), a1[29], BYTE1(a1[29]), BYTE2(a1[29]));
    v29 = *(_DWORD *)(dword_10696134 + 48);
    if ( v29 && dword_106960D8 > v29 )
    {
      do
      {
        v30 = **(_DWORD **)(dword_106960D0 + 4);
        if ( v30 )
          sub_101CB960(v30);
        v31 = *(_DWORD *)(dword_106960D0 + 4);
        *(_DWORD *)(*(_DWORD *)(v31 + 8) + 4) = *(_DWORD *)(v31 + 4);
        *(_DWORD *)(*(_DWORD *)(v31 + 4) + 8) = *(_DWORD *)(v31 + 8);
        --dword_106960D8;
        sub_10184660(v31);
      }
      while ( dword_106960D8 > *(_DWORD *)(dword_10696134 + 48) );
    }
    sub_1016B050(a1);
    sub_1025FAC0(a1);
  }
  v32 = a1[104];
  if ( v32 == -1 || off_1061BE18[4 * (v32 & 0xFFF) + 2] != v32 >> 12 )
    v33 = 0;
  else
    v33 = off_1061BE18[4 * (v32 & 0xFFF) + 1];
  if ( __RTDynamicCast(
         v33,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CEntityFlame `RTTI Type Descriptor',
         0) )
  {
    sub_100EC3F0((int)sub_10246D70, 0.0, 0);
    v36 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0(v36, 0);
  }
  return 1;
}
