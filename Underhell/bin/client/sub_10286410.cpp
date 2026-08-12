int __thiscall sub_10286410(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ebx
  double v5; // st7
  double v6; // st6
  int v7; // edx
  double v8; // st5
  double v9; // st3
  double v10; // st3
  double v11; // st2
  double v12; // rt1
  double v13; // st2
  double v14; // rtt
  double v15; // st1
  double v16; // rt0
  double v17; // st2
  double v18; // st6
  double v19; // st7
  double v20; // st7
  double v21; // st6
  int result; // eax
  int v23; // edi
  float v24; // [esp+Ch] [ebp-10h] BYREF
  int v25; // [esp+10h] [ebp-Ch] BYREF
  int v26; // [esp+14h] [ebp-8h]
  int v27; // [esp+18h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *, float *, int *))(*this + 280))(this, &v24, &v25);
  v2 = this[60];
  v3 = this[59];
  v4 = this[62];
  --LODWORD(v24);
  v5 = (double)SLODWORD(v24);
  v6 = (double)--v25;
  v7 = this[61] - v3;
  v8 = (double)(v2 - v3);
  v25 = v7;
  v9 = (double)(int)this[53];
  v25 = v4;
  v27 = v3;
  v26 = v2;
  v24 = v9;
  v10 = (double)v4;
  if ( v10 <= 0.0 )
  {
    v21 = v10;
    v20 = (double)v7;
  }
  else
  {
    v11 = v8;
    if ( v8 <= 0.0 )
      v11 = 1.0;
    if ( !*((_BYTE *)this + 207) )
    {
      v12 = v11;
      v13 = v5;
      v5 = v6;
      v14 = v13;
      v11 = v12;
      v6 = v14;
    }
    v15 = v10 / v11 * v6;
    if ( v15 >= v5 )
      v5 = v15;
    v16 = v11;
    v17 = v6;
    v18 = v16;
    v19 = v17 - v5;
    if ( 0.0 == v19 )
      v20 = 0.0;
    else
      v20 = (v18 - v10) * (v24 / v19);
    v8 = v18;
    v21 = v10;
  }
  if ( v8 * 0.0099999998 <= fabs(v21 + v20 - (double)v26) )
    result = (int)(v20 + (double)v27 + 0.5);
  else
    result = v2 - v4;
  v23 = v2 - v4;
  this[61] = result;
  if ( result >= v23 )
    this[61] = v23;
  else
    this[61] = result;
  return result;
}
