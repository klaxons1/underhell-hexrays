float *__thiscall sub_103EF560(_DWORD *this, int a2)
{
  double v3; // st4
  double v4; // rt1
  double v5; // st4
  double v6; // rt2
  double v7; // st4
  double v8; // st5
  double v9; // st2
  double v10; // rt2
  double v11; // st2
  double v12; // rtt
  double v13; // st2
  float *v14; // esi
  unsigned int v15; // eax
  void (__thiscall *v16)(float *); // edx
  float *result; // eax
  float *v18; // esi
  unsigned int v19; // eax
  void (__thiscall *v20)(float *); // eax
  float v21; // [esp+0h] [ebp-58h]
  float v22[3]; // [esp+Ch] [ebp-4Ch] BYREF
  float v23[3]; // [esp+18h] [ebp-40h] BYREF
  int v24[3]; // [esp+24h] [ebp-34h] BYREF
  int v25[3]; // [esp+30h] [ebp-28h] BYREF
  int v26[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  int v27[3]; // [esp+48h] [ebp-10h] BYREF
  float v28; // [esp+54h] [ebp-4h]

  sub_100BF1B0(this, "wheel_fr", (int)v27, 0, 0, 0);
  sub_100BF1B0(this, "wheel_fl", (int)v26, 0, 0, 0);
  sub_100BF1B0(this, "wheel_rr", (int)v25, 0, 0, 0);
  sub_100BF1B0(this, "wheel_rl", (int)v24, 0, 0, 0);
  v3 = (*(float *)v27 + *(float *)v26) * 0.5;
  v23[0] = v3;
  v4 = v3;
  v5 = (*(float *)&v27[1] + *(float *)&v26[1]) * 0.5;
  v23[1] = v5;
  v6 = v5;
  v7 = (*(float *)&v27[2] + *(float *)&v26[2]) * 0.5;
  v8 = v6;
  v23[2] = v7;
  v9 = (*(float *)v25 + *(float *)v24) * 0.5;
  v22[0] = v9;
  v10 = v9;
  v11 = (*(float *)&v25[1] + *(float *)&v24[1]) * 0.5;
  v22[1] = v11;
  v12 = v11;
  v13 = 0.5 * (*(float *)&v25[2] + *(float *)&v24[2]);
  v22[2] = v13;
  v21 = (v8 - v12) * (v8 - v12) + (v4 - v10) * (v4 - v10) + (v7 - v13) * (v7 - v13);
  v28 = off_10689708(v21) * 0.60000002;
  v14 = (float *)sub_101811E0("info_radial_link_controller", -1);
  if ( v14 )
  {
    v15 = this[528];
    if ( v15 == -1
      || off_1061BE18[4 * (this[528] & 0xFFF) + 2] != v15 >> 12
      || !off_1061BE18[4 * (this[528] & 0xFFF) + 1] )
    {
      v16 = *(void (__thiscall **)(float *))(*(_DWORD *)v14 + 96);
      v14[200] = v28;
      v16(v14);
      sub_100E0D20((int)v14, v23);
      (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v14 + 76))(v14, this);
      (*(void (__thiscall **)(float *, _DWORD *, int))(*(_DWORD *)v14 + 140))(v14, this, -1);
      (*(void (__thiscall **)(float *))(*(_DWORD *)v14 + 136))(v14);
      this[528] = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v14 + 8))(v14);
    }
  }
  result = (float *)sub_101811E0("info_radial_link_controller", -1);
  v18 = result;
  if ( result )
  {
    v19 = this[529];
    if ( v19 == -1
      || (result = (float *)(v19 >> 12), (float *)off_1061BE18[4 * (this[529] & 0xFFF) + 2] != result)
      || !off_1061BE18[4 * (this[529] & 0xFFF) + 1] )
    {
      v20 = *(void (__thiscall **)(float *))(*(_DWORD *)v18 + 96);
      v18[200] = v28;
      v20(v18);
      sub_100E0D20((int)v18, v22);
      (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v18 + 76))(v18, this);
      (*(void (__thiscall **)(float *, _DWORD *, int))(*(_DWORD *)v18 + 140))(v18, this, -1);
      (*(void (__thiscall **)(float *))(*(_DWORD *)v18 + 136))(v18);
      result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v18 + 8))(v18);
      this[529] = *(_DWORD *)result;
    }
  }
  return result;
}
