int __thiscall sub_100F5750(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // ecx

  v1 = this[855];
  if ( v1 != -1 && (v2 = &off_1061BE18[4 * (this[855] & 0xFFF) + 1], v2[1] == v1 >> 12) && (v3 = *v2) != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 340))(v3);
  else
    return 0;
}
