void __thiscall sub_103F5DC0(_DWORD *this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx

  sub_100D4E40((int)this, a2);
  v3 = this[349];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[349] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (this[349] & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * (this[349] & 0xFFF) + 2] == v5 )
          sub_1025FAC0(*v4);
        else
          sub_1025FAC0(0);
      }
    }
  }
}
