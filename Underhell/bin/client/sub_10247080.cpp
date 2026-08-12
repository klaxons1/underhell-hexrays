int __thiscall sub_10247080(
        _DWORD *this,
        int (__thiscall ***a2)(_DWORD),
        const char *Src,
        float a4,
        float a5,
        float a6,
        int a7,
        float a8)
{
  __int16 v9; // di
  float v11[11]; // [esp+Ch] [ebp-2Ch] BYREF

  v9 = *sub_10230F20(dword_1047CCCC, (__int16 *)&Src, Src);
  sub_10246370(this, (int)a2, v9, 0xFFFF);
  memset(v11, 0, sizeof(v11));
  v11[1] = a4;
  v11[6] = a8;
  v11[7] = a5;
  v11[8] = a6;
  LOWORD(v11[0]) = 0;
  HIWORD(v11[0]) = v9;
  LODWORD(v11[5]) = a7;
  return sub_10246F40((int)this, a2, 0, (int)v11);
}
