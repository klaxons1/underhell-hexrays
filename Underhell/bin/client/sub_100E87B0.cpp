void __thiscall sub_100E87B0(float *this, float *a2)
{
  int v2; // ebx
  int v3; // edi
  float *v4; // edx
  int v5; // eax
  int v6; // eax

  v2 = *((_DWORD *)this + 25);
  v3 = 0;
  if ( v2 <= 0 )
  {
LABEL_9:
    if ( v2 < 6 )
    {
      this[4 * v2 + 4] = a2[3];
      v5 = 2 * *((_DWORD *)this + 25);
      this[2 * v5 + 1] = *a2;
      v6 = (int)&this[2 * v5 + 1];
      *(float *)(v6 + 4) = a2[1];
      *(float *)(v6 + 8) = a2[2];
      ++*((_DWORD *)this + 25);
    }
  }
  else
  {
    v4 = this + 3;
    while ( -1.0 == v4[1] || *(v4 - 2) != *a2 || *(v4 - 1) != a2[1] || *v4 != a2[2] || a2[3] != v4[1] )
    {
      ++v3;
      v4 += 4;
      if ( v3 >= v2 )
        goto LABEL_9;
    }
  }
}
