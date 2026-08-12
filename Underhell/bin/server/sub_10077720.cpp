double __thiscall sub_10077720(int this, int a2)
{
  int v4; // eax
  unsigned __int8 v5; // al
  int v6; // eax
  int v7; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF

  if ( !a2 )
    return 0.0;
  v4 = a2;
  if ( a2 == 800 )
    v4 = 0;
  v8 = v4;
  v5 = sub_10076390((_BYTE *)this, (int)&v8);
  if ( v5 != 0xFF || (v7 = 0, v5 = sub_10076390((_BYTE *)this, (int)&v7), v5 != 0xFF) )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(this + 4) + 12 * v5 + 8);
    if ( v6 )
      return *(float *)(v6 + 32);
  }
  if ( a2 != 800 )
    DevWarning(2, "Asking FirstTimeSeen for enemy that's not in my memory!!\n");
  return -3.4028235e38;
}
