void __userpurge sub_1040DA90(float *a1@<ecx>, int a2@<ebx>, int a3@<edi>, _DWORD *a4, int a5)
{
  bool v5; // zf
  int v7; // edi
  int v8; // eax
  float *v9; // ebx
  float *v10; // eax
  float *v11; // eax
  int v12; // edx
  int v13; // ebx
  double v14; // st7
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // esi
  _BYTE *v19; // eax
  double v20; // st7
  double v21; // st7
  float *v22; // ecx
  int v23; // [esp+4Ch] [ebp-94h]
  int v24; // [esp+4Ch] [ebp-94h]
  int v25; // [esp+50h] [ebp-90h]
  char v26[12]; // [esp+58h] [ebp-88h] BYREF
  char v27[12]; // [esp+64h] [ebp-7Ch] BYREF
  char v28[12]; // [esp+70h] [ebp-70h] BYREF
  float v29[3]; // [esp+7Ch] [ebp-64h] BYREF
  float v30[3]; // [esp+88h] [ebp-58h] BYREF
  float v31[3]; // [esp+94h] [ebp-4Ch] BYREF
  float v32[3]; // [esp+A0h] [ebp-40h] BYREF
  float v33[3]; // [esp+ACh] [ebp-34h] BYREF
  float v34; // [esp+B8h] [ebp-28h]
  float v35; // [esp+BCh] [ebp-24h]
  float v36; // [esp+C0h] [ebp-20h]
  float v37; // [esp+C4h] [ebp-1Ch] BYREF
  float v38; // [esp+C8h] [ebp-18h]
  float v39; // [esp+CCh] [ebp-14h]
  float *v40; // [esp+D0h] [ebp-10h]
  float v41; // [esp+D4h] [ebp-Ch] BYREF
  float v42; // [esp+D8h] [ebp-8h] BYREF
  float v43; // [esp+DCh] [ebp-4h]
  int v44; // [esp+E8h] [ebp+8h]

  v5 = *a4 == 3001;
  v40 = a1;
  if ( !v5 )
  {
    sub_100CFE60(a1, (int)a4, a5);
    return;
  }
  if ( ((_DWORD)a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v25 = a2;
  v23 = a3;
  sub_10422220(a1 + 176, &v37);
  v7 = a5;
  if ( sub_100D7680(a5) )
  {
    v8 = sub_100D7680(v7);
    a5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 368))(v8, v23, a2);
    if ( a5 )
    {
      v9 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v7 + 968))(v7, v28);
      v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a5 + 576))(a5);
      v34 = *v10 - *v9;
      v35 = v10[1] - v9[1];
      v36 = v10[2] - v9[2];
      off_10689714();
      v42 = v34;
      v43 = v35;
      sub_10018C80(&v42);
      if ( v38 * v43 + v37 * v42 > 0.80000001 )
      {
        v37 = v34;
        v38 = v35;
        v39 = v36;
      }
    }
  }
  v11 = (float *)(*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)v7 + 968))(v7, v27, v23, v25);
  v12 = *(_DWORD *)a1;
  v13 = *(_DWORD *)v7;
  v29[0] = v37 * 32.0 + *v11;
  v29[1] = v38 * 32.0 + v11[1];
  v14 = 32.0 * v39 + v11[2];
  v15 = *((_DWORD *)a1 + 290);
  v29[2] = v14;
  v31[0] = 16.0;
  v31[1] = 16.0;
  v31[2] = 16.0;
  v33[0] = -16.0;
  v33[1] = -16.0;
  v33[2] = -40.0;
  (*(void (__thiscall **)(float *, int, int, _DWORD, _DWORD))(v12 + 1452))(a1, v15, 128, 0.5, 0);
  v16 = (*(int (__thiscall **)(int, char *, float *, float *, float *, int))(*(_DWORD *)v7 + 968))(
          v7,
          v26,
          v29,
          v33,
          v31,
          (int)0.5);
  v17 = (*(int (__thiscall **)(int, int))(v13 + 1068))(v7, v16);
  if ( v17 )
  {
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 1132))(a1, 10);
    v18 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 320))(v17) != 0 ? v17 : 0;
    v19 = (_BYTE *)__RTDynamicCast(
                     v7,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&CBaseCombatCharacter `RTTI Type Descriptor',
                     (int)&CNPC_MetroPolice `RTTI Type Descriptor',
                     0);
    v44 = (int)v19;
    if ( v19 )
    {
      if ( !v18 )
        return;
      if ( sub_10389800(v19, v17) )
      {
        v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -48.0,
                -24.0);
        v30[0] = -16.0;
        v30[1] = v20;
        v30[2] = 2.0;
        sub_100F7A60((float *)v18, v30);
        a5 = -1;
        sub_102600B0((int *)v18, &a5, 0.2, 1.0, 26);
        sub_10389830(v44, v17);
        return;
      }
      sub_10389D30(v44, v17);
    }
    if ( v18 && (*(_DWORD *)(v18 + 256) & 0x4000) == 0 )
    {
      v21 = ((double (__thiscall *)(int, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -48.0,
              -24.0,
              v24);
      v32[0] = -16.0;
      v32[1] = v21;
      v32[2] = 2.0;
      sub_100F7A60((float *)v18, v32);
      v22 = v40;
      if ( ((_DWORD)v40[63] & 0x800) != 0 )
      {
        sub_100DAE60((int)v40);
        v22 = v40;
      }
      if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(v17);
        v22 = v40;
      }
      v41 = *(float *)(v17 + 580) - v22[145];
      v42 = *(float *)(v17 + 584) - v22[146];
      v43 = *(float *)(v17 + 588) - v22[147];
      if ( sub_101C5260((_DWORD *)v18) == v7 )
      {
        v41 = v37;
        v42 = v38;
        v43 = 0.0;
      }
      off_10689714();
      v5 = (*(_BYTE *)(v18 + 256) & 1) == 0;
      v41 = v41 * 500.0;
      v42 = v42 * 500.0;
      v43 = 500.0 * v43;
      if ( v5 )
        v43 = 0.0;
      sub_100EA150(v17, &v41);
      a5 = -2147483520;
      sub_102600B0((int *)v18, &a5, 0.5, 0.1, 1);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v18 + 1476))(v18, 0);
    }
  }
  else
  {
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 1132))(a1, 9);
  }
}
