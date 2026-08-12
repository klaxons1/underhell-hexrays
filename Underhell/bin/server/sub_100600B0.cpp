_DWORD *__thiscall sub_100600B0(int this, float *a2)
{
  *(float *)(this + 48) = *a2;
  *(float *)(this + 52) = a2[1];
  *(float *)(this + 56) = a2[2];
  sub_1005F3E0(this);
  if ( *(int *)(this + 64) > 0 )
  {
    *(float *)(this + 136) = 8.0;
    *(float *)(this + 132) = *(float *)(dword_106B31C8 + 12) + 8.0;
  }
  if ( *(_DWORD *)(this + 64) == 2 )
    *(_BYTE *)(this + 104) = 1;
  return sub_10044510(*(_DWORD *)(this + 4), (int)"Standoff goal position changed");
}
