int __thiscall sub_100ED200(int this, int a2, int a3)
{
  int v3; // edx
  int result; // eax
  int v5; // esi
  int v6; // edi
  int v7; // edx
  int v8; // edi

  v3 = *(unsigned __int16 *)(this + 196);
  result = 0;
  if ( v3 != 0xFFFF )
  {
    while ( 1 )
    {
      v5 = 8 * (unsigned __int16)v3;
      v6 = *(_DWORD *)(v5 + *(_DWORD *)(this + 184));
      v7 = *(_DWORD *)(v6 + 8);
      v8 = v6 + 4;
      if ( v7 != v8 )
        break;
LABEL_5:
      v3 = *(unsigned __int16 *)(*(_DWORD *)(this + 184) + v5 + 6);
      if ( v3 == 0xFFFF )
        return result;
    }
    while ( 1 )
    {
      *(_DWORD *)(a3 + 4 * result++) = v7;
      if ( result == a2 )
        break;
      v7 = *(_DWORD *)(v7 + 4);
      if ( v7 == v8 )
        goto LABEL_5;
    }
  }
  return result;
}
