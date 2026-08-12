void __thiscall sub_103E1DF0(int this)
{
  int *v2; // ecx
  int v3; // ebx
  double v4; // st7
  double v5; // st7
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 1689) )
  {
    v3 = *(_DWORD *)(dword_106EDE44 + 48);
    v6 = v3;
    if ( *(_DWORD *)(this + 1800) == v3 )
      return;
    v4 = (double)*(int *)(dword_106EDE8C + 48) * *(float *)(dword_106B31C8 + 16);
    if ( 0.0 != *(float *)(this + 1784) )
    {
      if ( v4 <= *(float *)(this + 1784) )
      {
        *(float *)(this + 1784) = *(float *)(this + 1784) - v4;
        return;
      }
      v4 = v4 - *(float *)(this + 1784);
      *(float *)(this + 1784) = 0.0;
    }
    v5 = v4 + *(float *)(this + 1780);
    v7 = (int)v5;
    *(float *)(this + 1780) = v5 - (double)(int)v5;
    sub_103E18C0((int *)(this + 1800), &v7);
    if ( *(_DWORD *)(this + 1800) > v3 )
    {
      sub_103E1820((_DWORD *)(this + 1800), &v6);
      *(float *)(this + 1780) = 0.0;
    }
  }
  else if ( *(_DWORD *)(this + 1800) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 1800) = -1;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 1800);
      *(_DWORD *)(this + 1800) = -1;
    }
  }
}
