char __thiscall sub_100778E0(int this, int a2, char a3)
{
  int v3; // eax
  int v5; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF

  v3 = a2;
  if ( a2 == 800 )
    v3 = 0;
  v7 = v3;
  LOBYTE(v5) = sub_10076390((_BYTE *)this, (int)&v7);
  if ( (_BYTE)v5 != 0xFF )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)v5 + 8);
    if ( v5 )
      *(_BYTE *)(v5 + 54) = a3;
  }
  return v5;
}
