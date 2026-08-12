char __thiscall sub_1017BF00(int this, int a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *v4; // edx
  int v5; // eax

  v2 = 0;
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    return 0;
  v3 = *(_DWORD *)(this + 1080);
  if ( v3 > 0 )
  {
    v4 = (_DWORD *)(this + 928);
    do
    {
      if ( !*v4 )
        break;
      ++v2;
      ++v4;
    }
    while ( v2 < v3 );
  }
  if ( v2 != v3 )
    return 0;
  if ( *(_DWORD *)(this + 1084) && (v5 = sub_101679A0(*(_DWORD *)(this + 1084)), sub_10167A00(v5) != 1) )
    return 0;
  else
    return 1;
}
