void __thiscall sub_10078DE0(int this, int a2)
{
  bool v3; // c0
  double v4; // st7
  double v5; // st7
  int v6; // ecx
  int v7; // eax
  float v8; // [esp+0h] [ebp-28h]
  float v9; // [esp+Ch] [ebp-1Ch]
  int v10; // [esp+14h] [ebp-14h] BYREF
  float v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp-Ch]
  float v13; // [esp+20h] [ebp-8h]
  float v14; // [esp+24h] [ebp-4h]

  if ( !*(_BYTE *)(this + 92) )
  {
    *(_BYTE *)(*(_DWORD *)(this + 4) + 2157) = 1;
    if ( a2 == -1 )
      a2 = (int)*(float *)(this + 24);
    v14 = (double)(unsigned __int16)(int)(*(float *)(*(_DWORD *)(this + 4) + 732) * 182.04445) * 0.0054931641;
    v13 = 0.0054931641 * (double)(unsigned __int16)(int)(182.04445 * *(float *)(this + 20));
    v3 = *(float *)(dword_106B31C8 + 12) - sub_100E92C0(0) > 0.2;
    v4 = 0.2;
    if ( !v3 )
      v4 = *(float *)(dword_106B31C8 + 12) - sub_100E92C0(0);
    v9 = v4;
    v8 = (double)a2 * 10.0;
    v5 = sub_100785E0(v8, v14, v13, v9);
    if ( v14 != v5 )
    {
      v6 = *(_DWORD *)(this + 4);
      v10 = *(_DWORD *)(v6 + 728);
      v11 = *(float *)(v6 + 732);
      v7 = *(_DWORD *)(v6 + 736);
      v11 = v5;
      v12 = v7;
      sub_100E11A0(&v10);
    }
  }
}
