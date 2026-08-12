void __thiscall sub_1018F6A0(int *this, int a2)
{
  int *v2; // edi
  int v3; // esi
  int v4; // ecx
  int v5; // esi
  int v6; // ecx
  int v8; // [esp+10h] [ebp-4h]

  v2 = this + 131;
  v8 = 4;
  do
  {
    v3 = v2[3];
    if ( v3 != -1 )
    {
      v4 = *v2;
      while ( *(_DWORD *)(v4 + 12 * v3) != a2 )
      {
        v3 = *(_DWORD *)(v4 + 12 * v3 + 8);
        if ( v3 == -1 )
          goto LABEL_8;
      }
      sub_1018ED30(v2, v3);
      *(_DWORD *)(*v2 + 12 * v3 + 8) = v2[5];
      v2[5] = v3;
    }
LABEL_8:
    v2 += 9;
    --v8;
  }
  while ( v8 );
  v5 = this[192];
  if ( v5 != -1 )
  {
    v6 = this[189];
    while ( *(_DWORD *)(v6 + 12 * v5) != a2 )
    {
      v5 = *(_DWORD *)(v6 + 12 * v5 + 8);
      if ( v5 == -1 )
        return;
    }
    sub_1018ED30(this + 189, v5);
    *(_DWORD *)(this[189] + 12 * v5 + 8) = this[194];
    this[194] = v5;
  }
}
