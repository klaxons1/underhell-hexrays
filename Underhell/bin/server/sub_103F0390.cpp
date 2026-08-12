unsigned int __thiscall sub_103F0390(int this, int a2)
{
  unsigned int result; // eax
  int *v4; // ecx
  double v5; // st7

  result = *(_DWORD *)(this + 2076);
  if ( result == -1
    || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 2076) & 0xFFF) + 1], result >>= 12, v4[1] != result)
    || !*v4 )
  {
    if ( a2 )
    {
      result = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
      *(_DWORD *)(this + 2076) = result;
    }
    else
    {
      *(_DWORD *)(this + 2076) = -1;
    }
    v5 = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 1950) = 1;
    *(float *)(this + 1952) = v5;
  }
  return result;
}
