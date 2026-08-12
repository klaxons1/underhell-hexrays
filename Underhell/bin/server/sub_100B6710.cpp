int __thiscall sub_100B6710(int this, int a2)
{
  int result; // eax
  double v3; // st7

  result = a2;
  *(_BYTE *)(this + 3695) = 1;
  *(_BYTE *)(this + 3693) = 0;
  if ( *(_DWORD *)(a2 + 24) == 5 )
  {
    result = *(_DWORD *)(a2 + 8);
    v3 = (double)result;
  }
  else
  {
    v3 = (double)0;
  }
  *(float *)(this + 3748) = v3;
  return result;
}
