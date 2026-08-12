void __thiscall sub_10057770(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v4; // ecx
  _DWORD *v5; // edx

  v2 = *(_DWORD **)a2;
  if ( *(_DWORD *)a2 && *(_DWORD *)(a2 + 4) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4);
    v5 = (_DWORD *)(v2[14] + 4 * (v4 >> 5));
    *v5 &= ~(1 << (v4 & 0x1F));
    sub_10055960(v2 + 2, *(_DWORD *)(a2 + 4));
    if ( v2[8] )
    {
      if ( (unsigned __int8)sub_103E0CF0(0) )
        sub_10056CE0(this, v2);
    }
    else
    {
      sub_10057220(this, (int)v2);
    }
  }
}
