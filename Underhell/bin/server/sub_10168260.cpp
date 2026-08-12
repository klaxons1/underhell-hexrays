int __thiscall sub_10168260(unsigned int this, int a2)
{
  int *v3; // esi
  int v4; // edi
  unsigned int v5; // eax
  int v6; // eax

  v3 = (int *)(this + 220);
  if ( *(int *)(this + 220) > 0 )
  {
    v4 = *v3 - (int)*(float *)(a2 + 52);
    if ( *v3 != v4 )
    {
      (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)this + 464))(this, this + 220);
      *v3 = v4;
    }
    if ( *v3 <= 0 )
    {
      if ( *v3 )
      {
        (*(void (__thiscall **)(int *, int *))(*(v3 - 55) + 464))(v3 - 55, v3);
        *v3 = 0;
      }
      sub_100DD660(this, &flt_106F1CA8);
      sub_100D8290((float *)this, -1.0);
      if ( *(_BYTE *)(this + 225) )
      {
        (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)this + 480))(this, this + 225);
        *(_BYTE *)(this + 225) = 0;
      }
      v5 = *(_DWORD *)(a2 + 40);
      if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v5 >> 12 )
        v6 = 0;
      else
        v6 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
      sub_1010DD80((_DWORD *)(this + 924), __SPAIR64__(this, v6), 0.0);
    }
  }
  return 0;
}
