int __thiscall sub_100E0630(int this)
{
  int *v2; // ecx
  float v4; // [esp+10h] [ebp-4h]

  v4 = *(float *)(this + 432);
  if ( *(_DWORD *)(this + 428) != LODWORD(v4) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 428);
    }
    *(float *)(this + 428) = v4;
  }
  return sub_100EC3F0(0, *(float *)(dword_106B31C8 + 12), (int)"ShadowCastDistThink");
}
