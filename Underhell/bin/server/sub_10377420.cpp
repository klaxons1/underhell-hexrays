int __thiscall sub_10377420(int *this, int a2, float a3)
{
  int v4; // eax
  int v5; // eax
  float *v7; // edi
  float *v8; // eax
  int (__thiscall *v9)(void *); // eax
  float *v10; // eax
  int v11; // edx
  double v12; // st7
  int (__thiscall *v13)(void *); // eax
  float *v14; // eax
  int v15; // eax
  _BYTE v16[44]; // [esp+4h] [ebp-90h] BYREF
  float v17; // [esp+30h] [ebp-64h]
  int v18; // [esp+50h] [ebp-44h]
  float v19[3]; // [esp+58h] [ebp-3Ch] BYREF
  float v20[3]; // [esp+64h] [ebp-30h] BYREF
  float v21[3]; // [esp+70h] [ebp-24h] BYREF
  float v22; // [esp+7Ch] [ebp-18h]
  float v23; // [esp+80h] [ebp-14h]
  float v24; // [esp+84h] [ebp-10h]
  float v25; // [esp+88h] [ebp-Ch]
  float v26; // [esp+8Ch] [ebp-8h]
  float v27; // [esp+90h] [ebp-4h]
  int savedregs; // [esp+94h] [ebp+0h] BYREF

  v4 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  if ( !v4 )
    return 0;
  if ( (*(_DWORD *)(v4 + 192) & 0x20) != 0 )
    return 0;
  v5 = *(_DWORD *)(v4 + 92);
  if ( v5 == dword_106E8514 || v5 == dword_106E8510 )
    return 0;
  v7 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 576))(a2);
  v25 = *v8 - *v7;
  v26 = v8[1] - v7[1];
  v27 = v8[2] - v7[2];
  off_10689714();
  v9 = *(int (__thiscall **)(void *))(*this + 576);
  v21[0] = 8.0;
  v21[1] = 8.0;
  v21[2] = 8.0;
  v19[0] = -8.0;
  v19[1] = -8.0;
  v19[2] = -8.0;
  v22 = v25 * 64.0;
  v23 = v26 * 64.0;
  v24 = 64.0 * v27;
  v10 = (float *)v9(this);
  v20[0] = *v10 + v22;
  v11 = *this;
  v20[1] = v10[1] + v23;
  v12 = v10[2] + v24;
  v13 = *(int (__thiscall **)(void *))(v11 + 576);
  v20[2] = v12;
  v14 = (float *)v13(this);
  sub_100231A0((int)&savedregs, (int)this, v14, v20, v19, v21, 1174421507, (int)this, 0, (int)v16);
  if ( 1.0 == v17 )
    return 39;
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1096))(a2);
  if ( v18 != v15 )
    return 39;
  if ( a3 >= 0.7 )
    return 23;
  return 40;
}
