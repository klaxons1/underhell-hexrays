void __thiscall sub_102A8E40(_DWORD *this, int a2)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx

  v2 = this[10];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          sub_102A9EB0(*v3, a2);
        else
          sub_102A9EB0(0, a2);
      }
    }
  }
}
