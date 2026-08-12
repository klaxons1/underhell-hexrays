int __thiscall sub_101A8140(_DWORD **this, int a2, float a3)
{
  int result; // eax
  float v5; // [esp+4h] [ebp-8h] BYREF
  float v6; // [esp+8h] [ebp-4h] BYREF

  if ( ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this[907] + 224))(this[907]) > *(float *)(dword_106B31C8 + 12) )
    return 0;
  (*(void (__thiscall **)(_DWORD *, float *, float *))(*this[907] + 216))(this[907], &v6, &v5);
  if ( a3 < (double)v6 )
    return 38;
  result = 39;
  if ( a3 <= (double)v5 )
    return 22;
  return result;
}
