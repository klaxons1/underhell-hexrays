int __thiscall sub_10264940(int this, int a2)
{
  int v3; // [esp+4h] [ebp-8h] BYREF

  if ( !a2 )
    return *(_DWORD *)(*(_DWORD *)(this + 8) + 1048568);
  v3 = a2;
  return *(_DWORD *)(*(_DWORD *)(this + 8) + 16 * (unsigned __int16)sub_10263C00((_WORD *)(this + 4), (int)&v3) + 8);
}
