int __thiscall sub_100B66A0(int this, int a2)
{
  int v3; // eax
  int v5; // [esp+4h] [ebp-8h] BYREF

  if ( a2 && (v5 = a2, v3 = sub_100B4B40((unsigned __int8 (__cdecl **)(int, int))(this + 52), (int)&v5), v3 != -1) )
    return *(_DWORD *)(*(_DWORD *)(this + 56) + 24 * v3 + 20);
  else
    return 0;
}
