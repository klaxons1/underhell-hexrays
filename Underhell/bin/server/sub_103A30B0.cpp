void __thiscall sub_103A30B0(int this, float *a2)
{
  int v2; // ebx
  int v4; // edi
  int v5; // eax
  float *v6; // ecx
  double v7; // st7
  int v8; // eax
  float v9; // [esp+30h] [ebp-94h]
  float v10; // [esp+3Ch] [ebp-88h]
  float v11; // [esp+3Ch] [ebp-88h]
  float v12; // [esp+40h] [ebp-84h]
  _BYTE v13[48]; // [esp+4Ch] [ebp-78h] BYREF
  float v14; // [esp+7Ch] [ebp-48h]
  float v15; // [esp+80h] [ebp-44h]
  float v16; // [esp+84h] [ebp-40h]
  float v17; // [esp+88h] [ebp-3Ch]
  float v18; // [esp+8Ch] [ebp-38h]
  char v19; // [esp+90h] [ebp-34h]
  _BYTE v20[12]; // [esp+94h] [ebp-30h] BYREF
  float v21[3]; // [esp+A0h] [ebp-24h] BYREF
  float v22[3]; // [esp+ACh] [ebp-18h] BYREF
  float v23; // [esp+B8h] [ebp-Ch]
  float v24; // [esp+BCh] [ebp-8h]
  float v25; // [esp+C0h] [ebp-4h]

  v2 = *((_DWORD *)a2 + 106);
  if ( v2 && ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 92))(*((_DWORD *)a2 + 106)) & 0x40) == 0 )
  {
    sub_1039E590((_DWORD *)this);
    *(_DWORD *)(this + 3812) = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 8))(a2);
    v4 = *(_DWORD *)(this + 424);
    sub_10422700(v13);
    v15 = 0.0;
    v16 = 0.0;
    v14 = 1.0;
    v17 = 1.0;
    v19 = 1;
    v18 = 1.0;
    sub_100CFD60(v13, v2, v4);
    v15 = 0.0;
    v19 = 1;
    v16 = 0.0;
    v14 = 1.0;
    v17 = 1.0;
    v18 = 1.0;
    v10 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v4 + 116))(v4, 200.0);
    v15 = sub_10247D70(v10, v12);
    v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 116))(v4);
    v16 = sub_10247D70(v11, 800.0);
    v5 = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 68))(dword_106BAFF4, v2, v4, 0);
    *(_DWORD *)(this + 3832) = v5;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 12))(v5, this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v6 = a2;
    if ( ((_DWORD)a2[63] & 0x800) != 0 )
    {
      sub_100DAE60((int)a2);
      v6 = a2;
    }
    v23 = v6[145] - *(float *)(this + 580);
    v24 = v6[146] - *(float *)(this + 584);
    v25 = v6[147] - *(float *)(this + 588);
    off_10689714();
    v25 = -0.75;
    off_10689714();
    v23 = v23 * 600.0;
    v24 = v24 * 600.0;
    v25 = 600.0 * v25;
    v7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 116))(v4);
    v8 = *(_DWORD *)(this + 252) >> 11;
    v22[0] = v23 * v7 * 10.0;
    v22[1] = v24 * v7 * 10.0;
    v22[2] = v7 * v25 * 10.0;
    if ( (v8 & 1) != 0 )
      sub_100DAE60(this);
    (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v2 + 240))(v2, v22, this + 580);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v2 + 212))(v2, this + 580, v20);
    v21[0] = 0.0;
    v21[1] = 0.0;
    v21[2] = 0.0;
    (*(void (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v4 + 196))(v4, v20, v21);
    sub_103A2F20(this);
    sub_103A0670((_DWORD *)this, (int)a2);
    v9 = RandomFloat(3.0, 6.0);
    sub_1010C7F0((float *)dword_10614CA8, this, "JoltVehicle", v9, 0, 0, 0);
  }
}
