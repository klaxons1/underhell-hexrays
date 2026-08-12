void __thiscall sub_1018EF00(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  void (__thiscall ***v5)(_DWORD, int); // eax
  int v6; // ecx

  v2 = this[3];
  if ( v2 != -1 )
  {
    do
    {
      v3 = 3 * v2;
      v4 = *(_DWORD *)(*this + 4 * v3 + 8);
      v5 = *(void (__thiscall ****)(_DWORD, int))(*this + 4 * v3);
      if ( v5 )
        (**v5)(v5, 1);
      v2 = v4;
    }
    while ( v4 != -1 );
  }
  sub_1018EC70(this);
  if ( (int)this[2] >= 0 )
  {
    if ( *this )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  v6 = *this;
  this[5] = -1;
  this[7] = -1;
  this[8] = v6;
}
