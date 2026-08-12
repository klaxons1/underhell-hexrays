// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_103B7550@<eax>(_DWORD *a1@<ecx>, char *a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int *v5; // eax
  int v6; // eax
  int *v7; // eax
  int v8; // eax
  int v9; // ecx
  int (__thiscall *v10)(_DWORD *); // edx
  const char *v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  float v15; // eax
  char **v16; // ecx
  float v17; // edx
  double v18; // st7
  _DWORD *v19; // ecx
  int v20; // eax
  int (__thiscall *v21)(_DWORD *); // edx
  float *v22; // eax
  int result; // eax
  float v25[22]; // [esp+40h] [ebp-FCh] BYREF
  _BYTE v26[12]; // [esp+98h] [ebp-A4h] BYREF
  float v27[19]; // [esp+A4h] [ebp-98h] BYREF
  _DWORD v28[6]; // [esp+F0h] [ebp-4Ch] BYREF
  float v29[3]; // [esp+108h] [ebp-34h] BYREF
  float v30; // [esp+114h] [ebp-28h] BYREF
  char **v31; // [esp+118h] [ebp-24h]
  float v32; // [esp+11Ch] [ebp-20h]
  float v33; // [esp+120h] [ebp-1Ch] BYREF
  char *v34; // [esp+124h] [ebp-18h]
  float v35; // [esp+128h] [ebp-14h]
  char *v36[4]; // [esp+12Ch] [ebp-10h] BYREF
  char *retaddr; // [esp+13Ch] [ebp+0h]

  v36[1] = a2;
  v36[2] = retaddr;
  (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 100))(a1, a3, a4);
  v5 = sub_102D9B20();
  v6 = sub_100B9D10(v5, "StriderMinigun");
  v36[0] = "StriderMinigunDirect";
  a1[911] = v6;
  v7 = sub_102D9B20();
  v8 = sub_100B9D10(v7, v36[0]);
  v9 = a1[910];
  a1[912] = v8;
  sub_103B12B0(v9);
  sub_100BCD20(a1);
  v10 = *(int (__thiscall **)(_DWORD *))(*a1 + 28);
  v36[0] = (char *)v36;
  v11 = *(const char **)v10(a1);
  if ( !v11 )
    v11 = String;
  (*(void (__thiscall **)(_DWORD *, const char *))(*a1 + 104))(a1, v11);
  a1[427] = -1;
  a1[435] = 0;
  *((_BYTE *)a1 + 1713) = 0;
  j_nullsub_4(a1);
  sub_100E88A0(a1, 0);
  LOBYTE(v36[0]) = 0;
  a1[419] = 8;
  sub_10027A90((int)a1, (char)v36[0]);
  sub_10020F00((char *)a1);
  sub_100223F0(2);
  *((float *)a1 + 200) = 500.0;
  a1[420] = -1;
  a1[581] = 0;
  *((float *)a1 + 953) = 1.0;
  *((float *)a1 + 952) = 1.0;
  v36[0] = (char *)(int)*(float *)(dword_106EAE14 + 44);
  if ( (char *)a1[55] != v36[0] )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 464))(a1, a1 + 55);
    a1[55] = v36[0];
  }
  if ( a1[54] != 500 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 456))(a1, a1 + 54);
    a1[54] = 500;
  }
  v36[0] = (char *)1024;
  *((float *)a1 + 421) = 0.0;
  sub_100EA940(a1, (int)v36[0]);
  sub_100EBE30((int)a1, 28);
  sub_10112C00((int)(a1 + 80), 2);
  sub_101129A0((unsigned __int16 *)a1 + 160, *((_WORD *)a1 + 178) | 0x10);
  sub_100E0970((int)a1, v12, 3, 0);
  a1[63] |= 0x18000000u;
  v13 = *sub_10162BE0(v36, "weapon_striderbuster");
  v34 = "npc_grenade_magna";
  v33 = COERCE_FLOAT(v36);
  a1[907] = v13;
  v14 = *sub_10162BE0((_DWORD *)LODWORD(v33), v34);
  v32 = COERCE_FLOAT("npc_hunter");
  v31 = v36;
  a1[908] = v14;
  a1[909] = *sub_10162BE0(v31, (_BYTE *)LODWORD(v32));
  sub_101129A0((unsigned __int16 *)a1 + 160, *((_WORD *)a1 + 178) | 3);
  sub_103B2310((int)a1);
  sub_10020460(a1, 68943876);
  v15 = *((float *)a1 + 179);
  *(float *)&v28[3] = -16.0;
  v16 = (char **)a1[180];
  *(float *)&v28[4] = -16.0;
  v17 = *((float *)a1 + 181);
  *(float *)&v28[5] = -16.0;
  *((_WORD *)a1 + 530) |= 1u;
  v29[0] = 16.0;
  v29[1] = 16.0;
  v30 = v15;
  v29[2] = 16.0;
  v31 = v16;
  v32 = v17 - 1024.0;
  sub_1001F200(v25, &v33, &v30, (float *)LODWORD(v17), v29);
  sub_10265570(v28, (int)a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v25,
    147467,
    v28,
    v26);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v26, (int)v27, 255, 255, 0, 1, -1.0);
  if ( v27[8] >= 1.0 )
    v18 = v35;
  else
    v18 = v27[2];
  v35 = v18 + 490.0;
  sub_100E10C0((int)a1, &v33);
  (*(void (__thiscall **)(_DWORD *))(*a1 + 1164))(a1);
  (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*a1 + 1128))(a1, 21, 4, 0);
  *((_BYTE *)a1 + 3860) = 0;
  *((_BYTE *)a1 + 3865) = 1;
  *((float *)a1 + 947) = 8.0;
  *((float *)a1 + 948) = 16.0;
  *((float *)a1 + 946) = -1.0;
  a1[961] = -1;
  sub_103B7050((int)a1);
  v19 = (_DWORD *)dword_106B31C8;
  v20 = *a1;
  *((float *)a1 + 983) = *(float *)(dword_106B31C8 + 12);
  v33 = *(float *)&v19;
  *((float *)a1 + 724) = 6000.0;
  v21 = *(int (__thiscall **)(_DWORD *))(v20 + 1868);
  v33 = *(float *)(dword_106EB3FC + 44);
  v22 = (float *)v21(a1);
  sub_100756C0(v22, v33);
  a1[980] = -1;
  result = dword_106B31C8;
  *((float *)a1 + 977) = *(float *)(dword_106B31C8 + 12) - 1.0;
  return result;
}
