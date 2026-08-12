void __thiscall sub_100104D0(_BYTE *this, int a2, float *a3, float *a4)
{
  bool v6; // zf
  double v7; // st6
  double v8; // st7
  double v9; // st7
  _DWORD v10[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v11; // [esp+28h] [ebp-Ch]
  float v12; // [esp+2Ch] [ebp-8h]
  float v13; // [esp+30h] [ebp-4h]
  int v14; // [esp+40h] [ebp+Ch]

  v6 = this[134] == 0;
  v7 = 4.0 * a3[2];
  v8 = a3[1] * 4.0;
  v11 = a4[3] - *a3 * 4.0;
  v12 = a4[4] - v8;
  v13 = a4[5] - v7;
  if ( !v6 )
  {
    sub_10128C30(a2, this);
    v14 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 112))(this);
    if ( v14 != -1 )
    {
      v9 = *(float *)(a2 + 52);
      *(float *)v10 = v11;
      *(float *)&v10[1] = v12;
      *(float *)&v10[2] = v13;
      sub_1012D6D0(v10, a3, v14, (int)v9);
      sub_1000FFA0(this, *(float *)(a2 + 52), a3, a4, *(_DWORD *)(a2 + 64));
    }
  }
}
