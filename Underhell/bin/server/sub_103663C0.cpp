void __thiscall sub_103663C0(int *this, float *a2, float *a3)
{
  int (__thiscall *v4)(int *, _BYTE *); // edx
  int v5; // eax
  _BYTE v6[12]; // [esp+8h] [ebp-18h] BYREF
  float v7[3]; // [esp+14h] [ebp-Ch] BYREF

  sub_10020480(this, 0x20000);
  sub_10020480(this, 2);
  sub_10020480(this, 8);
  v4 = *(int (__thiscall **)(int *, _BYTE *))(*this + 504);
  v7[0] = *a3 * 0.5;
  v7[1] = a3[1] * 0.5;
  v7[2] = 0.5 * a3[2];
  v5 = v4(this, v6);
  sub_10330EE0((int)this, v5, v7, 1, 1, COERCE_FLOAT(1));
  sub_1032F530(this, a2, (int)a3);
}
