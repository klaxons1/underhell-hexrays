void __thiscall sub_10204E30(unsigned int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // edi
  int v7; // eax

  v2 = *(_DWORD *)(this + 800);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        v6 = sub_10204D90(this, v5, *(float *)(this + 804), 1);
        v7 = *(_DWORD *)(this + 808);
        if ( v6 == v7 )
        {
          if ( 0.0 != *(float *)(this + 816) && *(float *)(this + 816) <= (double)*(float *)(dword_106B31C8 + 12) )
          {
            sub_10204340((_DWORD *)this, v6, this);
            *(float *)(this + 816) = 0.0;
            *(_DWORD *)(this + 812) = v6;
          }
        }
        else if ( v6 == *(_DWORD *)(this + 812) )
        {
          *(_DWORD *)(this + 808) = v6;
          *(float *)(this + 816) = 0.0;
        }
        else
        {
          if ( v7 != -2 )
            *(float *)(this + 816) = *(float *)(this + 820) + *(float *)(dword_106B31C8 + 12);
          *(_DWORD *)(this + 808) = v6;
        }
        sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      }
    }
  }
}
