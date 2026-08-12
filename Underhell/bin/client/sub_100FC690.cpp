int __thiscall sub_100FC690(int this, int a2)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v5; // ax
  _DWORD v6[7]; // [esp+4h] [ebp-24h] BYREF
  int v7; // [esp+20h] [ebp-8h] BYREF

  v7 = a2;
  v3 = sub_100FB8A0((_WORD *)(this + 92), (int)&v7);
  if ( v3 == 0xFFFF )
    return 0;
  v6[0] = *(_DWORD *)(*(_DWORD *)(this + 96) + 16 * v3 + 12);
  v5 = sub_100FBA60((_WORD *)(this + 120), (int)v6);
  if ( v5 == 0xFFFF )
    return 0;
  else
    return *(_DWORD *)(this + 124) + 36 * v5 + 12;
}
