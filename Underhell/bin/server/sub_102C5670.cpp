int __thiscall sub_102C5670(int this, int *a2)
{
  int v3; // edi
  int v4; // edx
  int v6; // [esp+4h] [ebp-1Ch] BYREF
  int v7; // [esp+Ch] [ebp-14h]
  int v8; // [esp+10h] [ebp-10h]
  double v9; // [esp+14h] [ebp-Ch]
  unsigned __int8 (__cdecl *v10)(int, int); // [esp+1Ch] [ebp-4h] BYREF

  v9 = 0.0;
  v6 = *a2;
  v7 = 0;
  v8 = 0;
  sub_102C0620((unsigned __int8 (__cdecl **)(int, int))this, (int)&v6, &v10, &a2);
  v3 = sub_102C0C90((_DWORD *)this);
  sub_102C4270((_DWORD *)this, v3, (int)v10, (char)a2);
  v4 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  if ( v4 + 40 * v3 != -16 )
  {
    *(_DWORD *)(v4 + 40 * v3 + 16) = v6;
    *(_DWORD *)(v4 + 40 * v3 + 24) = v7;
    *(_DWORD *)(v4 + 40 * v3 + 28) = v8;
    *(double *)(v4 + 40 * v3 + 32) = v9;
  }
  return v3;
}
