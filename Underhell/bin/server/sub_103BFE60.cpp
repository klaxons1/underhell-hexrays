int __userpurge sub_103BFE60@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, float *a3, float *a4, char a5)
{
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  int v10; // edi
  int (__thiscall *v11)(_DWORD *, int); // edx
  double v12; // st7
  int v13; // eax
  float *v14; // eax
  int v15; // eax
  void (__thiscall *v16)(_DWORD *, int *); // edx
  int v18; // [esp+18h] [ebp-70h]
  int v19; // [esp+24h] [ebp-64h] BYREF
  float v20; // [esp+28h] [ebp-60h]
  float v21; // [esp+2Ch] [ebp-5Ch]
  float v22; // [esp+30h] [ebp-58h]
  float v23; // [esp+34h] [ebp-54h]
  float v24; // [esp+38h] [ebp-50h]
  float v25; // [esp+3Ch] [ebp-4Ch]
  float v26; // [esp+40h] [ebp-48h]
  float v27; // [esp+44h] [ebp-44h]
  float v28; // [esp+48h] [ebp-40h]
  float v29; // [esp+4Ch] [ebp-3Ch]
  int v30; // [esp+50h] [ebp-38h]
  int v31; // [esp+54h] [ebp-34h]
  int v32; // [esp+58h] [ebp-30h]
  int v33; // [esp+5Ch] [ebp-2Ch]
  int v34; // [esp+60h] [ebp-28h]
  int v35; // [esp+64h] [ebp-24h]
  float v36; // [esp+68h] [ebp-20h]
  _DWORD *v37; // [esp+6Ch] [ebp-1Ch]
  int v38; // [esp+70h] [ebp-18h]
  __int16 v39; // [esp+74h] [ebp-14h]
  char v40; // [esp+77h] [ebp-11h]
  __int16 v41; // [esp+78h] [ebp-10h]
  float v42[3]; // [esp+7Ch] [ebp-Ch] BYREF

  v26 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v18 = a2;
  v29 = 8192.0;
  v19 = 1;
  v36 = 1.0;
  v31 = 4;
  v33 = 0;
  v34 = 0;
  v37 = 0;
  v35 = 0;
  v38 = 0;
  v39 = 1;
  v32 = 0;
  v41 = 0;
  v40 = 0;
  if ( a5 || !(*(int (__thiscall **)(_DWORD *, int))(*a1 + 368))(a1, a2) )
  {
    v9 = *a3;
    v31 = 1;
    v20 = v9;
    v19 = 1;
    v10 = *a1;
    v11 = *(int (__thiscall **)(_DWORD *, int))(*a1 + 368);
    v21 = a3[1];
    v22 = a3[2];
    v12 = *a4;
    v37 = a1;
    v23 = v12;
    v24 = a4[1];
    v25 = a4[2];
    v13 = v11(a1, v18);
    v14 = (float *)(*(int (__thiscall **)(_DWORD *, float *, _DWORD, int))(v10 + 1108))(a1, v42, 0, v13);
    v26 = *v14;
    v27 = v14[1];
    v8 = v14[2];
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, float *, float *, int))(*a1 + 2104))(a1, v42, a3, v18);
    v20 = *a3;
    v6 = a3[1];
    v31 = 1;
    v21 = v6;
    v19 = 1;
    v7 = a3[2];
    v37 = a1;
    v22 = v7;
    v23 = v42[0];
    v24 = v42[1];
    v25 = v42[2];
    v26 = flt_106F1CA8;
    v27 = flt_106F1CAC;
    v8 = flt_106F1CB0;
  }
  v15 = a1[932];
  v28 = v8;
  v16 = *(void (__thiscall **)(_DWORD *, int *))(*a1 + 432);
  v29 = 16384.0;
  v30 = v15;
  v16(a1, &v19);
  sub_1023C480(a1, (int)"NPC_FloorTurret.ShotSounds", (int)a1 + 3966, 0.0, 0);
  return (*(int (__thiscall **)(_DWORD *))(*a1 + 1116))(a1);
}
