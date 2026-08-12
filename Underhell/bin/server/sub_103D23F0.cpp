int __thiscall sub_103D23F0(int this, float a2)
{
  unsigned int v3; // eax
  int v4; // eax
  double v5; // st5
  int v6; // ecx
  int result; // eax
  int v8; // [esp+4h] [ebp-38h]
  float v9[3]; // [esp+Ch] [ebp-30h] BYREF
  float v10[3]; // [esp+18h] [ebp-24h] BYREF
  float v11[2]; // [esp+24h] [ebp-18h] BYREF
  float v12; // [esp+2Ch] [ebp-10h]
  float v13; // [esp+30h] [ebp-Ch] BYREF
  float v14; // [esp+34h] [ebp-8h]
  float v15; // [esp+38h] [ebp-4h]

  v8 = off_1067E55C;
  *(_WORD *)(this + 1143) = 1;
  sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), v8);
  sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), off_1067E554);
  v3 = *(_DWORD *)(this + 1168);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 1];
  if ( *(_BYTE *)(this + 1143) )
    v5 = 1.0;
  else
    v5 = 0.0;
  v11[0] = 1.0;
  v11[1] = 1.0;
  v12 = v5;
  v10[2] = v12;
  v10[0] = 0.0;
  v10[1] = 0.0;
  sub_10111860(v4 + 320, v10, v11, v9);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v13 = v9[0] - *(float *)(this + 580);
  v14 = v9[1] - *(float *)(this + 584);
  v15 = v9[2] - *(float *)(this + 588);
  off_10689714();
  v6 = *(_DWORD *)(this + 424);
  v13 = v13 * a2;
  v14 = v14 * a2;
  v15 = a2 * v15;
  result = (*(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v6 + 196))(v6, &v13, 0);
  *(float *)(this + 1148) = a2;
  return result;
}
