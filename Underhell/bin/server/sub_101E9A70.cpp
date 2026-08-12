unsigned int __thiscall sub_101E9A70(unsigned int *this)
{
  unsigned int *v1; // esi
  int v2; // edi
  unsigned int result; // eax
  int v4; // ecx

  v1 = this + 1006;
  v2 = 3;
  do
  {
    result = *v1;
    if ( *v1 != -1 )
    {
      result >>= 12;
      if ( off_1061BE18[4 * (*v1 & 0xFFF) + 2] == result )
      {
        v4 = off_1061BE18[4 * (*v1 & 0xFFF) + 1];
        if ( v4 )
          result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v4 + 840))(v4, 0, 0);
      }
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}
