unsigned int __thiscall sub_100CE740(_DWORD *this, const char *a2)
{
  unsigned int result; // eax
  unsigned int *v4; // ecx
  int *v5; // edx
  int v6; // esi
  _DWORD *v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // [esp+Ch] [ebp-4h]

  result = this[525];
  v4 = this + 525;
  if ( result != -1 )
  {
    v5 = &off_1061BE18[4 * (result & 0xFFF) + 1];
    result >>= 12;
    if ( v5[1] == result )
    {
      v6 = *v5;
      if ( *v5 )
      {
        sub_100C9FD0(v4, 0);
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 1132))(this, v6, 0);
      }
    }
  }
  v7 = this + 477;
  v11 = 48;
  do
  {
    if ( *v7 != -1 )
    {
      result = (unsigned int)&off_1061BE18[4 * (*v7 & 0xFFF) + 1];
      v8 = *v7 >> 12;
      if ( off_1061BE18[4 * (*v7 & 0xFFF) + 2] == v8 )
      {
        if ( *(_DWORD *)result )
        {
          v9 = off_1061BE18[4 * (*v7 & 0xFFF) + 2] == v8 ? *(_DWORD *)result : 0;
          result = strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1256))(v9), a2);
          if ( !result )
          {
            if ( *v7 == -1 || off_1061BE18[4 * (*v7 & 0xFFF) + 2] != *v7 >> 12 )
              v10 = 0;
            else
              v10 = off_1061BE18[4 * (*v7 & 0xFFF) + 1];
            (*(void (__thiscall **)(_DWORD *, int))(*this + 988))(this, v10);
            result = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 1356))(v10);
          }
        }
      }
    }
    ++v7;
    --v11;
  }
  while ( v11 );
  return result;
}
