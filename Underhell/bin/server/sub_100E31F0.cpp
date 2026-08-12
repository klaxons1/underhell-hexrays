void __thiscall sub_100E31F0(int this, float a2, char a3)
{
  int *v4; // ecx
  int *v5; // ecx
  float v6; // [esp+0h] [ebp-10h]

  sub_100EC3F0((int)sub_100E1560, 0.0, 0);
  v6 = *(float *)(dword_106B31C8 + 12) + a2;
  sub_100EC4A0(v6, 0);
  if ( *(_BYTE *)(this + 119) != 0xFF )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 116);
    }
    *(_BYTE *)(this + 119) = -1;
  }
  if ( *(_BYTE *)(this + 113) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 113);
    }
    *(_BYTE *)(this + 113) = 0;
  }
  if ( a3 )
  {
    sub_101129A0(*(unsigned __int16 *)(this + 356) | 4);
    sub_100D7260((float *)this, &flt_106F1CB4);
  }
}
