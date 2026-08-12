int __thiscall sub_10035E20(unsigned __int16 *this)
{
  int v2; // eax
  int v3; // edx

  v2 = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 356))(this);
  v3 = 128;
  if ( v2 == 1 )
  {
    v3 = 132;
  }
  else if ( v2 == 2 )
  {
    v3 = 136;
  }
  return (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_10413184 + 24))(
           dword_10413184,
           140,
           v3,
           this[195]);
}
