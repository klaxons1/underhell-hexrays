int __thiscall sub_103E3810(float *this)
{
  int *v2; // esi
  float v4; // [esp+4h] [ebp-64h]
  float v5; // [esp+4h] [ebp-64h]
  int v6[20]; // [esp+18h] [ebp-50h] BYREF

  v2 = (int *)(this + 311);
  sub_1013D530(this + 311, &flt_106F1CB4, 0, 0, 512, 0, 0.0, 0, 0, -1);
  v4 = (float)*(int *)(dword_106EE2A4 + 48);
  sub_10248110((int)v6, (int)this, (int)this, v4, 64, 0);
  v6[4] = *v2;
  v6[5] = v2[1];
  v6[6] = v2[2];
  v5 = (float)*(int *)(dword_106EE2A4 + 48);
  return sub_100C9F20((int)v6, (int)v2, v5, 0, 0);
}
