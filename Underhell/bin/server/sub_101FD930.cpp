void __thiscall sub_101FD930(int this)
{
  double v2; // st7
  double v3; // st5
  int *v4; // ecx
  float v5; // [esp+0h] [ebp-14h]
  float v6; // [esp+10h] [ebp-4h]

  v5 = *(float *)(dword_106B31C8 + 12) + 0.05;
  sub_100EC4A0((int *)this, v5, 0);
  v2 = *(float *)(this + 804) * 0.05 + *(float *)(this + 808);
  v6 = v2;
  v3 = *(float *)(this + 800);
  if ( *(float *)(this + 804) < 0.0 )
  {
    if ( v3 < v2 )
      goto LABEL_5;
    goto LABEL_3;
  }
  if ( v3 <= v2 )
  {
LABEL_3:
    v6 = *(float *)(this + 800);
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  }
LABEL_5:
  if ( *(_DWORD *)(this + 808) != LODWORD(v6) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 808) = v6;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 808);
      *(float *)(this + 808) = v6;
    }
  }
}
