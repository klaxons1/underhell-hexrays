_DWORD *__thiscall sub_103EFAF0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  _DWORD *result; // eax
  float v5[3]; // [esp+4h] [ebp-48h] BYREF
  float v6[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v7[3]; // [esp+1Ch] [ebp-30h] BYREF
  float v8[3]; // [esp+28h] [ebp-24h] BYREF
  float v9[3]; // [esp+34h] [ebp-18h] BYREF
  float v10[3]; // [esp+40h] [ebp-Ch] BYREF

  v2 = this[518];
  if ( v2 == -1
    || (v3 = &off_1061BE18[4 * (this[518] & 0xFFF) + 1], result = (_DWORD *)(v2 >> 12), (_DWORD *)v3[1] != result)
    || !*v3 )
  {
    result = (_DWORD *)sub_100BEF30((int)this, "cargo");
    if ( result )
    {
      sub_100BD6D0(this, (int)result, (int)v8, v5, v6, v7);
      v9[0] = -8.0;
      v9[1] = -6.0;
      v9[2] = 0.0;
      v10[0] = 8.0;
      v10[1] = 6.0;
      v10[2] = 4.0;
      result = sub_103EE990(v8, (int)v9, (int)v10, (int)this);
      if ( result )
      {
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 8))(result);
        this[518] = *result;
      }
      else
      {
        this[518] = -1;
      }
    }
  }
  return result;
}
