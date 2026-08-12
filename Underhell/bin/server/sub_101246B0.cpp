int __thiscall sub_101246B0(int *this, int a2)
{
  int result; // eax
  bool v3; // zf
  float v4; // [esp+0h] [ebp-8h]

  if ( *(_DWORD *)(a2 + 24) == 5 )
    result = *(_DWORD *)(a2 + 8);
  else
    result = 0;
  v3 = this[203] == 0;
  this[201] = result;
  if ( !v3 )
  {
    if ( result <= 19 )
      v4 = *(float *)(dword_106B31C8 + 12) + 2.5 - (double)result * 0.1;
    else
      v4 = *(float *)(dword_106B31C8 + 12) + 0.5;
    return sub_100EC4A0(this, v4, 0);
  }
  return result;
}
