int __thiscall sub_10051220(int this)
{
  double v3; // st7
  unsigned int v4; // eax
  int v5; // eax
  float *v6; // edi
  unsigned int v7; // eax
  int v8; // eax
  float *v9; // eax
  double v10; // st6
  double v11; // st5
  int v12; // esi
  float v13; // [esp+0h] [ebp-5Ch]
  float v14; // [esp+0h] [ebp-5Ch]
  float v15; // [esp+0h] [ebp-5Ch]
  _BYTE v16[76]; // [esp+10h] [ebp-4Ch] BYREF

  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 168) <= -0.001 )
    return 0;
  sub_10072560(v16);
  sub_10070FE0(900);
  sub_1042C170(3);
  if ( *(float *)(this + 40) >= (double)*(float *)(this + 52) )
    v3 = *(float *)(this + 40);
  else
    v3 = *(float *)(this + 52);
  v13 = v3;
  sub_10072770(this + 28, v13);
  v4 = *(_DWORD *)(this + 20);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 320) + 8))(v5 + 320);
  v7 = *(_DWORD *)(this + 20);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
  v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v8 + 320) + 4))(v8 + 320);
  v10 = v9[1] - v6[1];
  v11 = *v9 - *v6;
  v14 = v11 * v11 + v10 * v10;
  v15 = off_10689708(v14);
  sub_10072790(this + 28, v15);
  v12 = sub_10072EE0(*(_DWORD *)(this + 4), v16);
  sub_100725D0(v16);
  return v12;
}
