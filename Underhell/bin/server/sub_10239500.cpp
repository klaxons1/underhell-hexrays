unsigned int __thiscall sub_10239500(_DWORD *this, int a2)
{
  int v3; // ecx
  bool v4; // zf
  double v5; // st6
  int v6; // eax

  v3 = *(_DWORD *)(a2 + 24);
  v4 = v3 == 1;
  if ( v3 == 1 )
  {
    if ( *(float *)(a2 + 8) > 10.0 )
    {
      v5 = 10.0;
      goto LABEL_9;
    }
    v4 = 1;
  }
  v5 = 0.0;
  if ( (!v4 || *(float *)(a2 + 8) >= 0.0) && v3 == 1 )
    v5 = *(float *)(a2 + 8);
LABEL_9:
  v6 = (int)(10.0 * v5);
  this[222] = v6;
  this[225] = v6 << 8;
  return sub_102386F0((int)this, 1);
}
