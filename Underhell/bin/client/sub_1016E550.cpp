int __cdecl sub_1016E550(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  float *v6; // eax
  int v7; // edx
  double v8; // st7
  int (__thiscall *v9)(_DWORD *); // eax
  float *v10; // eax
  int v11; // ecx
  int v12; // edx
  double v13; // st7
  int v14; // eax
  int v15; // eax
  float v17[6]; // [esp+Ch] [ebp-44h] BYREF
  _DWORD *v18; // [esp+24h] [ebp-2Ch]
  int v19; // [esp+28h] [ebp-28h]
  int v20; // [esp+2Ch] [ebp-24h]
  int v21; // [esp+30h] [ebp-20h]
  int v22; // [esp+34h] [ebp-1Ch]
  int v23; // [esp+38h] [ebp-18h]
  int v24; // [esp+3Ch] [ebp-14h]
  int v25; // [esp+40h] [ebp-10h]
  int v26; // [esp+44h] [ebp-Ch]
  int v27; // [esp+48h] [ebp-8h]
  __int16 v28; // [esp+4Ch] [ebp-4h]

  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = a2;
  if ( a1 )
    v18 = a1 + 1;
  else
    v18 = 0;
  v2 = a1[20];
  v28 = -1;
  v3 = a1[1];
  v24 = v2;
  v4 = (*(int (__thiscall **)(_DWORD *))(v3 + 36))(a1 + 1);
  v5 = a1[1];
  v19 = v4;
  v6 = (float *)(*(int (__thiscall **)(_DWORD *))(v5 + 4))(a1 + 1);
  v7 = a1[1];
  v17[0] = *v6;
  v17[1] = v6[1];
  v8 = v6[2];
  v9 = *(int (__thiscall **)(_DWORD *))(v7 + 8);
  v17[2] = v8;
  v10 = (float *)v9(a1 + 1);
  v11 = a1[299];
  v12 = a1[300];
  v17[3] = *v10;
  v17[4] = v10[1];
  v13 = v10[2];
  v14 = a1[301];
  v25 = v11;
  v17[5] = v13;
  v26 = v12;
  v27 = v14;
  v15 = sub_1016E4E0((unsigned __int16 *)&dword_103E9D04, (int)a1);
  if ( v15 )
    v22 = v15;
  return (*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_10413160 + 64))(dword_10413160, v17);
}
