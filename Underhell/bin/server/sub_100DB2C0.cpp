char __cdecl sub_100DB2C0(int *a1, int *a2, float *a3, float *a4)
{
  const char *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  int v10; // eax
  const char *v11; // eax
  const char *v12; // eax
  int v14; // esi
  int (__thiscall *v15)(int, _BYTE *); // edx
  float *v16; // eax
  int (__thiscall *v17)(int); // edx
  float *v18; // eax
  float *v19; // eax
  float v20; // [esp+14h] [ebp-84h]
  float v21; // [esp+18h] [ebp-80h]
  float v22; // [esp+1Ch] [ebp-7Ch]
  float v23; // [esp+34h] [ebp-64h]
  float v24[3]; // [esp+5Ch] [ebp-3Ch] BYREF
  _BYTE v25[12]; // [esp+68h] [ebp-30h] BYREF
  float v26[3]; // [esp+74h] [ebp-24h] BYREF
  float v27[3]; // [esp+80h] [ebp-18h] BYREF
  float v28; // [esp+8Ch] [ebp-Ch]
  float v29; // [esp+90h] [ebp-8h]
  float v30; // [esp+94h] [ebp-4h]
  int savedregs; // [esp+98h] [ebp+0h] BYREF

  *a2 = 0;
  v4 = String;
  if ( *a1 > 1 )
    v4 = (const char *)a1[259];
  v5 = atoi(v4);
  if ( v5 )
  {
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v5);
    if ( (v6 || (v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
      && (v7 = *(_DWORD *)(v6 + 12)) != 0 )
    {
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v9 = (char *)String;
    if ( *a1 > 1 )
      v9 = (char *)a1[259];
    v10 = sub_1012BF20(0, v9, 0, 0, 0, 0);
    *a2 = v10;
    if ( v10 )
      goto LABEL_19;
    v11 = String;
    if ( *a1 > 1 )
      v11 = (const char *)a1[259];
    v8 = sub_1012BC90(0, v11);
  }
  *a2 = v8;
  if ( !v8 )
  {
    v12 = String;
    if ( *a1 > 1 )
      v12 = (const char *)a1[259];
    Msg("Couldn't find any entity named '%s'\n", v12);
    return 0;
  }
LABEL_19:
  v14 = sub_10153490();
  if ( a3 )
  {
    sub_100F5A30(v26, 0, 0);
    v15 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v14 + 504);
    v28 = v26[0] * 56755.84;
    v29 = v26[1] * 56755.84;
    v30 = 56755.84 * v26[2];
    v16 = (float *)v15(v14, v25);
    v17 = *(int (__thiscall **)(int))(*(_DWORD *)v14 + 504);
    v27[0] = *v16 + v28;
    v27[1] = v16[1] + v29;
    v27[2] = v16[2] + v30;
    v18 = (float *)v17(v14);
    sub_1002A5F0((int)&savedregs, v14, v18, v24, (int)v27, 33701899, v14, 0);
    if ( 1.0 != v23 )
    {
      *a3 = v20;
      a3[1] = v21;
      a3[2] = v22;
    }
  }
  if ( a4 )
  {
    v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 508))(v14);
    *a4 = *v19;
    a4[1] = v19[1];
    a4[2] = v19[2];
  }
  return 1;
}
