int __thiscall sub_102EF140(_BYTE *this, int a2)
{
  int *v3; // eax
  int v4; // eax

  if ( dword_10668F04 != -1 )
  {
    v3 = &off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 1];
    if ( off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 2] == (unsigned int)dword_10668F04 >> 12 )
    {
      if ( *v3 )
      {
        if ( off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 2] == (unsigned int)dword_10668F04 >> 12 )
          v4 = *v3;
        else
          v4 = 0;
        *(_BYTE *)(v4 + 853) = 0;
      }
    }
  }
  if ( this )
    dword_10668F04 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
  else
    dword_10668F04 = -1;
  this[853] = 1;
  return sub_100EC3F0(this, 0, 0.0, 0);
}
