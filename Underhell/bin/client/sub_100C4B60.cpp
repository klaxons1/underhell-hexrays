int __thiscall sub_100C4B60(int this, int a2)
{
  _DWORD *v2; // edi
  int v4; // ebx
  int v5; // edx
  unsigned __int8 (__cdecl *v7)(int, int); // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_100C0DC0((unsigned __int8 (__cdecl **)(int, int))this, a2, &v7, &a2);
  v4 = sub_100C0FA0((_DWORD *)this);
  sub_100C2DB0((_DWORD *)this, v4, (int)v7, a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  if ( 32 * v4 + v5 != -16 )
  {
    *(_DWORD *)(32 * v4 + v5 + 16) = *v2;
    *(_DWORD *)(32 * v4 + v5 + 20) = v2[1];
    *(_DWORD *)(32 * v4 + v5 + 24) = v2[2];
    *(_DWORD *)(32 * v4 + v5 + 28) = v2[3];
  }
  return v4;
}
