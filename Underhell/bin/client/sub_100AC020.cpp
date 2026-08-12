_DWORD *__thiscall sub_100AC020(_DWORD *this, char a2)
{
  _DWORD *result; // eax
  float *v4; // eax
  int v5; // edi
  float *v6; // eax
  float v7; // ecx
  float v8; // edx
  double v9; // st7
  float *v10; // eax
  double v11; // st6
  int (__thiscall *v12)(_DWORD *, _BYTE *, float *, int, _BYTE *); // edx
  float *v13; // esi
  _BYTE v14[84]; // [esp+4h] [ebp-70h] BYREF
  float v15; // [esp+58h] [ebp-1Ch]
  float v16; // [esp+5Ch] [ebp-18h]
  float v17; // [esp+60h] [ebp-14h]
  float v18; // [esp+64h] [ebp-10h]
  float v19; // [esp+68h] [ebp-Ch]
  float v20; // [esp+6Ch] [ebp-8h]
  _BYTE v21[4]; // [esp+70h] [ebp-4h] BYREF
  BOOL v22; // [esp+7Ch] [ebp+8h]
  float v23; // [esp+7Ch] [ebp+8h]

  v22 = a2 != 0;
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, int, int, _BYTE *))(*this + 184))(
                       this,
                       v21,
                       this[2] + 152,
                       8,
                       v14);
  if ( *result != -1 )
  {
    v4 = (float *)this[2];
    v15 = v4[38];
    v5 = 0;
    v16 = v4[39];
    v17 = v4[40];
    v23 = (float)v22;
    while ( 1 )
    {
      v6 = (float *)this[2];
      v7 = v6[38];
      v8 = v6[39];
      v20 = v6[40];
      v9 = v23 + v20;
      v10 = (float *)(this[2] + 152);
      v18 = v7;
      *v10 = v7;
      v19 = v8;
      v11 = v8;
      v12 = *(int (__thiscall **)(_DWORD *, _BYTE *, float *, int, _BYTE *))(*this + 184);
      v10[1] = v11;
      v10[2] = v9;
      result = (_DWORD *)v12(this, v21, v10, 8, v14);
      if ( *result == -1 )
        break;
      if ( ++v5 >= 36 )
      {
        v13 = (float *)this[2];
        v13[38] = v15;
        v13[39] = v16;
        v13[40] = v17;
        return result;
      }
    }
  }
  return result;
}
