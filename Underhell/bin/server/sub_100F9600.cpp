int __thiscall sub_100F9600(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx

  v1 = this[this[204] + 207];
  if ( v1 != -1 && (v2 = &off_1061BE18[4 * (this[this[204] + 207] & 0xFFF) + 1], v2[1] == v1 >> 12) && *v2 )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(*v2 + 24));
  else
    return 0;
}
