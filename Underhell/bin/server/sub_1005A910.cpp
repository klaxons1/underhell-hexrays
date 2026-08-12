char __thiscall sub_1005A910(_DWORD *this, int *a2)
{
  float *v3; // eax

  sub_1005A760((int)this, a2);
  v3 = (float *)sub_1004C590(this, 0);
  if ( v3 )
  {
    LOBYTE(v3) = sub_10058900(v3, (int *)&a2);
    if ( (_BYTE)v3 )
    {
      v3 = (float *)a2;
      if ( a2 )
      {
        a2[29] = this[264];
        v3[33] = *(float *)(dword_106B31C8 + 12) + 60.0;
      }
    }
  }
  return (char)v3;
}
