void __thiscall sub_1020A940(float *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int i; // ebx
  int v8; // eax
  float *v9; // eax

  for ( i = a4; i; ++a3 )
  {
    v8 = a2[1655];
    a2[1655] = v8 + 1;
    --i;
    if ( this[11] > (double)flt_103EE7C0[((_WORD)v8 + (unsigned __int16)a2[1656]) & 0xFFF] )
    {
      v9 = (float *)(a2[1529] + 4 * ((a3 & 3) + a2[1593] * (a3 / 4)));
      *v9 = *v9 + 3.1415927;
    }
  }
}
