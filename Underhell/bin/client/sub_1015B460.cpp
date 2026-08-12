void __thiscall sub_1015B460(int this)
{
  _DWORD *v2; // edi
  double v3; // st7
  int v4; // eax
  double v5; // st7
  int v6; // edx
  int v7; // [esp-Ch] [ebp-20h]
  int v8; // [esp-Ch] [ebp-20h]
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 36) )
  {
    v2 = (_DWORD *)sub_100B66A0((int)&dword_1042FB78, (int)"dmg_bio");
    if ( v2 )
    {
      v9 = 467 - (v2[42] - v2[41]) / 2;
      if ( *(_BYTE *)(this + 61) )
      {
        if ( *(_BYTE *)(this + 60) )
          v4 = 255 - 10 * *(_DWORD *)(this + 56);
        else
          v4 = 10 * *(_DWORD *)(this + 56) + 55;
        BYTE2(v10) = v4;
        LOWORD(v10) = 0;
        HIBYTE(v10) = -1;
        v8 = (int)((double)sub_10076720() * 0.002083333333333333 * (double)v9);
        v5 = (double)sub_10076740() * 0.0015625 * 410.0;
        sub_100B3BE0(v2, (int)v5, v8, &v10);
        v6 = (*(_DWORD *)(this + 56) + 1) % 20;
        *(_DWORD *)(this + 56) = v6;
        if ( !v6 )
          *(_BYTE *)(this + 60) ^= 1u;
      }
      else
      {
        v10 = -65536;
        v7 = (int)((double)sub_10076720() * 0.002083333333333333 * (double)v9);
        v3 = (double)sub_10076740() * 0.0015625 * 410.0;
        sub_100B3BE0(v2, (int)v3, v7, &v10);
        *(_DWORD *)(this + 56) = 0;
        *(_WORD *)(this + 60) = 257;
      }
    }
  }
}
