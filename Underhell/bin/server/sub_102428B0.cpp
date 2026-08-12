void __thiscall sub_102428B0(int this, float a2, float a3)
{
  int *v4; // ecx
  double v5; // st7
  int *v6; // ecx

  if ( *(_DWORD *)(this + 832) != LODWORD(a3) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 832);
    }
    *(float *)(this + 832) = a3;
  }
  v5 = a2;
  if ( *(float *)(this + 828) != a2 )
  {
    if ( *(_DWORD *)(this + 828) == LODWORD(a2) )
    {
      sub_101126F0((int *)(this + 320));
    }
    else if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 828) = a2;
      sub_101126F0((int *)(this + 320));
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
      {
        sub_100194B0(v6, 828);
        v5 = a2;
      }
      *(float *)(this + 828) = v5;
      sub_101126F0((int *)(this + 320));
    }
  }
}
