int __thiscall sub_1011E490(int this, __int16 a2)
{
  int v3; // eax
  __int16 *v5; // [esp+4h] [ebp-8h] BYREF

  v5 = &a2;
  HIBYTE(a2) = 0;
  v3 = sub_100BB910((unsigned __int8 (__cdecl **)(int, int))(this + 128), (int)&v5);
  if ( v3 == -1 )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(this + 40) + 40 * *(_DWORD *)(*(_DWORD *)(this + 132) + 24 * v3 + 20) + 16);
}
