int __thiscall sub_101E7EE0(int this, int a2)
{
  int v2; // ebx
  unsigned int v4; // eax
  int *v5; // ecx
  int result; // eax
  char *v7; // esi

  v2 = a2;
  v4 = *(_DWORD *)(this + 4 * a2 + 4024);
  if ( v4 == -1
    || (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 4 * a2 + 4024) & 0xFFF) + 1], result = v4 >> 12, v5[1] != result)
    || !*v5 )
  {
    result = sub_101811E0("viewmodel", -1);
    v7 = (char *)result;
    if ( result )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_100E0D20((int)v7, (float *)(this + 580));
      sub_100F90F0(this);
      sub_100F9100((int)v7, v2);
      sub_10260750(v7);
      sub_100EACE0((unsigned __int16 *)v7, this, 1);
      a2 = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v7 + 8))(v7);
      return sub_101E6060((_DWORD *)(this + 4024), v2, &a2);
    }
  }
  return result;
}
