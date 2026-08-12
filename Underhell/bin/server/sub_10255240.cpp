int __thiscall sub_10255240(float *this, float *a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 320))(a2);
  if ( (_BYTE)result )
    a2[138] = this[138];
  return result;
}
