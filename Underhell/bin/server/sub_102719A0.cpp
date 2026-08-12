int __thiscall sub_102719A0(_DWORD *this, int *a2)
{
  int v2; // edx

  if ( this[103] != -1
    && off_1061BE18[4 * (this[103] & 0xFFF) + 2] == this[103] >> 12
    && (v2 = off_1061BE18[4 * (this[103] & 0xFFF) + 1]) != 0 )
  {
    return (*(int (__thiscall **)(int, int *))(*(_DWORD *)v2 + 80))(v2, a2);
  }
  else
  {
    return sub_100DA910(this, a2);
  }
}
