float *__thiscall sub_101F71C0(int this, float *a2, int a3)
{
  double v4; // st7
  float *result; // eax
  char v6; // al
  int v9; // ecx
  long double v10; // st7
  double v11; // st7
  float v12; // [esp+4h] [ebp-4h]
  int v13; // [esp+Ch] [ebp+4h]
  int v14; // [esp+10h] [ebp+8h]

  v4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1047CA80 + 16))(dword_1047CA80);
  v12 = v4 - *(float *)(this + 48);
  *(float *)(this + 48) = v4;
  if ( *(_BYTE *)(this + 60) )
  {
    result = a2;
    *(_DWORD *)(this + 16) = a2;
    *(_DWORD *)(this + 20) = a3;
  }
  else
  {
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 40))(dword_1047CA68, 109);
    v9 = (int)a2 - *(_DWORD *)(this + 16);
    if ( v6 )
    {
      v14 = a3 - *(_DWORD *)(this + 20);
      if ( (int)abs32(v9) >= (int)(2 * abs32(v14)) )
      {
        *(_DWORD *)(this + 16) = a2;
        if ( v12 == 0.0 )
        {
          *(float *)(this + 56) = 0.0;
          *(_DWORD *)(this + 20) = a3;
        }
        else
        {
          *(_DWORD *)(this + 20) = a3;
          *(float *)(this + 56) = (double)v9 / v12 * 0.0020000001;
        }
        *(float *)(this + 32) = 0.0020000001 * (double)v9 + *(float *)(this + 32);
        return sub_101F7080(this);
      }
      else
      {
        v10 = pow(1.009999990463257, (double)v14 * 0.2) * *(float *)(this + 24);
        *(_DWORD *)(this + 16) = a2;
        *(float *)(this + 24) = v10;
        *(_DWORD *)(this + 20) = a3;
        return sub_101F7080(this);
      }
    }
    else
    {
      v13 = a3 - *(_DWORD *)(this + 20);
      *(float *)(this + 32) = (double)v9 * 0.0020000001 + *(float *)(this + 32);
      v11 = *(float *)(this + 28) - 0.0020000001 * (double)v13;
      *(float *)(this + 28) = v11;
      if ( v11 > 1.570796326794897 || v11 >= -1.570796326794897 )
      {
        if ( v11 > 1.570796326794897 )
          v11 = 1.570796326794897;
      }
      else
      {
        v11 = -1.570796326794897;
      }
      *(float *)(this + 28) = v11;
      *(_DWORD *)(this + 16) = a2;
      *(_DWORD *)(this + 20) = a3;
      return sub_101F7080(this);
    }
  }
  return result;
}
