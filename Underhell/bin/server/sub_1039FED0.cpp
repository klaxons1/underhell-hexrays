_DWORD *__thiscall sub_1039FED0(int this, int a2)
{
  int *v3; // ecx

  if ( *(_BYTE *)(this + 3838) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 3838);
    }
    *(_BYTE *)(this + 3838) = 1;
  }
  *(float *)(this + 3840) = RandomFloat(0.1, 0.5) + *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 3844) = RandomFloat(1.5, 4.0) + *(float *)(this + 3840);
  return sub_10044510(this, (int)"Received power down input");
}
