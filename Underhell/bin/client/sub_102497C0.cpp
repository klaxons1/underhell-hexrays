char __thiscall sub_102497C0(unsigned int *this, int a2)
{
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax

  v3 = this + 67;
  v4 = sub_10237C80(this + 67);
  if ( v4 )
  {
    LOBYTE(v4) = sub_10241360(this);
    if ( !(_BYTE)v4 )
    {
      v5 = sub_10237C80(v3);
      LOBYTE(v4) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 48))(v5, 0);
    }
  }
  return v4;
}
