int __thiscall sub_1038B390(int this, int a2, int a3, int a4)
{
  int v4; // eax
  _BYTE *v7; // ecx
  int v8; // [esp+4h] [ebp-4h] BYREF

  v4 = a2;
  if ( a2 == 91 )
    return 92;
  v7 = *(_BYTE **)(this + 3624);
  *(_BYTE *)(this + 3648) = 1;
  v8 = 0;
  if ( v7 )
  {
    if ( sub_101645F0(v7, a2, a3, a4, &v8) )
      return v8;
    v4 = a2;
  }
  return sub_10043EF0((_DWORD *)this, v4, a3, a4);
}
