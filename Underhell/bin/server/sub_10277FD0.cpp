int __thiscall sub_10277FD0(_DWORD *this, int a2, int a3)
{
  int v5; // eax
  float *v6; // edi
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st7
  double v11; // st7
  float *v12; // eax
  int v13; // edi
  double v14; // st7
  int v15; // eax
  int v16; // edi
  float *v17; // eax
  float v19; // [esp+2Ch] [ebp-ACh]
  _BYTE v20[84]; // [esp+3Ch] [ebp-9Ch] BYREF
  _BYTE v21[12]; // [esp+90h] [ebp-48h] BYREF
  float v22[3]; // [esp+9Ch] [ebp-3Ch] BYREF
  float v23[3]; // [esp+A8h] [ebp-30h] BYREF
  float v24; // [esp+B4h] [ebp-24h] BYREF
  float v25; // [esp+B8h] [ebp-20h]
  float v26; // [esp+BCh] [ebp-1Ch]
  float v27; // [esp+C0h] [ebp-18h] BYREF
  float v28; // [esp+C4h] [ebp-14h]
  float v29; // [esp+C8h] [ebp-10h]
  float v30; // [esp+CCh] [ebp-Ch] BYREF
  float v31; // [esp+D0h] [ebp-8h]
  float v32; // [esp+D4h] [ebp-4h]
  int savedregs; // [esp+D8h] [ebp+0h] BYREF
  int v34; // [esp+E4h] [ebp+Ch]

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10422220(this + 176, &v24);
  if ( sub_100D7680(a3) )
  {
    v5 = sub_100D7680(a3);
    v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 368))(v5);
    if ( v34 )
    {
      v6 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a3 + 968))(a3, &v27);
      v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v34 + 576))(v34);
      v30 = *v7 - *v6;
      v31 = v7[1] - v6[1];
      v32 = v7[2] - v6[2];
      off_10689714();
      v28 = v30;
      v29 = v31;
      v19 = v30 * v30 + v31 * v31;
      v8 = off_10689708(v19);
      v9 = 0.0;
      if ( 0.0 == v8 )
      {
        v11 = 0.0;
      }
      else
      {
        v10 = 1.0 / v8;
        v9 = v28 * v10;
        v11 = v10 * v29;
      }
      if ( v11 * v25 + v9 * v24 > 0.80000001 )
      {
        v24 = v30;
        v25 = v31;
        v26 = v32;
      }
    }
  }
  v12 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a3 + 968))(a3, &v30);
  v13 = *(_DWORD *)a3;
  v23[0] = v24 * 50.0 + *v12;
  v23[1] = v25 * 50.0 + v12[1];
  v23[2] = 50.0 * v26 + v12[2];
  v14 = *(float *)(dword_106D03BC + 44);
  v30 = 36.0;
  v31 = 36.0;
  v32 = 36.0;
  v27 = -16.0;
  v28 = -16.0;
  v29 = -16.0;
  v15 = (*(int (__thiscall **)(int, _BYTE *, float *, float *, float *, int, int, _DWORD, _DWORD))(v13 + 968))(
          a3,
          v21,
          v23,
          &v27,
          &v30,
          (int)v14,
          128,
          0.75,
          0);
  v16 = (*(int (__thiscall **)(int, int))(v13 + 1068))(a3, v15);
  if ( !v16 )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 1132))(this, 9);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 1132))(this, 10);
  if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
    sub_100DAE60(v16);
  v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 968))(a3);
  sub_1002A5F0((int)&savedregs, a3, v17, v22, v16 + 580, 100679691, a3, 0);
  return (*(int (__thiscall **)(_DWORD *, _BYTE *, int, _BYTE *))(*this + 1456))(this, v20, 1, v20);
}
