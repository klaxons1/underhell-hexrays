void __thiscall sub_101DCA50(int this)
{
  double v2; // st7
  int v3[3]; // [esp+10h] [ebp-30h] BYREF
  int v4[3]; // [esp+1Ch] [ebp-24h] BYREF
  float v5; // [esp+28h] [ebp-18h]
  float v6; // [esp+2Ch] [ebp-14h]
  float v7; // [esp+30h] [ebp-10h]
  int v8; // [esp+34h] [ebp-Ch] BYREF
  float v9; // [esp+38h] [ebp-8h]
  float v10; // [esp+3Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 800) )
  {
    if ( (*(_BYTE *)(this + 236) & 4) != 0 )
    {
      (*(void (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(this + 800) + 4))(*(_DWORD *)(this + 800), &v8, v4);
      v5 = *(float *)v4 - *(float *)&v8;
      v6 = *(float *)&v4[1] - v9;
      v7 = *(float *)&v4[2] - v10;
      off_10689714();
      v2 = *(float *)(this + 812);
      *(float *)v3 = v5 * v2 + *(float *)&v8;
      *(float *)&v3[1] = v2 * v6 + v9;
      *(float *)&v3[2] = v2 * v7 + v10;
      sub_1011BC50((float *)&v8, (float *)v3, 0, 0, 255, 0, 0.0);
      sub_1011BC50((float *)v3, (float *)v4, 255, 0, 0, 0, 0.0);
    }
    sub_100DF330((float *)this);
  }
}
