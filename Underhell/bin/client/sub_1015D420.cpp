void __thiscall sub_1015D420(int this, float a2)
{
  float *v3; // edi
  float *v4; // eax
  double v5; // st4
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st6
  double v10; // st7
  double v11; // st7
  float v12; // [esp+0h] [ebp-10h]

  if ( !*(_BYTE *)(this + 260) )
    return;
  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 36))(this - 1192);
  v4 = sub_101356D0();
  v5 = v4[1] - v3[1];
  v6 = v5 * v5;
  v7 = *v4 - *v3;
  v8 = v6;
  v9 = v4[2] - v3[2];
  v12 = v7 * v7 + v8 + v9 * v9;
  if ( off_103EDFE0(v12) < *(float *)(dword_1043F9CC + 44) )
  {
    if ( *(float *)(this + 256) != *(float *)(this + 236) )
    {
      v10 = *(float *)(this + 236);
      goto LABEL_7;
    }
  }
  else if ( *(float *)(this + 256) == *(float *)(this + 236) )
  {
    v10 = *(float *)(this + 236) * 0.5;
LABEL_7:
    *(float *)(this + 256) = v10;
    *(float *)(this + 268) = 1.0 / v10;
  }
  while ( 1 )
  {
    v11 = a2;
    if ( a2 < (double)*(float *)(this + 272) )
      break;
    a2 = v11 - *(float *)(this + 272);
    *(float *)(this + 272) = *(float *)(this + 268);
    sub_1015D140((float *)(this - 1192), this);
  }
  *(float *)(this + 272) = *(float *)(this + 272) - v11;
}
