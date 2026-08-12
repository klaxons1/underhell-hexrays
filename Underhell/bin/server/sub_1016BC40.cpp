char __thiscall sub_1016BC40(float *this, int a2)
{
  int v2; // ebx
  int v3; // esi
  int i; // edi
  float *v6; // [esp+Ch] [ebp-4h]

  v2 = *((_DWORD *)this + 12);
  v3 = 0;
  v6 = this;
  if ( v2 <= 0 )
    return 1;
  for ( i = *((_DWORD *)this + 9); ; i += 16 )
  {
    if ( *(_DWORD *)i == a2 )
    {
      if ( *(_BYTE *)(i + 8) )
      {
        if ( sub_1016BC10(this) )
          return 0;
        this = v6;
      }
      if ( *(_DWORD *)(i + 12) )
        break;
    }
    if ( ++v3 >= v2 )
      return 1;
  }
  return (*(int (__cdecl **)(_DWORD))(*((_DWORD *)this + 9) + 16 * v3 + 12))(*(_DWORD *)this);
}
