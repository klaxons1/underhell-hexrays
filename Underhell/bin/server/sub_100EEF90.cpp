int __thiscall sub_100EEF90(_BYTE *this, char a2, char a3)
{
  int result; // eax
  bool v5; // zf

  result = sub_1023E0F0(&a2);
  v5 = a3 == 0;
  this[1612] = 1;
  if ( !v5 )
  {
    result = sub_100D7680((int)this);
    if ( result )
      *(float *)(result + 2700) = *(float *)(dword_106B31C8 + 12) + 0.2;
  }
  return result;
}
