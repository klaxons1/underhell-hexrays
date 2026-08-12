void __thiscall sub_10180180(_DWORD *this)
{
  int i; // ebx
  int *v3; // edi
  bool v4; // sf
  int v5; // ecx

  for ( i = 0; i < this[3]; ++i )
  {
    v3 = *(int **)(*this + 4 * i);
    if ( v3 )
    {
      if ( *v3 && *(_BYTE *)*v3 )
      {
        sub_10034930(*v3);
        *v3 = 0;
      }
      sub_10034930((int)v3);
    }
  }
  v4 = (int)this[2] < 0;
  this[3] = 0;
  if ( v4 )
  {
    this[4] = *this;
  }
  else
  {
    if ( *this )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    v5 = *this;
    this[1] = 0;
    this[4] = v5;
  }
}
