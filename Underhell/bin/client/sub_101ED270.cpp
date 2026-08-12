int __thiscall sub_101ED270(int this, int a2)
{
  _DWORD *v2; // ebx
  int v4; // edi
  int v5; // edx
  unsigned __int8 (__cdecl *v7)(int, int); // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_101EB150((unsigned __int8 (__cdecl **)(int, int))this, a2, &v7, &a2);
  v4 = sub_101ECCA0((_DWORD *)this);
  sub_101EC970((_DWORD *)this, v4, (int)v7, a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  if ( 48 * v4 + v5 != -16 )
  {
    *(_DWORD *)(48 * v4 + v5 + 16) = *v2;
    sub_101ED010(48 * v4 + v5 + 20, v2 + 1);
  }
  return v4;
}
