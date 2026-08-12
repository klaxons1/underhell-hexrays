int (*__thiscall sub_1024E400(int this))(void)
{
  int (*result)(void); // eax

  *(float *)(this + 832) = 0.0;
  *(float *)(this + 836) = 0.0;
  *(float *)(this + 840) = 0.0;
  result = *(int (**)(void))(this + 4);
  *(_DWORD *)(this + 844) = -1;
  if ( result )
    return (int (*)(void))result();
  return result;
}
