void __thiscall sub_10242690(int this)
{
  int v2; // eax
  int *v3; // ecx
  int *v4; // ecx
  int v5; // [esp-4h] [ebp-8h]

  sub_100E0780(this);
  if ( sub_100D9B60(this) )
  {
    v5 = *(_DWORD *)(this + 804);
    v2 = sub_100D9B60(this);
    sub_10126B10(this, v2, v5);
  }
  else
  {
    if ( *(_DWORD *)(this + 800) != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == *(_DWORD *)(this + 800) >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1] )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 800);
      }
      *(_DWORD *)(this + 800) = -1;
    }
    if ( *(_DWORD *)(this + 804) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 804) = 0;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 804);
        *(_DWORD *)(this + 804) = 0;
      }
    }
  }
}
