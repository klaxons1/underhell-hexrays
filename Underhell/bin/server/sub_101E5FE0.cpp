int __thiscall sub_101E5FE0(int *this, float *a2)
{
  float *v3; // eax
  float v5; // [esp+4h] [ebp-1Ch]
  float v6[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 576))(a2);
  v6[0] = *v3;
  v6[1] = v3[1];
  v6[2] = v3[2] + 32.0;
  sub_100E10C0((int)this, v6);
  sub_100E11A0((int)this, a2 + 182);
  (*(void (__thiscall **)(int *, float *))(*this + 76))(this, a2);
  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v5, 0);
}
