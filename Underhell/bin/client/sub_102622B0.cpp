void __thiscall sub_102622B0(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  _DWORD *v6; // ecx
  int v7; // eax
  _DWORD *v8; // ecx

  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 940))(this);
  v4 = v3;
  if ( v3 )
  {
    v5 = 0;
    if ( v3 > 0 )
    {
      do
      {
        v6 = *(_DWORD **)(*(_DWORD *)(this[72] + 12 * (*(int (__thiscall **)(_DWORD *, int))(*this + 944))(this, v5)) + 8);
        if ( v6 )
        {
          v7 = sub_1022AD00(v6);
          sub_1022A7C0(a2, v7);
        }
        ++v5;
      }
      while ( v5 < v4 );
    }
    v8 = *(_DWORD **)(*(_DWORD *)(this[72] + 12 * (*(int (__thiscall **)(_DWORD *, int))(*this + 944))(this, v4 - 1)) + 8);
    if ( v8 )
      sub_10229CA0(v8, (int)a2);
  }
}
