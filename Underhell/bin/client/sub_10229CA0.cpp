void __thiscall sub_10229CA0(_DWORD *this, int a2)
{
  int v2; // esi
  int i; // edi
  int v4; // eax

  v2 = this[6];
  for ( i = 0; v2; i = v4 )
  {
    v4 = sub_1022AD00(v2);
    if ( i )
      *(_DWORD *)(i + 20) = v4;
    else
      *(_DWORD *)(a2 + 24) = v4;
    *(_DWORD *)(v4 + 20) = 0;
    v2 = *(_DWORD *)(v2 + 20);
  }
}
