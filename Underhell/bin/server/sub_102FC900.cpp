char __thiscall sub_102FC900(int this, int a2)
{
  char result; // al
  double v4; // st7
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // eax

  *(_DWORD *)(this + 3988) = a2;
  if ( a2 == 1 )
  {
    v5 = *(_DWORD *)(this + 4100);
    if ( v5 == -1
      || (v6 = &off_1061BE18[4 * (*(_DWORD *)(this + 4100) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(this + 4100) & 0xFFF) + 2] != v5 >> 12) )
    {
      v7 = 0;
    }
    else
    {
      v7 = *v6;
    }
    result = sub_100577F0(this + 3700, v7, 0);
    *(float *)(this + 4072) = 0.0;
  }
  else
  {
    result = a2 - 2;
    if ( a2 == 2 )
    {
      sub_100577F0(this + 3700, 0, 0);
      v4 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 10, 15);
      result = dword_106B31C8;
      *(float *)(this + 4072) = v4 + *(float *)(dword_106B31C8 + 12);
    }
  }
  return result;
}
