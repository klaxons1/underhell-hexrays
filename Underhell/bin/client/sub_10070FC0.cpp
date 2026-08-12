bool __thiscall sub_10070FC0(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  bool result; // al

  result = 1;
  if ( (this[311] & 2) != 0 && a2 > 0 )
  {
    v2 = this[281];
    if ( v2 != -1 )
    {
      v3 = (int *)((char *)off_103DCD74 + 16 * (this[281] & 0xFFF) + 4);
      if ( v3[1] == v2 >> 12 )
      {
        v4 = *v3;
        if ( v4 )
        {
          if ( a2 != (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 296))(v4) )
            return 0;
        }
      }
    }
  }
  return result;
}
