void __thiscall sub_10081850(_DWORD *this)
{
  int v1; // esi
  int v2; // edi
  int v3; // edx
  int v4; // eax
  int v5; // edx

  v1 = this[3] - 1;
  if ( v1 >= 0 )
  {
    v2 = 48 * v1;
    do
    {
      v3 = *(_DWORD *)(*this + v2 + 40);
      v4 = v2 + *this;
      if ( v3 )
        *(_DWORD *)(v3 + 44) = *(_DWORD *)(v4 + 44);
      v5 = *(_DWORD *)(v4 + 44);
      if ( v5 )
        *(_DWORD *)(v5 + 40) = *(_DWORD *)(v4 + 40);
      v2 -= 48;
      --v1;
    }
    while ( v1 >= 0 );
  }
  this[3] = 0;
}
