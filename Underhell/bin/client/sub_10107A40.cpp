bool __thiscall sub_10107A40(int *this, int *a2)
{
  int v3; // edx
  int v4; // eax

  if ( this == a2 )
    return 1;
  v3 = *a2;
  v4 = *this;
  return ((*(_BYTE *)a2 ^ *(_BYTE *)this) & 0x3E) == 0
      && ((v3 ^ v4) & 0xFFC0) == 0
      && ((v3 ^ v4) & 0xFFF0000) == 0
      && ((v3 ^ v4) & 0xF0000000) == 0;
}
