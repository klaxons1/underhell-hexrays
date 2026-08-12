int __thiscall sub_101D4CB0(int this, int a2)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v5; // ax
  _DWORD v6[7]; // [esp+4h] [ebp-24h] BYREF
  int v7; // [esp+20h] [ebp-8h] BYREF

  v7 = a2;
  v3 = sub_101D43D0((_WORD *)(this + 96), (int)&v7);
  if ( v3 == 0xFFFF )
    return 0;
  v6[0] = *(_DWORD *)(*(_DWORD *)(this + 100) + 16 * v3 + 12);
  v5 = sub_101D4590((_WORD *)(this + 124), (int)v6);
  if ( v5 == 0xFFFF )
    return 0;
  else
    return *(_DWORD *)(this + 128) + 36 * v5 + 12;
}
