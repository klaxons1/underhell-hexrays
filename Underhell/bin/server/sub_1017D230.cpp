void __thiscall sub_1017D230(float *this, float a2)
{
  float v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int *v5; // esi

  v2 = a2;
  a2 = this[203];
  v3 = *(_DWORD *)LODWORD(v2);
  v4 = *(_DWORD *)(LODWORD(v2) + 4);
  v5 = (int *)(this + 209);
  sub_1010C270(this + 209, 1, (__int16 *)&a2);
  sub_1010DA50(v5, *v5, v5[1], v5[2], v5[3], v5[4], __SPAIR64__(v4, v3), 0.0);
}
