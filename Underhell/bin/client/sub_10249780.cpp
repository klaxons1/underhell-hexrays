char __thiscall sub_10249780(unsigned int *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax

  v2 = this + 67;
  v3 = sub_10237C80(this + 67);
  if ( v3 )
  {
    LOBYTE(v3) = sub_10241360(this);
    if ( !(_BYTE)v3 )
    {
      v4 = sub_10237C80(v2);
      LOBYTE(v3) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 48))(v4, 0);
    }
  }
  return v3;
}
