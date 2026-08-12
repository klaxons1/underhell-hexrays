char __thiscall sub_10077840(int this, int a2)
{
  int v2; // eax
  unsigned __int8 v4; // al
  int v5; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF

  v2 = a2;
  if ( a2 == 800 )
    v2 = 0;
  v7 = v2;
  v4 = sub_10076390((_BYTE *)this, (int)&v7);
  if ( v4 == 0xFF )
    return 0;
  v5 = *(_DWORD *)(*(_DWORD *)(this + 4) + 12 * v4 + 8);
  if ( !v5 )
    return 0;
  else
    return *(_BYTE *)(v5 + 53);
}
