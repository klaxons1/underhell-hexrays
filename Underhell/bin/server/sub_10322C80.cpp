void __thiscall sub_10322C80(_DWORD *this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx

  sub_100EC6E0((int)this, a2);
  v3 = this[281];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[281] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (this[281] & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * (this[281] & 0xFFF) + 2] == v5 )
          sub_10322BC0(*v4);
        else
          sub_10322BC0(0);
      }
    }
  }
}
