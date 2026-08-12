void __thiscall sub_102B3000(int this)
{
  float v2; // [esp+0h] [ebp-18h]
  float v3[3]; // [esp+Ch] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  v2 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v2, 0);
  v3[0] = *(float *)(this + 488) * 1.02;
  v3[1] = *(float *)(this + 492) * 1.02;
  v3[2] = 1.02 * *(float *)(this + 496);
  sub_100D7260((float *)this, v3);
}
