void __thiscall sub_103A76F0(int this, int a2)
{
  int v3; // eax
  bool v4; // al
  int v5; // edi

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  v4 = v3 != 0;
  *(_BYTE *)(this + 3880) = v4;
  if ( !v4 )
  {
    if ( *(_DWORD *)(this + 2420) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] != *(_DWORD *)(this + 2420) >> 12 )
    {
      v5 = 0;
    }
    else
    {
      v5 = off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1];
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) == v5 )
      sub_100285C0((_DWORD *)this, 0, 1);
    if ( *(_DWORD *)(this + 2336) != 4 )
      sub_100218B0((_DWORD *)this, 0);
    sub_10044830((_DWORD *)this, 5.0);
    *(float *)(this + 3856) = flt_106F1CA8;
    *(float *)(this + 3860) = flt_106F1CAC;
    *(float *)(this + 3864) = flt_106F1CB0;
    sub_100218B0((_DWORD *)this, 0);
    sub_103A6AF0((_DWORD *)this);
  }
}
