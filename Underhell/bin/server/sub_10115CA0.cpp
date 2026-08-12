int __thiscall sub_10115CA0(int this)
{
  int *v2; // ecx
  int v3; // eax
  int v4; // ecx
  float v6; // [esp+0h] [ebp-10h]

  if ( *(_BYTE *)(this + 829) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 829);
    }
    *(_BYTE *)(this + 829) = 0;
  }
  v3 = dword_106B31C8;
  v4 = off_106156E4;
  *(float *)(this + 820) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 812) = *(float *)(this + 840);
  v6 = *(float *)(dword_106B31C8 + 28) + *(float *)(v3 + 12);
  return sub_100EC4A0((int *)this, v6, v4);
}
