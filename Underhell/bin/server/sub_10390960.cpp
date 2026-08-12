int __thiscall sub_10390960(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int result; // eax
  int v5; // edi
  double v6; // st7
  int (__thiscall *v7)(int, float *, _DWORD *); // eax
  float v8[3]; // [esp+1Ch] [ebp-30h] BYREF
  _DWORD v9[3]; // [esp+28h] [ebp-24h] BYREF
  float v10[3]; // [esp+34h] [ebp-18h] BYREF
  float v11[3]; // [esp+40h] [ebp-Ch] BYREF

  sub_1038F830(this);
  (*(void (__thiscall **)(_DWORD *, float *, float *, _DWORD))(*this + 528))(this, v10, v11, 0);
  v3 = this[1105];
  if ( v3 == -1 || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v3 >> 12 )
    result = 0;
  else
    result = off_1061BE18[4 * (this[1105] & 0xFFF) + 1];
  v5 = *(_DWORD *)(result + 424);
  if ( v5 )
  {
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -1.0,
           1.0);
    *(float *)&v9[1] = flt_106F1CAC;
    *(float *)v9 = flt_106F1CA8;
    v7 = *(int (__thiscall **)(int, float *, _DWORD *))(*(_DWORD *)v5 + 208);
    *(float *)&v9[2] = flt_106F1CB0;
    v8[0] = v11[0] * v6 * 16.0 + v10[0];
    v8[1] = v11[1] * v6 * 16.0 + v10[1];
    v8[2] = v6 * v11[2] * 16.0 + v10[2] + 250.0;
    result = v7(v5, v8, v9);
  }
  this[1105] = -1;
  return result;
}
