double __thiscall sub_10077680(int this, int a2, char a3)
{
  int v5; // eax
  unsigned __int8 v6; // al
  int v7; // eax
  int v8; // [esp+8h] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-8h] BYREF

  if ( !a2 )
    return 0.0;
  v5 = a2;
  if ( a2 == 800 )
    v5 = 0;
  v9 = v5;
  v6 = sub_10076390((_BYTE *)this, (int)&v9);
  if ( v6 != 0xFF || a3 && (v8 = 0, v6 = sub_10076390((_BYTE *)this, (int)&v8), v6 != 0xFF) )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(this + 4) + 12 * v6 + 8);
    if ( v7 )
      return *(float *)(v7 + 28);
  }
  if ( a2 != 800 )
    DevWarning(2, "Asking LastTimeSeen for enemy that's not in my memory!!\n");
  return -3.4028235e38;
}
