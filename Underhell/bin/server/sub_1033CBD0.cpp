char __thiscall sub_1033CBD0(int this)
{
  _DWORD *v2; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  dword_106E6538 = *sub_10162C20(&v4, (char)"weapon_shotgun");
  LOBYTE(v2) = (unsigned __int8)sub_100422B0((_DWORD *)this);
  if ( *(_BYTE *)(this + 4188) )
  {
    v2 = (_DWORD *)sub_100CF460((_DWORD *)this);
    if ( v2 )
      LOBYTE(v2) = sub_100EAB80(v2, 32);
  }
  return (char)v2;
}
