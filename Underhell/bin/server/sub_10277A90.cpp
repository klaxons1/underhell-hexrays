int __thiscall sub_10277A90(_DWORD *this, int a2, int a3)
{
  int v5; // eax
  float *v6; // ebx
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st7
  double v11; // st7
  float *v12; // eax
  int v13; // ebx
  double v14; // st7
  int v15; // eax
  int v16; // ebx
  float *v17; // eax
  int result; // eax
  float v19; // [esp+2Ch] [ebp-ACh]
  _BYTE v20[76]; // [esp+3Ch] [ebp-9Ch] BYREF
  int v21; // [esp+88h] [ebp-50h]
  _BYTE v22[12]; // [esp+90h] [ebp-48h] BYREF
  _BYTE v23[12]; // [esp+9Ch] [ebp-3Ch] BYREF
  float v24[3]; // [esp+A8h] [ebp-30h] BYREF
  float v25; // [esp+B4h] [ebp-24h] BYREF
  float v26; // [esp+B8h] [ebp-20h]
  float v27; // [esp+BCh] [ebp-1Ch]
  float v28; // [esp+C0h] [ebp-18h] BYREF
  float v29; // [esp+C4h] [ebp-14h]
  float v30; // [esp+C8h] [ebp-10h]
  float v31; // [esp+CCh] [ebp-Ch] BYREF
  float v32; // [esp+D0h] [ebp-8h]
  float v33; // [esp+D4h] [ebp-4h]
  int savedregs; // [esp+D8h] [ebp+0h] BYREF
  int v35; // [esp+E4h] [ebp+Ch]
  float v36; // [esp+E4h] [ebp+Ch]

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10422220(this + 176, &v25);
  if ( sub_100D7680(a3) )
  {
    v5 = sub_100D7680(a3);
    v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 368))(v5);
    if ( v35 )
    {
      v6 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a3 + 968))(a3, &v28);
      v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v35 + 576))(v35);
      v31 = *v7 - *v6;
      v32 = v7[1] - v6[1];
      v33 = v7[2] - v6[2];
      off_10689714();
      v29 = v31;
      v30 = v32;
      v19 = v31 * v31 + v32 * v32;
      v8 = off_10689708(v19);
      v9 = 0.0;
      if ( 0.0 == v8 )
      {
        v11 = 0.0;
      }
      else
      {
        v10 = 1.0 / v8;
        v9 = v29 * v10;
        v11 = v10 * v30;
      }
      if ( v11 * v26 + v9 * v25 > 0.80000001 )
      {
        v25 = v31;
        v26 = v32;
        v27 = v33;
      }
    }
  }
  v36 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 1448))(this);
  v12 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a3 + 968))(a3, &v31);
  v13 = *(_DWORD *)a3;
  v24[0] = v25 * v36 + *v12;
  v24[1] = v26 * v36 + v12[1];
  v24[2] = v36 * v27 + v12[2];
  v14 = *(float *)(dword_106D020C + 44);
  v31 = 36.0;
  v32 = 36.0;
  v33 = 36.0;
  v28 = -16.0;
  v29 = -16.0;
  v30 = -16.0;
  v15 = (*(int (__thiscall **)(int, _BYTE *, float *, float *, float *, int, int, _DWORD, _DWORD))(v13 + 968))(
          a3,
          v22,
          v24,
          &v28,
          &v31,
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
  v17 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 968))(a3, v23);
  result = sub_1002A5F0((int)&savedregs, a3, v17, (float *)(v16 + 580), 100679691, a3, 0, (int)v20);
  if ( v21 )
    return (*(int (__thiscall **)(_DWORD *, _BYTE *, const char *))(*this + 304))(this, v20, "blood_hit");
  return result;
}
