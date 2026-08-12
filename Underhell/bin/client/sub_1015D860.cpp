void __thiscall sub_1015D860(int this, float a2)
{
  double v3; // st7

  if ( *(_DWORD *)(this + 380) && *(_BYTE *)(this + 276) )
  {
    while ( 1 )
    {
      v3 = a2;
      if ( a2 < (double)*(float *)(this + 288) )
        break;
      a2 = v3 - *(float *)(this + 288);
      *(float *)(this + 288) = *(float *)(this + 284);
      sub_1015D720((_DWORD *)(this - 1192));
    }
    *(float *)(this + 288) = *(float *)(this + 288) - v3;
  }
}
