void __thiscall sub_10395F40(int this)
{
  int v2; // edi
  double v3; // st4
  double v4; // st7
  double v5; // st4
  double v6; // st5
  __int16 v7; // ax
  unsigned __int16 *v8; // esi
  __int16 v9; // ax
  float v10; // [esp+8h] [ebp-14h]
  float v11; // [esp+8h] [ebp-14h]
  float v12; // [esp+Ch] [ebp-10h]
  float v13; // [esp+14h] [ebp-8h] BYREF
  float v14; // [esp+18h] [ebp-4h] BYREF

  sub_10020A40((void *)this);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) && sub_10023D10((_DWORD *)this, 21) )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(v2);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = *(float *)(this + 580) - *(float *)(v2 + 580);
    v4 = v3 * v3;
    v5 = *(float *)(this + 584) - *(float *)(v2 + 584);
    v6 = *(float *)(this + 588) - *(float *)(v2 + 588);
    v10 = v6 * v6 + v5 * v5 + v4;
    if ( off_10689708(v10) <= 120.0 )
    {
      if ( *(_DWORD *)(dword_10698344 + 48) )
      {
        v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 10, 15);
        sub_100B8D80((_WORD *)(this + 2760), v7);
        sub_100B8C00((float *)(this + 2760), 0.1, 0.2);
      }
      else
      {
        v8 = (unsigned __int16 *)(this + 2760);
        v9 = sub_100B8D70(v8);
        sub_100B8D80(v8, 2 * v9);
        sub_100B8C60((float *)v8, &v13, &v14);
        v12 = v14 * 0.60000002;
        v11 = 0.60000002 * v13;
        sub_100B8C00((float *)v8, v11, v12);
      }
    }
  }
}
