int __thiscall sub_10093300(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 1656))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2)
    && (v3 = this[1093], v3 != -1)
    && (v4 = &off_1061BE18[4 * (this[1093] & 0xFFF) + 1], v5 = v3 >> 12,
                                                          off_1061BE18[4 * (this[1093] & 0xFFF) + 2] == v5)
    && *v4
    && off_1061BE18[4 * (this[1093] & 0xFFF) + 2] == v5 )
  {
    return *v4;
  }
  else
  {
    return 0;
  }
}
