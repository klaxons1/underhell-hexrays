int __thiscall sub_102C5560(int this, int *a2)
{
  int v3; // edi
  int v4; // edx
  int v6; // [esp+8h] [ebp-10h] BYREF
  int v7; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+10h] [ebp-8h]
  unsigned __int8 (__cdecl *v9)(int, int); // [esp+14h] [ebp-4h] BYREF

  v6 = *a2;
  v7 = 0;
  v8 = 0;
  sub_102C03B0((unsigned __int8 (__cdecl **)(int, int))this, (int)&v6, &v9, &a2);
  v3 = sub_102C0BB0((_DWORD *)this);
  sub_102C41F0((_DWORD *)this, v3, (int)v9, (char)a2);
  v4 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  if ( v4 + 28 * v3 != -16 )
  {
    *(_DWORD *)(v4 + 28 * v3 + 16) = v6;
    *(_DWORD *)(v4 + 28 * v3 + 20) = v7;
    *(_DWORD *)(v4 + 28 * v3 + 24) = v8;
  }
  return v3;
}
