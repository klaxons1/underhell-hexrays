int __thiscall sub_102648F0(int this, int a2)
{
  unsigned __int16 v3; // ax
  int v5; // [esp+4h] [ebp-8h] BYREF

  if ( a2 && (v5 = a2, v3 = sub_10263C00((_WORD *)(this + 4), (int)&v5), v3 != 0xFFFF) )
    return *(_DWORD *)(*(_DWORD *)(this + 8) + 16 * v3 + 12);
  else
    return 0;
}
