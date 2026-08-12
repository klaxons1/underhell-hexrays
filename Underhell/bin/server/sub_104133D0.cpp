void __thiscall sub_104133D0(int *this, int a2)
{
  float *v3; // eax
  float v4; // [esp+0h] [ebp-60h]
  _DWORD v5[20]; // [esp+10h] [ebp-50h] BYREF

  v4 = (float)this[55];
  sub_10248110((int)v5, (int)this, (int)this, v4, 64, 0);
  v3 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
  *(float *)&v5[4] = *v3;
  *(float *)&v5[5] = v3[1];
  *(float *)&v5[6] = v3[2];
  *(float *)&v5[1] = 0.0;
  *(float *)&v5[2] = 0.0;
  *(float *)&v5[3] = 1.0;
  sub_100D9E70(this, (int)this, v5);
}
