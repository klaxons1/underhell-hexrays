char __thiscall sub_100D9410(_BYTE *this, float a2, float *a3, int a4)
{
  int v4; // eax

  if ( this[306] != 3 )
    return 0;
  if ( !(unsigned __int8)sub_101C4640(2) )
    return 0;
  v4 = sub_101C46F0(2);
  if ( !v4 )
    return 0;
  *(_DWORD *)(v4 + 68) = (int)(a2 / *(float *)(dword_106B31C8 + 28) + 0.5);
  *(float *)(v4 + 72) = *a3;
  *(float *)(v4 + 76) = a3[1];
  *(float *)(v4 + 80) = a3[2];
  sub_10423260(a4, v4 + 84);
  return 1;
}
