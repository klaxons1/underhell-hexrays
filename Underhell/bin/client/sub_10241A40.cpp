int __thiscall sub_10241A40(int this, int a2)
{
  _DWORD *v2; // ebx
  int v4; // edi
  int v5; // edx
  unsigned __int8 (__cdecl *v7)(int, int); // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_1023C2C0((unsigned __int8 (__cdecl **)(int, int))this, a2, &v7, &a2);
  v4 = sub_10263B90(this);
  sub_1023EE00((_DWORD *)this, v4, (int)v7, a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  if ( v5 + 24 * v4 != -16 )
  {
    *(_DWORD *)(v5 + 24 * v4 + 16) = *v2;
    *(_DWORD *)(v5 + 24 * v4 + 20) = v2[1];
  }
  return v4;
}
