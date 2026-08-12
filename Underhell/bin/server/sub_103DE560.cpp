int *__thiscall sub_103DE560(int *this, _DWORD *a2)
{
  int v3; // edi
  int *v4; // eax
  int *v6; // ecx

  if ( *a2 )
    v3 = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
  else
    v3 = -1;
  if ( *this != v3 )
  {
    v4 = this - 228;
    if ( *((_BYTE *)this - 828) )
    {
      *((_BYTE *)v4 + 88) |= 1u;
      *this = v3;
      return this;
    }
    v6 = (int *)v4[6];
    if ( v6 )
      sub_100194B0(v6, 912);
    *this = v3;
  }
  return this;
}
