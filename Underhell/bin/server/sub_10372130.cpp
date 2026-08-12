char __thiscall sub_10372130(void *this, int a2)
{
  float v2; // edx
  int v3; // eax
  void (__thiscall *v4)(void *, float *, _DWORD, _DWORD); // edx
  double v5; // st7
  double v6; // st6
  _BYTE v8[48]; // [esp+18h] [ebp-64h] BYREF
  int v9[4]; // [esp+48h] [ebp-34h] BYREF
  float v10; // [esp+58h] [ebp-24h] BYREF
  float v11; // [esp+5Ch] [ebp-20h]
  float v12; // [esp+60h] [ebp-1Ch]
  int v13[3]; // [esp+64h] [ebp-18h] BYREF
  float v14; // [esp+70h] [ebp-Ch]
  float v15; // [esp+74h] [ebp-8h]
  int v16; // [esp+78h] [ebp-4h]

  v2 = *(float *)(a2 + 4);
  v14 = *(float *)a2;
  v3 = *(_DWORD *)(a2 + 8);
  v15 = v2;
  v4 = *(void (__thiscall **)(void *, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528);
  v16 = v3;
  v4(this, &v10, 0, 0);
  v5 = v10;
  v6 = v11;
  if ( v14 * v10 + v15 * v11 >= 0.5 )
    return 0;
  *(float *)v13 = *(float *)(a2 + 4) * v12 - *(float *)(a2 + 8) * v6;
  *(float *)&v13[1] = *(float *)(a2 + 8) * v5 - v12 * *(float *)a2;
  *(float *)&v13[2] = v6 * *(float *)a2 - v5 * *(float *)(a2 + 4);
  off_10689714();
  sub_104230F0((int)v13, -60.0, (int)v9);
  sub_10422FA0(v9, v8);
  sub_10421C00(&v10, v8, a2);
  off_10689714();
  return 1;
}
