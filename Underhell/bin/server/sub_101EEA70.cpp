int __thiscall sub_101EEA70(unsigned int *this, int a2)
{
  int result; // eax
  unsigned int *v3; // esi
  unsigned int v4; // edi

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 6 && *(_BYTE *)(a2 + 8) )
  {
    v3 = this + 563;
    v4 = this[563] & 0xFFFFFFFB;
  }
  else
  {
    v3 = this + 563;
    v4 = this[563] | 4;
  }
  if ( *v3 != v4 )
  {
    result = (*(int (__thiscall **)(unsigned int *, unsigned int *))*(v3 - 15))(v3 - 15, v3);
    *v3 = v4;
  }
  return result;
}
