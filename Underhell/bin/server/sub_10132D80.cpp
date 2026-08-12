char *__thiscall sub_10132D80(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  float v5; // [esp+0h] [ebp-10h]

  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    if ( *(_BYTE *)(this + 817) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_BYTE *)(this + 817) = 1;
      }
      else
      {
        v2 = *(int **)(this + 24);
        if ( v2 )
          sub_100194B0(v2, 817);
        *(_BYTE *)(this + 817) = 1;
      }
    }
  }
  else if ( *(_BYTE *)(this + 817) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 817);
    }
    *(_BYTE *)(this + 817) = 0;
  }
  sub_100EC3F0((_DWORD *)this, (int)sub_101326D0, 0.0, 0);
  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v5, 0);
  return sub_100E38F0((float *)this);
}
