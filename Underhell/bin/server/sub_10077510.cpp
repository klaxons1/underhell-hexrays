char __thiscall sub_10077510(int this, int a2)
{
  int v2; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-8h] BYREF

  v2 = a2;
  if ( a2 == 800 )
    v2 = 0;
  v6 = v2;
  LOBYTE(v4) = sub_10076390((_BYTE *)this, (int)&v6);
  if ( (_BYTE)v4 != 0xFF )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)v4 + 8);
    if ( v4 )
      *(_BYTE *)(v4 + 53) = 1;
  }
  return v4;
}
