void __thiscall sub_102033D0(int this, _DWORD *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // edx
  unsigned int v6; // eax
  int v7; // eax
  bool v8; // al
  __int64 v9; // [esp-4h] [ebp-14h]
  float v10; // [esp+4h] [ebp-Ch]

  v3 = *(_DWORD *)(this + 812);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  v6 = *(_DWORD *)(this + 808);
  if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1];
  v8 = sub_102032C0(this, v7, v5, COERCE_INT(*(float *)(this + 820)), 0);
  v10 = 0.0;
  HIDWORD(v9) = this;
  LODWORD(v9) = *a2;
  if ( v8 )
    sub_1010DD80((_DWORD *)(this + 832), v9, v10);
  else
    sub_1010DD80((_DWORD *)(this + 856), v9, v10);
}
