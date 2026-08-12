int __thiscall sub_101ADF60(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[210] = *(float *)(a2 + 8);
  else
    this[210] = 0.0;
  return result;
}
