float *__thiscall sub_102CC3D0(int this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  float *result; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  _BYTE v12[12]; // [esp+8h] [ebp-84h] BYREF
  float v13; // [esp+14h] [ebp-78h]
  float v14; // [esp+18h] [ebp-74h]
  float v15; // [esp+1Ch] [ebp-70h]
  float v16[3]; // [esp+5Ch] [ebp-30h] BYREF
  float v17[3]; // [esp+68h] [ebp-24h] BYREF
  float v18[3]; // [esp+74h] [ebp-18h] BYREF
  float v19[3]; // [esp+80h] [ebp-Ch] BYREF
  int savedregs; // [esp+8Ch] [ebp+0h] BYREF

  v3 = *(_DWORD *)(this + 920);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  v6 = sub_100D7680(v5);
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 368))(v6);
  if ( v7 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    result = (float *)(*(int (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)v7 + 520))(v7, v19, this + 580, 0);
    *a2 = *result;
    a2[1] = result[1];
    a2[2] = result[2];
    *(float *)(this + 1092) = *a2;
    *(float *)(this + 1096) = a2[1];
    *(float *)(this + 1100) = a2[2];
  }
  else if ( *(float *)(this + 1092) == flt_106F1CA8
         && *(float *)(this + 1096) == flt_106F1CAC
         && *(float *)(this + 1100) == flt_106F1CB0 )
  {
    v16[0] = 0.0;
    v16[1] = *(float *)(this + 944);
    v16[2] = 0.0;
    sub_10422220(v16, v17);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v9 = *(float *)(this + 1020) + *(float *)(this + 580);
    v19[0] = v9;
    v10 = *(float *)(this + 584) + *(float *)(this + 1024);
    v19[1] = v10;
    v11 = *(float *)(this + 588) + *(float *)(this + 1028);
    v19[2] = v11;
    v18[0] = v9 + v17[0] * 8192.0;
    v18[1] = v10 + v17[1] * 8192.0;
    v18[2] = 8192.0 * v17[2] + v11;
    sub_1002A5F0((int)&savedregs, this, v19, v18, 1174421507, this, 0, (int)v12);
    result = a2;
    *a2 = v13;
    a2[1] = v14;
    a2[2] = v15;
  }
  else
  {
    result = a2;
    *a2 = *(float *)(this + 1092);
    a2[1] = *(float *)(this + 1096);
    a2[2] = *(float *)(this + 1100);
  }
  return result;
}
