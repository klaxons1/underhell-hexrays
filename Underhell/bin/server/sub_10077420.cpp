int __thiscall sub_10077420(int this)
{
  unsigned __int8 v2; // al
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = 0;
  v2 = sub_10076390((_BYTE *)this, (int)&v4);
  if ( v2 == 0xFF )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(this + 4) + 12 * v2 + 8);
}
