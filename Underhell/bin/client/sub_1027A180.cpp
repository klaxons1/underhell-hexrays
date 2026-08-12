int __thiscall sub_1027A180(_DWORD *this)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // edi
  int v6; // edi

  result = (*(int (__thiscall **)(_DWORD *))(*this + 856))(this);
  v3 = this[79];
  if ( v3 )
  {
    v4 = 0;
    if ( v3 > 0 )
    {
      v5 = this[76];
      do
      {
        if ( *(_DWORD *)(*(_DWORD *)v5 + 292) == result )
          break;
        ++v4;
        v5 += 4;
      }
      while ( v4 < v3 );
      if ( v4 )
      {
        v6 = *(_DWORD *)(*(_DWORD *)(this[76] + 4 * v4 - 4) + 292);
        sub_10279CE0(this, (int)this, *(int (__thiscall ****)(_DWORD))(this[58] + 12 * v6));
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 928))(this, v6);
      }
    }
  }
  return result;
}
