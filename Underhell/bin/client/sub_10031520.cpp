void __thiscall sub_10031520(unsigned __int8 *this, char *a2, float *a3, float *a4, float a5, int a6)
{
  char *v6; // edx
  char *v7; // eax
  char *v8; // edx
  char *v9; // eax
  int v10; // [esp+18h] [ebp+Ch]
  int v11; // [esp+18h] [ebp+Ch]

  if ( fabs(*a3 - *a4) < 0.001 || *a4 >= (double)a5 )
  {
    v11 = 0;
    if ( this[29] )
    {
      v8 = a2;
      v9 = (char *)(a4 + 1);
      do
      {
        qmemcpy(v8, v9, 0x20u);
        v9 += 32;
        v8 += 32;
        ++v11;
      }
      while ( v11 < this[29] );
    }
  }
  else
  {
    v10 = 0;
    if ( this[29] )
    {
      v6 = a2;
      v7 = (char *)(a4 + 1);
      do
      {
        qmemcpy(v6, v7, 0x20u);
        v7 += 32;
        v6 += 32;
        ++v10;
      }
      while ( v10 < this[29] );
    }
  }
}
