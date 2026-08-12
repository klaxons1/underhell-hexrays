int __thiscall sub_100EA8F0(int *this)
{
  int *v1; // esi
  bool v2; // sf
  int result; // eax

  *this = (int)&CParticleProperty::`vftable';
  sub_100EA4D0(this, 0, 0, 1);
  v1 = this + 2;
  sub_100EA2A0(v1);
  if ( v1[2] >= 0 )
  {
    if ( *v1 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *v1);
      *v1 = 0;
    }
    v1[1] = 0;
  }
  v2 = v1[2] < 0;
  result = *v1;
  v1[4] = *v1;
  if ( !v2 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      *v1 = 0;
    }
    v1[1] = 0;
  }
  return result;
}
