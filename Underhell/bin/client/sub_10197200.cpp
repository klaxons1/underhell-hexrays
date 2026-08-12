void __thiscall sub_10197200(float *this)
{
  double v1; // st7
  double v2; // st7
  double v3; // st7
  double v4; // st7
  float *v5; // ebx
  int v6; // esi
  double v7; // st7
  float *v8; // edi
  double v9; // st7
  _BYTE *v10; // ecx
  bool v11; // c0
  bool v12; // c3
  double v13; // st6
  float v14; // [esp+8h] [ebp-64h]
  float v15[3]; // [esp+20h] [ebp-4Ch]
  _DWORD v16[3]; // [esp+2Ch] [ebp-40h]
  float v17[3]; // [esp+38h] [ebp-34h]
  float v18[3]; // [esp+44h] [ebp-28h]
  _DWORD v19[3]; // [esp+50h] [ebp-1Ch]
  float v20[3]; // [esp+5Ch] [ebp-10h]
  float v21; // [esp+68h] [ebp-4h]

  v1 = (double)*((int *)off_103DC81C + 1);
  v21 = v1;
  if ( v21 != this[506] )
  {
    this[506] = v1;
    v20[0] = this[490];
    v19[0] = this + 503;
    v2 = this[491];
    v19[1] = this + 504;
    v20[1] = v2;
    v20[2] = this[492];
    v17[0] = this[493];
    v19[2] = this + 505;
    v3 = this[494];
    v16[0] = this + 502;
    v17[1] = v3;
    v17[2] = this[495];
    v4 = this[496];
    v16[1] = (char *)this + 2009;
    v18[0] = v4;
    v16[2] = (char *)this + 2010;
    v5 = this + 499;
    v18[1] = this[497];
    v6 = 0;
    v18[2] = this[498];
    v7 = 1.0;
    do
    {
      v8 = (float *)v19[v6];
      if ( v20[v6] == *v8 )
      {
        v13 = v5[4];
      }
      else
      {
        v21 = (*((float *)off_103DC81C + 3) - v18[v6]) / v17[v6];
        v14 = v7;
        v9 = sub_10042120(v21, 0.0, v14, *v8, v20[v6]);
        v10 = (_BYTE *)v16[v6];
        v11 = v21 > 1.0;
        v12 = 1.0 == v21;
        *v10 = 1;
        if ( v11 || v12 )
        {
          *v8 = v20[v6];
          *v10 = 0;
        }
        v13 = v9;
        v7 = 1.0;
        v15[v6] = v13;
      }
      *v5 = v13;
      ++v6;
      ++v5;
    }
    while ( v6 < 3 );
  }
}
