int __thiscall sub_10247110(
        _DWORD *this,
        int (__thiscall ***a2)(_DWORD),
        const char *Src,
        int a4,
        float a5,
        float a6,
        int a7,
        float a8)
{
  __int16 v9; // di
  double v10; // st7
  float v12[11]; // [esp+Ch] [ebp-2Ch] BYREF

  v9 = *sub_10230F20(dword_1047CCCC, (__int16 *)&Src, Src);
  sub_10246370(this, (int)a2, v9, 0xFFFF);
  memset(v12, 0, sizeof(v12));
  v12[1] = (float)(unsigned __int8)a4;
  v10 = (double)BYTE1(a4);
  Src = (const char *)BYTE2(a4);
  a4 = HIBYTE(a4);
  v12[2] = v10;
  v12[3] = (float)(int)Src;
  LOWORD(v12[0]) = 0;
  HIWORD(v12[0]) = v9;
  LODWORD(v12[5]) = a7;
  v12[4] = (float)a4;
  v12[6] = a8;
  v12[7] = a5;
  v12[8] = a6;
  return sub_10246F40((int)this, a2, 0, (int)v12);
}
