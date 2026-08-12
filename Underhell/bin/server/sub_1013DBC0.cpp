int __thiscall sub_1013DBC0(void *this, int a2)
{
  unsigned int v2; // eax
  int v4; // eax
  int result; // eax
  unsigned int v6; // edx
  int *v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx

  v2 = *(_DWORD *)(a2 + 44);
  if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v2 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
  result = (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 720))(this, 0, v4);
  if ( !(_BYTE)result )
  {
    v6 = *(_DWORD *)(a2 + 40);
    if ( v6 != -1 )
    {
      v7 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
      v8 = v6 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v8 )
      {
        if ( *v7 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v8 )
            v9 = *v7;
          else
            v9 = 0;
          return (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 720))(this, 0, v9);
        }
      }
    }
  }
  return result;
}
