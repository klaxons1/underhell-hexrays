bool __thiscall sub_101A5310(_DWORD *this)
{
  int *v2; // eax
  int v3; // esi
  int v4; // eax
  bool v5; // zf
  signed int v6; // eax
  bool result; // al

  v2 = (int *)(*(int (__thiscall **)(_DWORD *))(*this + 1136))(this);
  v3 = this[973];
  v4 = *v2;
  if ( !v3 || v3 == 3 || v3 == 4 || v3 == 5 || v3 == 7 )
  {
    switch ( v4 )
    {
      case 0:
      case 1:
      case 4:
      case 5:
        result = 1;
        break;
      default:
        return 0;
    }
  }
  else
  {
    if ( v3 != 1 && v3 != 2 && v3 != 6 )
      return 0;
    v6 = v4 & 0x80000001;
    v5 = v6 == 0;
    if ( v6 < 0 )
      return (((_BYTE)v6 - 1) | 0xFFFFFFFE) == -1;
    return v5;
  }
  return result;
}
