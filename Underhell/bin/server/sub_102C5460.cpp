int __thiscall sub_102C5460(int this, int a2)
{
  _DWORD *v2; // ebx
  int v4; // edi
  int v5; // edx
  unsigned __int8 (__cdecl *v7)(int, int); // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_102C0880((unsigned __int8 (__cdecl **)(int, int))this, a2, &v7, &a2);
  v4 = sub_102C0D70((_DWORD *)this);
  sub_102C42E0((_DWORD *)this, v4, (int)v7, a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  if ( v5 + 48 * v4 != -16 )
  {
    *(_DWORD *)(v5 + 48 * v4 + 16) = *v2;
    *(_DWORD *)(v5 + 48 * v4 + 24) = v2[2];
    *(_DWORD *)(v5 + 48 * v4 + 28) = v2[3];
    *(_DWORD *)(v5 + 48 * v4 + 32) = v2[4];
    *(_DWORD *)(v5 + 48 * v4 + 36) = v2[5];
    *(_DWORD *)(v5 + 48 * v4 + 40) = v2[6];
    *(_DWORD *)(v5 + 48 * v4 + 44) = v2[7];
  }
  return v4;
}
