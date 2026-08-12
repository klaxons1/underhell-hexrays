char *__thiscall sub_103C0B60(_DWORD *this)
{
  unsigned int v2; // eax
  char *result; // eax
  unsigned int v4; // esi
  unsigned int v5; // esi

  sub_100422B0(this);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 2268))(this, this[951]);
  v2 = this[954];
  if ( v2 == -1
    || (result = (char *)(v2 >> 12), (char *)off_1061BE18[4 * (this[954] & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (this[954] & 0xFFF) + 1] )
  {
    result = sub_103BFC10((int)this);
    if ( result )
    {
      result = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)result + 8))(result);
      this[954] = *(_DWORD *)result;
    }
    else
    {
      this[954] = -1;
    }
    v4 = this[954];
    if ( v4 != -1 )
    {
      result = (char *)&off_1061BE18[4 * (v4 & 0xFFF) + 1];
      v5 = v4 >> 12;
      if ( *((_DWORD *)result + 1) == v5 )
      {
        if ( *(_DWORD *)result )
        {
          if ( *((_DWORD *)result + 1) == v5 )
          {
            result = *(char **)result;
            result[804] = 1;
          }
          else
          {
            result = 0;
            MEMORY[0x324] = 1;
          }
        }
      }
    }
  }
  return result;
}
