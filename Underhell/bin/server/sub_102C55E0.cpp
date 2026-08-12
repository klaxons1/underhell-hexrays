int __thiscall sub_102C55E0(int this, int *a2, int *a3)
{
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // edi
  int v9; // ecx
  int v11; // [esp+8h] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+14h] [ebp-Ch]
  double v14; // [esp+18h] [ebp-8h]

  v4 = *a3;
  v11 = *a2;
  v5 = a3[1];
  v12 = v4;
  v6 = a3[2];
  v7 = a3[3];
  v13 = v5;
  v14 = COERCE_DOUBLE(__PAIR64__(v7, v6));
  sub_102C0620(
    (unsigned __int8 (__cdecl **)(int, int))this,
    (int)&v11,
    (unsigned __int8 (__cdecl **)(int, int))&a3,
    &a2);
  v8 = sub_102C0C90((_DWORD *)this);
  sub_102C4270((_DWORD *)this, v8, (int)a3, (char)a2);
  v9 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  if ( v9 + 40 * v8 != -16 )
  {
    *(_DWORD *)(v9 + 40 * v8 + 16) = v11;
    *(_DWORD *)(v9 + 40 * v8 + 24) = v12;
    *(_DWORD *)(v9 + 40 * v8 + 28) = v13;
    *(double *)(v9 + 40 * v8 + 32) = v14;
  }
  return v8;
}
