int __thiscall sub_102862D0(_DWORD *this)
{
  int v2; // eax
  double v3; // st7
  int v4; // ecx
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st2
  double v9; // rt0
  double v10; // st2
  double v11; // st4
  double v12; // st3
  double v13; // st3
  double v14; // rt1
  double v15; // rt2
  double v16; // st4
  double v17; // st5
  double v18; // st4
  double v19; // st4
  double v20; // st5
  double v21; // st7
  int v23; // [esp+8h] [ebp-Ch] BYREF
  int v24; // [esp+Ch] [ebp-8h]
  int v25; // [esp+10h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *, int *, int *))(*this + 280))(this, &v23, &v25);
  v2 = this[60];
  v24 = v23 - 1;
  v3 = (double)(v23 - 1);
  v4 = this[59];
  v5 = (double)(v25 - 1);
  v24 = v2 - v4;
  v6 = (double)(v2 - v4);
  v7 = (double)(int)this[62];
  if ( v7 == v6 )
  {
    v8 = 0.0;
  }
  else
  {
    v24 = this[61] - v4;
    v8 = (double)v24 / (v6 - v7);
  }
  v9 = v8;
  v10 = v7;
  v11 = v9;
  if ( v10 <= 0.0 )
    return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
  v12 = v10;
  if ( v6 <= 0.0 )
    v6 = 1.0;
  if ( !*((_BYTE *)this + 207) )
  {
    v13 = v3;
    v3 = v5;
    v14 = v13;
    v12 = v10;
    v5 = v14;
  }
  v15 = v11;
  v16 = v12 / v6;
  v17 = v15;
  v18 = v16 * v5;
  if ( v18 >= v3 )
    v3 = v18;
  v19 = v17 * (v5 - v3);
  this[53] = (int)v19;
  v20 = v3 + v19;
  v21 = v5 - v3;
  v24 = (int)v20;
  this[54] = (int)v20;
  if ( (double)(int)v20 <= v5 )
    return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
  this[53] = (int)v21;
  this[54] = (int)v5;
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}
