int __thiscall sub_102C6030(_DWORD *this, int ArgList, char a3)
{
  int v5; // ecx
  int v6; // eax
  char Buffer[512]; // [esp+4h] [ebp-218h] BYREF
  _DWORD v8[4]; // [esp+204h] [ebp-18h] BYREF
  double v9; // [esp+214h] [ebp-8h]

  if ( !this[23] || !ArgList )
    return 0;
  sub_10429A00(Buffer, 0x200u, "%s_%s", ArgList);
  v5 = this[23];
  v9 = 0.0;
  v8[2] = 0;
  v8[3] = 0;
  v8[0] = Buffer;
  v6 = sub_102C2230((unsigned __int8 (__cdecl **)(int, int))(v5 + 140), (int)v8);
  if ( v6 == -1 )
    v6 = sub_102C5940((void *)(this[23] + 140), Buffer);
  return *(_DWORD *)(this[23] + 144) + 40 * v6 + 24;
}
