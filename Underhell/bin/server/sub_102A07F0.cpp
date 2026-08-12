int __thiscall sub_102A07F0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  const char *v4; // eax
  int result; // eax

  v2 = this[17];
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1], v3[1] == v2 >> 12) && *v3 )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 304))(this);
    if ( !result )
      return 100000;
  }
  else
  {
    v4 = (const char *)(*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
    Warning("Entity %s running passenger behavior without a valid vehicle!\n", v4);
    *((_BYTE *)this + 100) = 0;
    this[17] = -1;
    return sub_1004B430((_DWORD **)this);
  }
  return result;
}
