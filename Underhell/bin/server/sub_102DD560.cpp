double __thiscall sub_102DD560(float *this)
{
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 176))(dword_106B3CDC) == 1
    && *(_DWORD *)(dword_10698344 + 48)
    && (*(_BYTE *)this & 1) == 0 )
  {
    return this[1] * 0.5;
  }
  else
  {
    return this[1];
  }
}
