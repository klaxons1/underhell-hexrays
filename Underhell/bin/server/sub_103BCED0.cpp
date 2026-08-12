void __userpurge sub_103BCED0(int *a1@<ecx>, int a2@<edi>, float *a3, float *a4)
{
  float v5; // edx
  int (__thiscall *v6)(int *, int); // eax
  int v7; // eax
  float v8; // edx
  double v9; // st7
  double v10; // st7
  double v11; // st7
  int (__thiscall *v12)(int *, float *, _DWORD, _DWORD); // edx
  double v13; // st7
  float *v14; // eax
  int v15; // eax
  void (__thiscall *v16)(int *, int *); // edx
  int v17; // [esp+24h] [ebp-64h] BYREF
  float v18; // [esp+28h] [ebp-60h]
  float v19; // [esp+2Ch] [ebp-5Ch]
  float v20; // [esp+30h] [ebp-58h]
  float v21; // [esp+34h] [ebp-54h]
  float v22; // [esp+38h] [ebp-50h]
  float v23; // [esp+3Ch] [ebp-4Ch]
  float v24; // [esp+40h] [ebp-48h]
  float v25; // [esp+44h] [ebp-44h]
  float v26; // [esp+48h] [ebp-40h]
  float v27; // [esp+4Ch] [ebp-3Ch]
  int v28; // [esp+50h] [ebp-38h]
  int v29; // [esp+54h] [ebp-34h]
  int v30; // [esp+58h] [ebp-30h]
  int v31; // [esp+5Ch] [ebp-2Ch]
  int v32; // [esp+60h] [ebp-28h]
  int v33; // [esp+64h] [ebp-24h]
  float v34; // [esp+68h] [ebp-20h]
  int *v35; // [esp+6Ch] [ebp-1Ch]
  int v36; // [esp+70h] [ebp-18h]
  __int16 v37; // [esp+74h] [ebp-14h]
  char v38; // [esp+77h] [ebp-11h]
  __int16 v39; // [esp+78h] [ebp-10h]
  float v40[3]; // [esp+7Ch] [ebp-Ch] BYREF

  if ( (a1[62] & 0x100) != 0 )
  {
    sub_1023C380(a1, (int)"NPC_FloorTurret.DryFire", 0.0, 0);
    sub_1023C380(a1, (int)"NPC_CeilingTurret.Activate", 0.0, 0);
    if ( RandomFloat(0.0, 1.0) <= 0.7 )
      a1[908] = *(int *)(dword_106B31C8 + 12);
    else
      *((float *)a1 + 908) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                               dword_106B31E4,
                               0.5,
                               1.5)
                           + *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    v5 = *(float *)a1;
    v24 = 0.0;
    v6 = *(int (__thiscall **)(int *, int))(LODWORD(v5) + 368);
    v25 = 0.0;
    v26 = 0.0;
    v27 = 8192.0;
    v17 = 1;
    v29 = 4;
    v34 = 1.0;
    v31 = 0;
    v32 = 0;
    v35 = 0;
    v33 = 0;
    v36 = 0;
    v37 = 1;
    v30 = 0;
    v39 = 0;
    v38 = 0;
    v7 = v6(a1, a2);
    v8 = *(float *)a1;
    if ( v7 )
    {
      (*(void (__thiscall **)(int *, float *, float *))(LODWORD(v8) + 2104))(a1, v40, a3);
      v18 = *a3;
      v9 = a3[1];
      v29 = 1;
      v19 = v9;
      v17 = 1;
      v10 = a3[2];
      v35 = a1;
      v20 = v10;
      v21 = v40[0];
      v22 = v40[1];
      v23 = v40[2];
      v24 = flt_106F1CA8;
      v25 = flt_106F1CAC;
      v11 = flt_106F1CB0;
    }
    else
    {
      v12 = *(int (__thiscall **)(int *, float *, _DWORD, _DWORD))(LODWORD(v8) + 1108);
      v18 = *a3;
      v19 = a3[1];
      v29 = 1;
      v20 = a3[2];
      v17 = 1;
      v13 = *a4;
      v35 = a1;
      v21 = v13;
      v22 = a4[1];
      v23 = a4[2];
      v14 = (float *)v12(a1, v40, 0, 0);
      v24 = *v14;
      v25 = v14[1];
      v11 = v14[2];
    }
    v15 = a1[905];
    v26 = v11;
    v16 = *(void (__thiscall **)(int *, int *))(*a1 + 432);
    v27 = 16384.0;
    v28 = v15;
    v16(a1, &v17);
    sub_1023C380(a1, (int)"NPC_CeilingTurret.ShotSounds", 0.0, 0);
    (*(void (__thiscall **)(int *))(*a1 + 1116))(a1);
  }
}
