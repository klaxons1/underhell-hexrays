int *__thiscall sub_100DA3D0(_DWORD *this, int a2)
{
  int *result; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  result = (int *)this[51];
  if ( result )
    result = (int *)((int (__stdcall *)(int))result)(a2);
  v4 = this[75];
  if ( v4 != -1 )
  {
    result = &off_1061BE18[4 * (this[75] & 0xFFF) + 1];
    v5 = v4 >> 12;
    if ( off_1061BE18[4 * (this[75] & 0xFFF) + 2] == v5 )
    {
      if ( *result )
      {
        if ( off_1061BE18[4 * (this[75] & 0xFFF) + 2] == v5 )
          return (int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)*result + 392))(*result, a2);
        else
          return (int *)(*(int (__thiscall **)(_DWORD, int))(MEMORY[0] + 392))(0, a2);
      }
    }
  }
  return result;
}
