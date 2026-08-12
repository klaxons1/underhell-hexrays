double __thiscall sub_101A1150(int this, int a2, int a3)
{
  if ( a2 == 1 )
    return 2.0;
  if ( a2 > 1 && a2 <= 3 && *(_BYTE *)(this + 5000) && *(_DWORD *)(this + 4996) )
    return *(float *)(dword_1069091C + 44) * 0.5;
  return sub_1001F850(a2, a3);
}
