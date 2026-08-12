int __thiscall sub_10033CB0(int this, int a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int result; // eax

  sub_1002B830(this, a2);
  v3 = this - 8;
  if ( this != 8 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(this - 8);
  v4 = sub_100422D0();
  v5 = sub_1000BAC0((_DWORD *)(this - 8));
  if ( v4 && v4 == v5 && !(unsigned __int8)sub_10042310() )
  {
    if ( *(_DWORD *)(this + 2016)
      && !*(_DWORD *)(this + 2112)
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1276))(this - 8) )
    {
      v6 = sub_1014F570();
      if ( v6 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 112))(v6, this - 8);
      sub_101212D0((int)"Player.PickupWeapon", 0.0, 0);
    }
  }
  else
  {
    sub_10033970((_DWORD *)(this - 8));
  }
  result = sub_10039310(this - 8);
  *(_DWORD *)(this + 2112) = *(_DWORD *)(this + 2016);
  *(_BYTE *)(this + 2108) = 0;
  return result;
}
