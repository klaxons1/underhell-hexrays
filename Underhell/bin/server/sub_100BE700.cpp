char __thiscall sub_100BE700(int this, int a2, int a3)
{
  int v3; // edi
  _DWORD *v5; // esi
  int v7; // eax
  int v8[6]; // [esp+18h] [ebp-18h] BYREF

  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( !v5 || !*v5 )
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  if ( !v5 )
    return 0;
  v7 = sub_100BA9F0((int)v5, a2, (int)v8, 0.0, 1.0, 0);
  if ( !v7 )
    return 0;
  while ( v8[0] != a3 )
  {
    v7 = sub_100BA9F0((int)v5, a2, (int)v8, 0.0, 1.0, v7);
    if ( !v7 )
      return 0;
  }
  return 1;
}
