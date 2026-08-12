int __usercall sub_103C5920@<eax>(float *a1@<ecx>, int a2@<esi>)
{
  void (__thiscall *v3)(float *, float *, int); // edx
  int v4; // eax
  int (__thiscall *v5)(float *); // edx
  int v6; // eax
  float *v7; // eax
  double v8; // st7
  int v9; // eax
  void (__thiscall *v10)(float *, _DWORD *); // edx
  int v11; // eax
  int v12; // eax
  int result; // eax
  _BYTE v15[12]; // [esp+34h] [ebp-DCh] BYREF
  _BYTE v16[12]; // [esp+40h] [ebp-D0h] BYREF
  float v17[12]; // [esp+4Ch] [ebp-C4h] BYREF
  int v18; // [esp+7Ch] [ebp-94h]
  int v19; // [esp+80h] [ebp-90h]
  float v20; // [esp+84h] [ebp-8Ch]
  float v21; // [esp+88h] [ebp-88h]
  float v22; // [esp+8Ch] [ebp-84h]
  int v23; // [esp+90h] [ebp-80h]
  __int16 v24; // [esp+94h] [ebp-7Ch]
  int v25; // [esp+98h] [ebp-78h]
  int v26; // [esp+9Ch] [ebp-74h]
  int v27; // [esp+A0h] [ebp-70h]
  char v28; // [esp+A4h] [ebp-6Ch]
  float v29[3]; // [esp+ACh] [ebp-64h] BYREF
  _DWORD v30[4]; // [esp+B8h] [ebp-58h] BYREF
  float v31[3]; // [esp+C8h] [ebp-48h] BYREF
  float v32; // [esp+D4h] [ebp-3Ch]
  float v33; // [esp+D8h] [ebp-38h]
  float v34; // [esp+DCh] [ebp-34h]
  float v35; // [esp+E0h] [ebp-30h]
  int v36; // [esp+E4h] [ebp-2Ch]
  int v37; // [esp+E8h] [ebp-28h]
  int v38; // [esp+ECh] [ebp-24h]
  int v39; // [esp+F0h] [ebp-20h]
  int v40; // [esp+F4h] [ebp-1Ch]
  int v41; // [esp+F8h] [ebp-18h]
  float v42; // [esp+FCh] [ebp-14h]
  float *v43; // [esp+100h] [ebp-10h]
  int v44; // [esp+104h] [ebp-Ch]
  __int16 v45; // [esp+108h] [ebp-8h]
  char v46; // [esp+10Bh] [ebp-5h]
  __int16 v47; // [esp+10Ch] [ebp-4h]

  v32 = 0.0;
  v33 = 0.0;
  v34 = 0.0;
  v3 = *(void (__thiscall **)(float *, float *, int))(*(_DWORD *)a1 + 504);
  v35 = 8192.0;
  v42 = 1.0;
  v30[0] = 1;
  v37 = 4;
  v39 = 0;
  v40 = 0;
  v43 = 0;
  v41 = 0;
  v44 = 0;
  v45 = 1;
  v38 = 0;
  v47 = 0;
  v46 = 0;
  v3(a1, v29, a2);
  (*(void (__thiscall **)(float *, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)a1 + 528))(a1, v15, 0, 0);
  v4 = *(_DWORD *)a1;
  *(float *)&v30[1] = v29[0];
  v5 = *(int (__thiscall **)(float *))(v4 + 368);
  *(float *)&v30[2] = v29[1];
  *(float *)&v30[3] = v29[2];
  v6 = v5(a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) )
  {
    v7 = (float *)(*(int (__thiscall **)(float *, _BYTE *, float *))(*(_DWORD *)a1 + 2104))(a1, v16, v29);
    v31[0] = *v7;
    v31[1] = v7[1];
    v31[2] = v7[2];
    v32 = flt_106F1CA8;
    v33 = flt_106F1CAC;
    v8 = flt_106F1CB0;
  }
  else
  {
    (*(void (__thiscall **)(float *, float *, _DWORD, _DWORD))(*(_DWORD *)a1 + 528))(a1, v31, 0, 0);
    v32 = a1[917];
    v33 = a1[918];
    v8 = a1[919];
  }
  v9 = *((_DWORD *)a1 + 912);
  v34 = v8;
  v10 = *(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)a1 + 432);
  v35 = 16384.0;
  v36 = v9;
  v37 = 1;
  v30[0] = 1;
  v43 = a1;
  v10(a1, v30);
  v17[0] = 0.0;
  v17[1] = 0.0;
  v17[2] = 0.0;
  v24 = 0;
  v11 = *((_DWORD *)a1 + 6);
  v17[3] = 0.0;
  v17[4] = 0.0;
  v18 = 0;
  v17[5] = 0.0;
  v19 = 0;
  v17[6] = 0.0;
  v23 = 0;
  v17[7] = 0.0;
  v25 = 0;
  v17[8] = 0.0;
  v26 = 0;
  v17[9] = 0.0;
  v27 = 0;
  v17[10] = 0.0;
  v28 = 0;
  v17[11] = 0.0;
  v20 = 1.0;
  v21 = 0.0;
  v22 = 0.0;
  v19 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v11);
  v12 = sub_100BEF30((int)a1, "eyes");
  v20 = 1.0;
  v23 = v12;
  v18 = 5;
  sub_1028E890((int)"MuzzleFlash", (int)v17);
  sub_1023C480(a1, (int)"NPC_FloorTurret.ShotSounds", (int)(a1 + 931), 0.0, 0);
  result = dword_106B31C8;
  a1[915] = *(float *)(dword_106B31C8 + 12) + 0.09;
  return result;
}
