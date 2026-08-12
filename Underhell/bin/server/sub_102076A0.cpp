void __thiscall sub_102076A0(_DWORD *this)
{
  int (__thiscall *v2)(_DWORD *); // edx
  float *v3; // edi
  float *v4; // eax
  int v5; // ecx
  double v6; // st7
  double v7; // st6
  double v8; // rt0
  double v9; // st6
  double v10; // st7
  double v11; // rt1
  float v12[3]; // [esp+Ch] [ebp-10h]
  char v13; // [esp+1Bh] [ebp-1h]

  v2 = *(int (__thiscall **)(_DWORD *))(this[80] + 4);
  v13 = 0;
  v3 = (float *)v2(this + 80);
  v4 = (float *)(*(int (__thiscall **)(_DWORD *))(this[80] + 8))(this + 80);
  v5 = 0;
  v12[0] = *v4 - *v3;
  v12[1] = v4[1] - v3[1];
  v12[2] = v4[2] - v3[2];
  v6 = 40.0;
  v7 = 30.0;
  do
  {
    v8 = v7;
    v9 = v6;
    v10 = v8;
    if ( v9 < v12[v5] )
      v13 = 1;
    v11 = v9;
    v7 = v10;
    v6 = v11;
    if ( v7 >= v12[v5] )
    {
      sub_100E88A0(this, 0);
      return;
    }
    ++v5;
  }
  while ( v5 < 3 );
  if ( !v13 )
    sub_100E88A0(this, 0);
}
