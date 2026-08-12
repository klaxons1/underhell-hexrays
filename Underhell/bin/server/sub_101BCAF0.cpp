void __thiscall sub_101BCAF0(void *this, int a2)
{
  float v3[3]; // [esp+4h] [ebp-18h] BYREF
  float v4[3]; // [esp+10h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a2 + 188))(a2, v4, v3);
  sub_100E0D20((int)this, v4);
  sub_100E0EA0((int)this, v3);
}
