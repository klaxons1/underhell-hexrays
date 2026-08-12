void __userpurge sub_103A1550(int *a1@<ecx>, int a2@<ebx>, int a3)
{
  int v3; // edi
  unsigned int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  float *v10; // eax
  int (__thiscall *v11)(int, int *); // eax
  float *v12; // eax
  double (__thiscall *v13)(int); // eax
  double v14; // st7
  int v15; // ebx
  float *v16; // ebx
  float *v17; // eax
  int v18; // ebx
  double v19; // st7
  int v20; // eax
  int v22[20]; // [esp+28h] [ebp-80h] BYREF
  int v23[3]; // [esp+78h] [ebp-30h] BYREF
  int v24; // [esp+84h] [ebp-24h] BYREF
  float v25; // [esp+88h] [ebp-20h]
  float v26; // [esp+8Ch] [ebp-1Ch]
  float v27; // [esp+90h] [ebp-18h] BYREF
  float v28; // [esp+94h] [ebp-14h]
  float v29; // [esp+98h] [ebp-10h]
  float v30; // [esp+9Ch] [ebp-Ch] BYREF
  float v31; // [esp+A0h] [ebp-8h]
  float v32; // [esp+A4h] [ebp-4h]

  v3 = a3;
  if ( (*(_BYTE *)(a3 + 356) & 0x28) != 0 )
    return;
  if ( *((_BYTE *)a1 + 3808) )
    return;
  v5 = a1[953];
  if ( v5 != -1 && off_1061BE18[4 * (a1[953] & 0xFFF) + 2] == v5 >> 12 && off_1061BE18[4 * (a1[953] & 0xFFF) + 1] )
    return;
  if ( *((float *)a1 + 946) > (double)*(float *)(dword_106B31C8 + 12) )
    return;
  v6 = (*(int (__thiscall **)(int *, int))(*a1 + 1080))(a1, a3);
  if ( v6 != 1 && v6 != 2 )
    return;
  v7 = a1[106];
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 576))(v3);
  v9 = *a1;
  a3 = v8;
  v10 = (float *)(*(int (__thiscall **)(int *))(v9 + 576))(a1);
  v30 = *v10 - *(float *)a3;
  v31 = v10[1] - *(float *)(a3 + 4);
  off_10689714();
  off_10689714();
  v30 = v30 * 600.0;
  v31 = v31 * 600.0;
  v32 = 600.0 * (float)0.75;
  *(float *)&a3 = sub_1039E620(a1) + *(float *)(dword_106B31C8 + 12);
  sub_1039FBD0((float *)a1 + 951, (float *)&a3);
  if ( (*((_BYTE *)a1 + 250) & 1) != 0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
    {
      v27 = -v30 * 0.5;
      v28 = -v31 * 0.5;
      v29 = 0.5 * -v32;
      sub_100EA150(v3, &v27);
    }
    return;
  }
  a1[49] = (int)sub_1039FD30;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v7 + 196))(v7, &v30);
  sub_1023C380(a1, (int)"NPC_RollerMine.Shock", 0.0, 0);
  sub_103A1230((int)a1, (_DWORD *)v3);
  v11 = *(int (__thiscall **)(int, int *))(*a1 + 576);
  *((float *)a1 + 946) = *(float *)(dword_106B31C8 + 12) + 1.25;
  v12 = (float *)v11((int)a1, v23);
  sub_10111A60((_BYTE *)(v3 + 320), v12, 0);
  v13 = *(double (__thiscall **)(int))(*(_DWORD *)v7 + 116);
  v27 = -v30;
  v28 = -v31;
  v29 = -v32;
  v14 = v13(v7);
  *(float *)&v24 = v27 * v14 * 10.0;
  v25 = v28 * v14 * 10.0;
  v26 = v14 * v29 * 10.0;
  sub_102487B0((int)v22, (int)a1, (int)a1, (float *)&v24, (float *)v23, *(float *)(dword_106EA704 + 44), 256, 0, 0);
  if ( *(char **)(v3 + 92) == "npc_combine_s" || sub_100D6240((_DWORD *)v3, "npc_combine_s") )
  {
    v15 = *(_DWORD *)(v3 + 220);
    if ( v15 <= (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 448))(v3) / 2 )
    {
      v16 = (float *)(*(int (__thiscall **)(int *, int))(*a1 + 576))(a1, a2);
      v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 576))(v3);
      v27 = *v17 - *v16;
      v28 = v17[1] - v16[1];
      v29 = v17[2] - v16[2];
      off_10689714();
      v18 = *(_DWORD *)(v3 + 424);
      if ( v18 )
      {
        v19 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)v18 + 116))(*(_DWORD *)(v3 + 424)) * 200.0;
        v27 = v27 * v19;
        v28 = v28 * v19;
        v29 = v19 * v29;
        v29 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v18 + 116))(v18) * 200.0;
      }
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 288))(v3);
      (*(void (__thiscall **)(int, int *, float *, _DWORD, int))(*(_DWORD *)v20 + 1064))(v20, a1, &v27, 5.0, 0x10000);
      return;
    }
    a3 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 448))(v3) / 2;
    *(float *)&v22[13] = (float)a3;
  }
  sub_100D9E70((int *)v3, (int)a1, v22);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
  {
    *(float *)&v24 = -v30;
    v25 = -v31;
    v26 = -v32;
    sub_100EA150(v3, (float *)&v24);
  }
}
