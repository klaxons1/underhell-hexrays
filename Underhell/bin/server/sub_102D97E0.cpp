bool __thiscall sub_102D97E0(float *this, int a2)
{
  bool result; // al
  float v3; // [esp+10h] [ebp+8h]

  result = 0;
  if ( *(float *)(dword_106B31C8 + 12) >= (double)this[4] )
  {
    v3 = (double)*(int *)(a2 + 220) / (double)*(int *)(a2 + 216);
    if ( v3 * 1.5 < ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(0.0, 1.0) )
      return 1;
  }
  return result;
}
