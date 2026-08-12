char __thiscall sub_1032ECA0(_DWORD *this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // edi

  v2 = 0;
  if ( (int)this[910] <= 0 )
  {
LABEL_5:
    v4 = this[906];
    this[906] = 0;
    if ( v4 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 32))(v4);
      sub_1004AF00(this);
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 2224))(this, v4, 0);
    }
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(4 * v2 + this[907]);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 24))(v3) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 2228))(this, *(_DWORD *)(this[907] + 4 * v2)) )
          break;
      }
      if ( ++v2 >= this[910] )
        goto LABEL_5;
    }
    sub_10164AB0(this, *(_DWORD *)(this[907] + 4 * v2));
    return 1;
  }
}
