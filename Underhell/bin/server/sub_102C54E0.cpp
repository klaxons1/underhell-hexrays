int __thiscall sub_102C54E0(int this, int *a2, int *a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v4 = *a3;
  v5 = a3[1];
  v9 = *a2;
  v10 = v4;
  v11 = v5;
  sub_102C03B0((unsigned __int8 (__cdecl **)(int, int))this, (int)&v9, (unsigned __int8 (__cdecl **)(int, int))&a3, &a2);
  v6 = sub_102C0BB0((_DWORD *)this);
  sub_102C41F0((_DWORD *)this, v6, (int)a3, (char)a2);
  v7 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  if ( v7 + 28 * v6 != -16 )
  {
    *(_DWORD *)(v7 + 28 * v6 + 16) = v9;
    *(_DWORD *)(v7 + 28 * v6 + 20) = v10;
    *(_DWORD *)(v7 + 28 * v6 + 24) = v11;
  }
  return v6;
}
