int __thiscall sub_100A9200(_DWORD *this, int a2)
{
  float *v3; // esi
  float *v4; // ebx
  float *v5; // eax
  double v6; // st7
  float *v7; // ecx
  int result; // eax
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]

  if ( a2 )
    v3 = *(float **)(a2 + 76);
  else
    v3 = 0;
  v4 = (float *)sub_100F7AF0(this[1]);
  v5 = (float *)this[1];
  v9 = v5[71];
  v10 = v5[72];
  if ( v4 )
  {
    if ( !v3 )
    {
      sub_10038150((int)v4);
      v9 = v4[61] + v9;
      v10 = v4[62] + v10;
      sub_10038150((int)v4);
      v6 = v4[63];
      goto LABEL_10;
    }
  }
  else if ( v3 )
  {
    sub_10038150((int)v3);
    v9 = v9 - v3[61];
    v10 = v10 - v3[62];
    sub_10038150((int)v3);
    v6 = v3[63];
    goto LABEL_10;
  }
  v6 = v5[73];
LABEL_10:
  v7 = (float *)this[1];
  v7[71] = v9;
  v7[72] = v10;
  v7[73] = v6;
  result = sub_100F8AA0(v3);
  if ( v3 )
  {
    sub_100A7EF0(this, a2);
    *(float *)(this[1] + 4212) = 0.0;
    if ( !(unsigned __int8)sub_100AF2F0(a2) )
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10434620 + 8))(dword_10434620, a2, this[2] + 64);
    result = this[2];
    *(float *)(result + 72) = 0.0;
  }
  return result;
}
