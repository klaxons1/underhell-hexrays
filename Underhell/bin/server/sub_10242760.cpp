void __thiscall sub_10242760(int this, float a2)
{
  float v3; // eax
  int *v4; // ecx

  v3 = *(float *)(this + 812);
  a2 = a2 + v3;
  if ( LODWORD(v3) != LODWORD(a2) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 812);
    }
    *(float *)(this + 812) = a2;
  }
  if ( *(float *)(this + 852) < (double)*(float *)(this + 812) )
  {
    if ( (*(_BYTE *)(this + 248) & 2) != 0 )
    {
      sub_100EAB80((_DWORD *)this, 32);
      sub_100EC4A0((int *)this, -1.0, 0);
    }
    else if ( *(float *)(this + 852) > 0.0 )
    {
      a2 = fmod(*(float *)(this + 812), *(float *)(this + 852));
      sub_100C1ED0((float *)(this + 812), &a2);
    }
  }
}
