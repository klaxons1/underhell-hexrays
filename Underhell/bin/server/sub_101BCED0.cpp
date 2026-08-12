int *__thiscall sub_101BCED0(_DWORD *this, int a2, int a3, int a4, float a5)
{
  int v5; // edx

  if ( this[103] != -1
    && off_1061BE18[4 * (this[103] & 0xFFF) + 2] == this[103] >> 12
    && (v5 = off_1061BE18[4 * (this[103] & 0xFFF) + 1]) != 0 )
  {
    return (int *)(*(int (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)v5 + 372))(v5, a2, a3, a4, LODWORD(a5));
  }
  else
  {
    return sub_100DA450(this, a2, a3, a4, a5);
  }
}
