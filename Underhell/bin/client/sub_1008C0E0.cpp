int __thiscall sub_1008C0E0(_BYTE *this)
{
  double v2; // st4
  double v3; // rt1
  double v4; // st4
  double v5; // st6
  double v6; // st5
  double v7; // st7
  double v8; // st7
  double v9; // st4
  double v10; // st3
  double v11; // rt2
  double v12; // st4
  double v13; // st6
  double v14; // st4
  double v15; // st7
  int (__thiscall *v16)(_BYTE *, int, int, _DWORD); // edx
  int result; // eax
  float v18; // [esp+4h] [ebp-1Ch] BYREF
  float v19; // [esp+8h] [ebp-18h]
  float v20; // [esp+Ch] [ebp-14h]
  int v21; // [esp+10h] [ebp-10h]
  int v22; // [esp+14h] [ebp-Ch]
  int v23; // [esp+18h] [ebp-8h]

  this[210] = 0;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 184))(dword_1041315C, &v18);
  v2 = v18 * 3.0 + 0.30000001;
  v18 = v2;
  v3 = v2;
  v4 = v19 * 3.0 + 0.30000001;
  v19 = v4;
  v5 = v4;
  v6 = 3.0 * v20 + 0.30000001;
  v7 = v3;
  v20 = v6;
  if ( v3 <= 1.0 )
  {
    v9 = 255.0;
    v10 = v7 * 255.0;
    v8 = 1.0;
  }
  else
  {
    v8 = 1.0;
    v9 = 255.0;
    v10 = 255.0;
  }
  v23 = (int)v10;
  LOBYTE(v21) = (int)v10;
  v11 = v9;
  v12 = v5;
  v13 = v11;
  if ( v12 <= v8 )
    v14 = v12 * v13;
  else
    v14 = v13;
  v23 = (int)v14;
  LOBYTE(v22) = (int)v14;
  if ( v6 <= v8 )
    v15 = v6 * v13;
  else
    v15 = v13;
  v16 = *(int (__thiscall **)(_BYTE *, int, int, _DWORD))(*(_DWORD *)this + 124);
  v23 = (int)v15;
  result = v16(this, v21, v22, (unsigned __int8)(int)v15);
  if ( this[208] )
  {
    result = sub_1008BDA0((int)(this + 64));
    this[209] = 1;
  }
  return result;
}
