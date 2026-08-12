_DWORD *__thiscall sub_102CA0E0(int this, char *String2, int a3)
{
  char *v4; // eax

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = String2;
  if ( !String2 )
    v4 = (char *)String;
  return sub_1012C650(v4, (float *)(this + 580), 0.0, this, a3, 0, 0);
}
