int __thiscall sub_1005D6A0(int this, int a2, int a3)
{
  int result; // eax

  if ( *(int *)(this + 64) > 0 )
  {
    *(float *)(this + 136) = 8.0;
    result = dword_106B31C8;
    *(float *)(this + 132) = *(float *)(dword_106B31C8 + 12) + 8.0;
  }
  if ( *(_DWORD *)(this + 64) == 2 )
    *(_BYTE *)(this + 104) = 1;
  return result;
}
