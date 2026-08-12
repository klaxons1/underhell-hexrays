int *__thiscall sub_101AE720(int this)
{
  double v2; // st7
  unsigned int v3; // eax
  int *result; // eax
  char *v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // edi
  int v14; // eax
  unsigned __int16 v15; // ax
  int v16; // eax
  unsigned int v17; // edx
  int v18; // ecx
  float v19[4]; // [esp+8h] [ebp-58h] BYREF
  float v20[11]; // [esp+18h] [ebp-48h] BYREF
  char v21; // [esp+44h] [ebp-1Ch]
  _BYTE v22[12]; // [esp+48h] [ebp-18h] BYREF
  float v23[3]; // [esp+54h] [ebp-Ch] BYREF

  sub_100E38F0((float *)this);
  v2 = 1.0;
  v3 = *(_DWORD *)(this + 804);
  if ( v3 == -1
    || (result = (int *)(v3 >> 12), (int *)off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1] )
  {
    v5 = *(char **)(this + 800);
    if ( !v5 )
      v5 = (char *)String;
    result = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0);
    if ( result && *((_BYTE *)result + 306) == 6 )
    {
      v6 = *(_DWORD *)(*(int (__thiscall **)(int *))(*result + 8))(result);
      v7 = v6;
      *(_DWORD *)(this + 804) = v6;
      if ( v6 == -1 || (v8 = &off_1061BE18[4 * (v6 & 0xFFF) + 1], v8[1] != v7 >> 12) )
        v9 = 0;
      else
        v9 = *v8;
      v10 = *(_DWORD *)(v9 + 424);
      sub_101AD9E0((float *)this);
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v10 + 192))(v10, v20);
      sub_10421C60(this + 844, v20, v23);
      result = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v10 + 124))(v10, v22);
      *(float *)(this + 840) = (fabs(*((float *)result + 1) * v23[1])
                              + fabs(*(float *)result * v23[0])
                              + fabs(*((float *)result + 2) * v23[2]))
                             * *(float *)(this + 856)
                             * (*(float *)(this + 816) + *(float *)(this + 812));
      v2 = 1.0;
      *(float *)(this + 872) = 1.0;
    }
    else
    {
      v2 = 1.0;
    }
  }
  v11 = *(_DWORD *)(this + 804);
  if ( v11 != -1 )
  {
    result = &off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
    v12 = v11 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] == v12 )
    {
      if ( *result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] == v12 )
          result = (int *)*result;
        else
          result = 0;
        v13 = result[106];
        if ( (*(_BYTE *)(this + 248) & 4) != 0 )
        {
          if ( !*(_DWORD *)(this + 824) )
          {
            v20[2] = 0.0;
            v20[3] = 0.0;
            v20[4] = 0.0;
            v20[5] = 0.0;
            v20[7] = 0.0;
            v21 = 1;
            v20[8] = 0.0;
            v20[6] = v2;
            v20[9] = v2;
            v20[10] = v2;
            v19[3] = *(float *)(this + 844);
            v20[0] = *(float *)(this + 848);
            v20[1] = *(float *)(this + 852);
            v19[0] = *(float *)(this + 716);
            v19[1] = *(float *)(this + 720);
            v19[2] = *(float *)(this + 724);
            v14 = (*(int (__thiscall **)(int, int, int, _DWORD, float *))(*(_DWORD *)dword_106BAFF4 + 64))(
                    dword_106BAFF4,
                    dword_106BAFEC,
                    v13,
                    0,
                    v19);
            *(_DWORD *)(this + 824) = v14;
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 12))(v14, this);
            v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 76))(v13);
            result = (int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v13 + 72))(v13, v15 | 0x80);
          }
          if ( (*(_BYTE *)(this + 248) & 2) != 0 )
            result = (int *)sub_101DAA50(dword_106BAFEC, v13);
        }
        else
        {
          *(_DWORD *)(this + 824) = 0;
        }
        if ( !*(_DWORD *)(this + 828) )
        {
          v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 116))(dword_106BAFF4, this + 832);
          *(_DWORD *)(this + 828) = v16;
          v17 = *(_DWORD *)(this + 804);
          if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != v17 >> 12 )
            v18 = 0;
          else
            v18 = off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
          result = (int *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v16 + 8))(
                            v16,
                            *(_DWORD *)(v18 + 424),
                            0);
          if ( (*(_BYTE *)(this + 248) & 1) != 0 )
            return (int *)sub_101ADE70((float *)this);
        }
      }
    }
  }
  return result;
}
