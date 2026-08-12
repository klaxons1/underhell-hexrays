BOOL __thiscall sub_1004B240(_DWORD *this, int a2)
{
  int v3; // eax
  int v5; // ebx
  int i; // esi
  int v7; // eax
  _BYTE v8[4]; // [esp+4h] [ebp-4h] BYREF

  sub_10162C20(&a2, a2);
  if ( !this[699] )
    return sub_100CF460(this) && (v3 = sub_100CF460(this), *(_DWORD *)(v3 + 92) == a2);
  v5 = 0;
  for ( i = sub_100B1560(v8, 1); i; i = sub_100B1630(v8, 1) )
  {
    if ( sub_100CF460(i) )
    {
      v7 = sub_100CF460(i);
      if ( *(_DWORD *)(v7 + 92) == a2 )
        ++v5;
    }
  }
  return v5;
}
