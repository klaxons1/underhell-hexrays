void __thiscall sub_1006B420(int this, char *String2, float a3)
{
  int v4; // eax

  v4 = sub_100695D0(&dword_10411158, String2);
  if ( v4 < 0 )
  {
    DevWarning("Can't find soundscape %s\n", String2);
  }
  else
  {
    *(_DWORD *)(this + 208) = v4;
    *(float *)(this + 212) = a3;
    if ( v4 >= *(_DWORD *)(this + 40) )
      sub_1006B2C0((int)&dword_10411158, 0);
    else
      sub_1006B2C0((int)&dword_10411158, *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v4));
  }
}
