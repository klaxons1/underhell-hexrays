bool __thiscall sub_100774C0(int this, int a2)
{
  int v2; // eax
  unsigned __int8 v4; // al
  int v6; // [esp+4h] [ebp-8h] BYREF

  v2 = a2;
  if ( a2 == 800 )
    v2 = 0;
  v6 = v2;
  v4 = sub_10076390((_BYTE *)this, (int)&v6);
  return v4 != 0xFF && *(_DWORD *)(*(_DWORD *)(this + 4) + 12 * v4 + 8) != 0;
}
