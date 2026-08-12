void __thiscall sub_10215350(_DWORD *this, __int64 a2, int a3, int a4)
{
  unsigned int v4; // edx
  int *v5; // eax
  unsigned int v6; // edx
  int v7; // eax

  v4 = this[437];
  if ( v4 != -1
    && (v5 = &off_1061BE18[4 * (this[437] & 0xFFF) + 1], v6 = v4 >> 12, off_1061BE18[4 * (this[437] & 0xFFF) + 2] == v6)
    && *v5 )
  {
    if ( off_1061BE18[4 * (this[437] & 0xFFF) + 2] == v6 )
      v7 = *v5;
    else
      v7 = 0;
    (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)v7 + 372))(v7, a2, HIDWORD(a2), a3, a4);
  }
  else
  {
    sub_10214A10((int)this, a2, a3, a4);
  }
}
