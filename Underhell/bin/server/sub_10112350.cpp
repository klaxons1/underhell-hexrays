int __thiscall sub_10112350(int this, float *a2, float *a3)
{
  int result; // eax

  sub_10111910((_BYTE *)this, (float *)(this + 8), (float *)(this + 20), a2, a3);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 48))(this);
  if ( (result & 0x80u) != 0 )
  {
    *a2 = *a2 - (double)*(unsigned __int8 *)(this + 42);
    a2[1] = a2[1] - (double)*(unsigned __int8 *)(this + 42);
    result = *(unsigned __int8 *)(this + 42);
    *a3 = (double)result + *a3;
    a3[1] = (double)*(unsigned __int8 *)(this + 42) + a3[1];
    a3[2] = (double)*(unsigned __int8 *)(this + 42) * 0.5 + a3[2];
  }
  return result;
}
