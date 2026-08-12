void __thiscall sub_100A6890(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // ecx
  int v6; // eax

  v2 = *this;
  if ( !*this || (*(_BYTE *)(v2 + 32) & 8) == 0 )
  {
    v3 = *(_DWORD *)(v2 + 40);
    if ( v3 )
    {
      if ( (*(_BYTE *)(v2 + 32) & 4) != 0 )
        this[11] = *(_DWORD *)(v2 + 16);
      if ( v2 )
      {
        v4 = *(_DWORD *)(v2 + 40);
        if ( v4 )
          *(_DWORD *)(v4 + 44) = *(_DWORD *)(v2 + 44);
        v5 = *(_DWORD *)(v2 + 44);
        if ( v5 )
          *(_DWORD *)(v5 + 40) = *(_DWORD *)(v2 + 40);
        sub_1042FBE0(v2);
      }
      unknown_libname_2(v3);
      v6 = sub_100B99B0(this);
      if ( v6 )
        *(float *)(v6 + 20) = -1.0;
    }
    else
    {
      DevMsg("!!ERROR!! Force end of route with no goal!\n");
      *(_DWORD *)(*this + 32) |= 8u;
    }
  }
}
