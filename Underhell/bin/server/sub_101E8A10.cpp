int __thiscall sub_101E8A10(unsigned int *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int result; // eax
  int v6; // eax
  unsigned int v7; // edx
  void (__thiscall *v8)(unsigned int *, int); // eax

  v2 = this[876];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[876] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  result = (*(int (__thiscall **)(unsigned int *, int))(*this + 1356))(this, v4);
  if ( !(_BYTE)result )
  {
    v6 = (*(int (__thiscall **)(unsigned int *, _DWORD))(*this + 1348))(this, 0);
    v7 = *this;
    if ( v6 )
    {
      return (*(int (__thiscall **)(unsigned int *, int))(v7 + 1336))(this, v6);
    }
    else
    {
      v8 = *(void (__thiscall **)(unsigned int *, int))(v7 + 1368);
      if ( *(_DWORD *)(dword_106B4C1C + 48) )
      {
        v8(this, 3);
        return sub_100F69B0(this + 876, 0);
      }
      else
      {
        return ((int (__thiscall *)(unsigned int *, int))v8)(this, 6);
      }
    }
  }
  return result;
}
