int __usercall sub_1011F1C0@<eax>(int a1@<esi>, _BYTE *a2, unsigned __int8 *a3, float *a4)
{
  int (__thiscall *v4)(int); // edx
  int *v5; // edi
  int v6; // ebx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  void (__stdcall *v11)(bool, int); // edx
  int v12; // eax
  int v13; // edx
  float *v14; // eax
  double v15; // st7
  int v16; // edi
  int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // esi
  int v21; // eax
  _DWORD v24[29]; // [esp+70h] [ebp-B4h] BYREF
  int v25[5]; // [esp+E4h] [ebp-40h] BYREF
  int v26[5]; // [esp+F8h] [ebp-2Ch] BYREF
  int v27; // [esp+10Ch] [ebp-18h] BYREF
  int v28; // [esp+110h] [ebp-14h] BYREF
  int v29; // [esp+114h] [ebp-10h]
  int v30; // [esp+118h] [ebp-Ch]
  int v31; // [esp+11Ch] [ebp-8h]
  char v32; // [esp+123h] [ebp-1h]
  char v33; // [esp+12Fh] [ebp+Bh]

  v4 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380);
  v5 = (int *)dword_10439968;
  v29 = dword_10439968;
  v6 = v4(dword_1047C96C);
  if ( v6 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  if ( (dword_10437750 & 1) == 0 )
  {
    dword_10437750 |= 1u;
    sub_10229600("r_drawviewmodel");
  }
  v8 = (unsigned __int8)a2[4];
  v9 = (unsigned __int8)a2[2];
  v33 = a2[5];
  v10 = (a2[1] != 0) | (v9 != 0 ? 2 : 0) | (v8 != 0 ? 0x10 : 0) | (a2[3] != 0 ? 0x20 : 0);
  v11 = **(void (__stdcall ***)(bool, int))dword_10437748;
  v30 = v10;
  v11(*a2 == 0, a1);
  if ( v33 )
  {
    if ( a2[6] )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 172))(v6, 1);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 200))(v6, a3[16], a3[20], a3[24]);
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v6 + 176))(v6, *a4);
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v6 + 180))(v6, a4[1]);
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v6 + 664))(v6, a4[2]);
    }
    else
    {
      sub_10144D10(v5);
    }
  }
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047C96C + 120))(dword_1047C96C, &v28, &v27);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 80))(v6, 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 84))(v6);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 28))(v6);
  v13 = *v5;
  v31 = v12;
  v14 = (float *)(*(int (__thiscall **)(int *))(v13 + 52))(v5);
  qmemcpy(v24, v14, sizeof(v24));
  *(float *)&v24[17] = v14[19];
  *(float *)&v24[18] = v14[20];
  *(float *)&v24[9] = v14[10];
  v15 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 352))(dword_1041315C);
  v16 = v31;
  *(float *)&v24[22] = v15;
  if ( v31 )
  {
    v24[2] = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 12))(v31);
    v24[3] = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 16))(v16);
  }
  else
  {
    v24[2] = v28;
    v24[3] = v27;
  }
  if ( (v30 & 1) != 0 )
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 292))(v6, *a3, a3[4], a3[8], a3[12]);
  v17 = *(_DWORD *)dword_10413168;
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 40))(v29);
  (*(void (__thiscall **)(int, _DWORD *, int, int, int))(v17 + 152))(dword_10413168, v24, v30, v31, v18);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 44))(v6, 0.0, 0.1);
  v25[2] = 32;
  v26[2] = 32;
  v25[0] = 0;
  v25[1] = 0;
  v25[3] = 0;
  v25[4] = 0;
  v26[0] = 0;
  v26[1] = 0;
  v26[3] = 0;
  v26[4] = 0;
  (*(void (__thiscall **)(void *, int *, int *))(*(_DWORD *)off_103DCDDC + 64))(off_103DCDDC, v25, v26);
  v32 = sub_1011EC10(v25);
  sub_1011DF40(v25, 0);
  if ( !v32 )
    sub_1011EC10(v26);
  sub_1011DF40(v26, 0x80000000);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 44))(v6, 0.0);
  v19 = v29;
  v20 = *(_DWORD *)dword_10413168;
  v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 40))(v29);
  (*(void (__thiscall **)(int, int))(v20 + 160))(dword_10413168, v21);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 80))(v6, 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 88))(v6);
  if ( v33 )
    sub_10144D10(v19);
  sub_1011A810(v26);
  sub_1011A810(v25);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
}
