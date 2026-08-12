int __thiscall sub_1027C6D0(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ecx
  int v6; // ecx
  _DWORD *v7; // edi

  v2 = this[56];
  v3 = 0;
  if ( v2 > 0 )
  {
    v4 = 0;
    do
    {
      if ( v3 >= 0 && v3 < v2 )
      {
        v5 = *(_DWORD *)(this[53] + v4 + 8);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 124))(v5, 0);
        v6 = *(_DWORD *)(this[53] + v4 + 8);
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 300))(v6);
      }
      v2 = this[56];
      ++v3;
      v4 += 36;
    }
    while ( v3 < v2 );
  }
  v7 = this + 53;
  sub_1027C630(this + 53);
  sub_1027C630(this + 53);
  if ( this[55] >= 0 )
  {
    if ( *v7 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v7);
      *v7 = 0;
    }
    this[54] = 0;
  }
  this[57] = this[53];
  this[79] = 0;
  (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  return sub_1027BE70(this);
}
