int __thiscall sub_10278530(float *this, int a2, int a3)
{
  bool v3; // zf
  float *v4; // esi
  int v5; // edi
  int v6; // eax
  float *v7; // ebx
  float *v8; // eax
  float *v9; // eax
  int v10; // edx
  int v11; // ebx
  double v12; // st7
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v16; // esi
  double v17; // st7
  double v19; // st7
  float *v20; // ecx
  char v21[12]; // [esp+58h] [ebp-88h] BYREF
  char v22[12]; // [esp+64h] [ebp-7Ch] BYREF
  char v23[12]; // [esp+70h] [ebp-70h] BYREF
  float v24[3]; // [esp+7Ch] [ebp-64h] BYREF
  float v25[3]; // [esp+88h] [ebp-58h] BYREF
  float v26[3]; // [esp+94h] [ebp-4Ch] BYREF
  float v27[3]; // [esp+A0h] [ebp-40h] BYREF
  float v28[3]; // [esp+ACh] [ebp-34h] BYREF
  float v29; // [esp+B8h] [ebp-28h]
  float v30; // [esp+BCh] [ebp-24h]
  float v31; // [esp+C0h] [ebp-20h]
  float v32; // [esp+C4h] [ebp-1Ch] BYREF
  float v33; // [esp+C8h] [ebp-18h]
  float v34; // [esp+CCh] [ebp-14h]
  float *v35; // [esp+D0h] [ebp-10h]
  float v36; // [esp+D4h] [ebp-Ch] BYREF
  float v37; // [esp+D8h] [ebp-8h] BYREF
  float v38; // [esp+DCh] [ebp-4h]

  v3 = *(_DWORD *)a2 == 3001;
  v4 = this;
  v5 = a3;
  v35 = this;
  if ( !v3 )
    return sub_100CFE60(v4, a2, v5);
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10422220(v4 + 176, &v32);
  if ( sub_100D7680(v5) )
  {
    v6 = sub_100D7680(v5);
    a3 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 368))(v6);
    if ( a3 )
    {
      v7 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v5 + 968))(v5, v23);
      v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 576))(a3);
      v29 = *v8 - *v7;
      v30 = v8[1] - v7[1];
      v31 = v8[2] - v7[2];
      off_10689714();
      v37 = v29;
      v38 = v30;
      sub_10018C80(&v37);
      if ( v33 * v38 + v32 * v37 > 0.80000001 )
      {
        v32 = v29;
        v33 = v30;
        v34 = v31;
      }
    }
  }
  v9 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v5 + 968))(v5, v22);
  v10 = *(_DWORD *)v4;
  v11 = *(_DWORD *)v5;
  v24[0] = v32 * 32.0 + *v9;
  v24[1] = v33 * 32.0 + v9[1];
  v12 = 32.0 * v34 + v9[2];
  v13 = *((_DWORD *)v4 + 290);
  v24[2] = v12;
  v26[0] = 16.0;
  v26[1] = 16.0;
  v26[2] = 16.0;
  v28[0] = -16.0;
  v28[1] = -16.0;
  v28[2] = -40.0;
  (*(void (__thiscall **)(float *, int, int, _DWORD, _DWORD))(v10 + 1452))(v4, v13, 128, 0.5, 0);
  v14 = (*(int (__thiscall **)(int, char *, float *, float *, float *, int))(*(_DWORD *)v5 + 968))(
          v5,
          v21,
          v24,
          v28,
          v26,
          (int)0.5);
  v15 = (*(int (__thiscall **)(int, int))(v11 + 1068))(v5, v14);
  if ( !v15 )
  {
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v4 + 1132))(v4, 9);
    return sub_100CFE60(v4, a2, v5);
  }
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)v4 + 1132))(v4, 10);
  v16 = (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 320))(v15, 0.0) != 0 ? v15 : 0;
  a3 = __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseCombatCharacter `RTTI Type Descriptor',
         (int)&CNPC_MetroPolice `RTTI Type Descriptor',
         0);
  if ( !a3 )
    goto LABEL_14;
  if ( v16 )
  {
    if ( (unsigned __int8)sub_10389800(v15) )
    {
      v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -48.0,
              -24.0);
      v25[0] = -16.0;
      v25[1] = v17;
      v25[2] = 2.0;
      sub_100F7A60((float *)v16, v25);
      a2 = -1;
      sub_102600B0((int *)v16, &a2, 0.2, 1.0, 26);
      return sub_10389830(v15);
    }
    sub_10389D30(a3, v15);
LABEL_14:
    if ( v16 && (*(_DWORD *)(v16 + 256) & 0x4000) == 0 )
    {
      v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -48.0,
              -24.0);
      v27[0] = -16.0;
      v27[1] = v19;
      v27[2] = 2.0;
      sub_100F7A60((float *)v16, v27);
      v20 = v35;
      if ( ((_DWORD)v35[63] & 0x800) != 0 )
      {
        sub_100DAE60((int)v35);
        v20 = v35;
      }
      if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(v15);
        v20 = v35;
      }
      v36 = *(float *)(v15 + 580) - v20[145];
      v37 = *(float *)(v15 + 584) - v20[146];
      v38 = *(float *)(v15 + 588) - v20[147];
      if ( sub_101C5260((_DWORD *)v16) == v5 )
      {
        v36 = v32;
        v37 = v33;
        v38 = 0.0;
      }
      off_10689714();
      v3 = (*(_BYTE *)(v16 + 256) & 1) == 0;
      v36 = v36 * 500.0;
      v37 = v37 * 500.0;
      v38 = 500.0 * v38;
      if ( v3 )
        v38 = 0.0;
      sub_100EA150(v15, &v36);
      a3 = -2147483520;
      sub_102600B0((int *)v16, &a3, 0.5, 0.1, 1);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 1476))(v16, 0);
    }
  }
  v4 = v35;
  return sub_100CFE60(v4, a2, v5);
}
