int __thiscall sub_101E2940(int *this, int a2)
{
  float *v3; // eax
  float *v4; // eax
  float v6[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 576))(a2);
  v6[0] = *v3;
  v6[1] = v3[1];
  v6[2] = v3[2] + 32.0;
  sub_100E10C0((int)this, v6);
  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 508))(a2);
  sub_100E11A0((int)this, v4);
  (*(void (__thiscall **)(int *, int))(*this + 76))(this, a2);
  sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
  return sub_1023C380((int)"SprayCan.Paint", 0.0, 0);
}
