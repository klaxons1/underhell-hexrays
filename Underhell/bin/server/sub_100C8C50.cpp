int __thiscall sub_100C8C50(_DWORD *this, int a2, _BYTE *a3)
{
  unsigned int v3; // ecx
  int result; // eax
  int *v5; // edx
  unsigned int v6; // ecx

  v3 = this[525];
  result = a2;
  if ( v3 != -1 && (v5 = &off_1061BE18[4 * (v3 & 0xFFF) + 1], v6 = v3 >> 12, v5[1] == v6) && *v5 )
  {
    if ( v5[1] == v6 )
      return (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)*v5 + 1324))(*v5, a2, a3);
    else
      return (*(int (__stdcall **)(int, _BYTE *))(MEMORY[0] + 1324))(a2, a3);
  }
  else if ( a3 )
  {
    *a3 = 0;
  }
  return result;
}
