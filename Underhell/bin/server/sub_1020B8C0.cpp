int __thiscall sub_1020B8C0(int this)
{
  int v2; // ecx
  int *v3; // ecx
  int *v4; // ecx
  float v6; // [esp+0h] [ebp-14h]
  float v7; // [esp+10h] [ebp-4h]

  v2 = dword_106B31C8;
  v7 = *(float *)(dword_106B31C8 + 28) * *(float *)(this + 1420) * 0.5 + *(float *)(this + 1072);
  if ( *(_DWORD *)(this + 1072) != LODWORD(v7) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1072);
    }
    *(float *)(this + 1072) = v7;
    v2 = dword_106B31C8;
  }
  if ( *(float *)(this + 1420) > (double)*(float *)(this + 1072) )
  {
    v6 = *(float *)(v2 + 28) + *(float *)(v2 + 12);
    return sub_100EC3F0((_DWORD *)this, (int)sub_1020B8C0, v6, off_10642FA0);
  }
  else
  {
    if ( *(_DWORD *)(this + 1072) != *(_DWORD *)(this + 1420) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 1072);
      }
      *(float *)(this + 1072) = *(float *)(this + 1420);
      v2 = dword_106B31C8;
    }
    return sub_100EC3F0((_DWORD *)this, 0, *(float *)(v2 + 12), off_10642FA0);
  }
}
