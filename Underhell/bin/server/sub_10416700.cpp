int __thiscall sub_10416700(int this, float a2)
{
  int *v3; // ecx
  float v5; // [esp+0h] [ebp-10h]
  float v6; // [esp+18h] [ebp+8h]

  v6 = *(float *)(dword_106B31C8 + 12) + a2;
  if ( *(_DWORD *)(this + 2112) != LODWORD(v6) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 2112);
    }
    *(float *)(this + 2112) = v6;
  }
  sub_100EC3F0((_DWORD *)this, (int)sub_10416380, 0.0, 0);
  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v5, 0);
}
