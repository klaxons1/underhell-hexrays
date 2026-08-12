char __thiscall sub_10142730(int this, int a2)
{
  int v3; // edi
  double v4; // st7
  double v5; // st4
  double v6; // st7
  float v8; // [esp+8h] [ebp-18h] BYREF
  float v9; // [esp+Ch] [ebp-14h]
  float v10; // [esp+10h] [ebp-10h]
  float v11; // [esp+14h] [ebp-Ch] BYREF
  float v12; // [esp+18h] [ebp-8h]
  float v13; // [esp+1Ch] [ebp-4h]

  v3 = sub_10116450();
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 16) = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  *(_DWORD *)(this + 20) = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3);
  v4 = (*(float *)(this + 52) * *(float *)(this + 180)
      + *(float *)(this + 184) * *(float *)(this + 56)
      + *(float *)(this + 188) * *(float *)(this + 60)
      - *(float *)(this + 192))
     * -2.0;
  *(float *)(this + 52) = v4 * *(float *)(this + 180) + *(float *)(this + 52);
  *(float *)(this + 56) = *(float *)(this + 184) * v4 + *(float *)(this + 56);
  *(float *)(this + 60) = v4 * *(float *)(this + 188) + *(float *)(this + 60);
  sub_101EE040(this + 64, &v8, 0, &v11);
  v5 = (*(float *)(this + 188) * v10 + *(float *)(this + 184) * v9 + v8 * *(float *)(this + 180)) * -2.0;
  v8 = v8 + v5 * *(float *)(this + 180);
  v9 = v9 + *(float *)(this + 184) * v5;
  v10 = v10 + v5 * *(float *)(this + 188);
  v6 = -2.0 * (*(float *)(this + 188) * v13 + *(float *)(this + 184) * v12 + v11 * *(float *)(this + 180));
  v11 = v11 + v6 * *(float *)(this + 180);
  v12 = v12 + *(float *)(this + 184) * v6;
  v13 = v6 * *(float *)(this + 188) + v13;
  sub_101EE270(&v8, &v11, this + 64);
  return 1;
}
