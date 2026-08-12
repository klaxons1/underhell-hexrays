void __thiscall sub_10242BA0(int this)
{
  unsigned int v2; // edi
  int *v3; // ecx
  double v4; // st7
  int *v5; // ecx
  float v6; // [esp+14h] [ebp-4h]

  v2 = *(_DWORD *)(this + 192) & 0xFFFFFFDF;
  if ( *(_DWORD *)(this + 192) != v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 192);
    }
    *(_DWORD *)(this + 192) = v2;
  }
  if ( *(_DWORD *)(this + 24) )
    **(_DWORD **)(this + 24) |= 0x80u;
  sub_100D8500((_DWORD *)this);
  v4 = 0.0;
  if ( 0.0 != *(float *)(this + 808) && *(float *)(this + 852) > 1.0 || (*(_BYTE *)(this + 248) & 2) != 0 )
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_10242980, 0.0, 0);
    sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    *(float *)(this + 848) = *(float *)(dword_106B31C8 + 12);
    v4 = 0.0;
  }
  v6 = v4;
  if ( *(_DWORD *)(this + 812) != LODWORD(v6) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 812) = v4;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 812);
        v4 = 0.0;
      }
      *(float *)(this + 812) = v4;
    }
  }
}
