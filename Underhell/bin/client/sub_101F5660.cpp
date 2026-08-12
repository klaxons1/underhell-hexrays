int __thiscall sub_101F5660(float *this, int a2, int a3)
{
  double v4; // st6
  double v5; // st7
  float v6; // edx
  int (*v7)(void); // eax
  float v9; // edx
  int (*v10)(void); // eax
  int v11; // [esp+4h] [ebp+4h]

  v4 = (double)(*((_DWORD *)this + 4) - a2) * 0.0020000001;
  v11 = *((_DWORD *)this + 5) - a3;
  this[7] = v4 + this[7];
  v5 = this[6] - 0.0020000001 * (double)v11;
  this[6] = v5;
  if ( v5 <= 1.570796326794897 && v5 < -1.570796326794897 )
  {
    v5 = -1.570796326794897;
LABEL_4:
    *((_DWORD *)this + 4) = a2;
    v6 = *this;
    this[6] = v5;
    v7 = *(int (**)(void))(LODWORD(v6) + 36);
    *((_DWORD *)this + 5) = a3;
    return v7();
  }
  if ( v5 <= 1.570796326794897 )
    goto LABEL_4;
  *((_DWORD *)this + 4) = a2;
  v9 = *this;
  this[6] = 1.570796326794897;
  v10 = *(int (**)(void))(LODWORD(v9) + 36);
  *((_DWORD *)this + 5) = a3;
  return v10();
}
