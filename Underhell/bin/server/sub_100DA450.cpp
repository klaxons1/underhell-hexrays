int *__thiscall sub_100DA450(_DWORD *this, int a2, int a3, int a4, float a5)
{
  int *result; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  int v8; // eax

  result = (int *)this[50];
  if ( result )
    return (int *)((int (__stdcall *)(int, int, int, _DWORD))result)(a2, a3, a4, LODWORD(a5));
  v6 = this[75];
  if ( v6 != -1 )
  {
    result = &off_1061BE18[4 * (v6 & 0xFFF) + 1];
    v7 = v6 >> 12;
    if ( result[1] == v7 )
    {
      if ( *result )
      {
        if ( result[1] == v7 )
          v8 = *result;
        else
          v8 = 0;
        return (int *)(*(int (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)v8 + 372))(
                        v8,
                        a2,
                        a3,
                        a4,
                        LODWORD(a5));
      }
    }
  }
  return result;
}
