int __cdecl sub_101B9630(int *a1, float *a2, unsigned __int16 a3)
{
  int result; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  double v9; // st6
  double v10; // st7
  float v11; // [esp+4h] [ebp-10h]
  float v12; // [esp+8h] [ebp-Ch]
  float v13; // [esp+Ch] [ebp-8h]

  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, a3);
  if ( *(_WORD *)(result + 60) )
  {
    v4 = a1[3];
    v5 = v4 - 1;
    if ( v4 - 1 < 0 )
    {
LABEL_7:
      v11 = *a2;
      v12 = a2[1];
      v6 = a1[1];
      v13 = a2[2];
      if ( v4 + 1 > v6 )
        sub_100C86E0(a1, v4 - v6 + 1);
      ++a1[3];
      v7 = *a1;
      result = a1[3] - v4 - 1;
      a1[4] = *a1;
      if ( result > 0 )
        result = (int)memcpy((void *)(16 * v4 + v7 + 16), (const void *)(16 * v4 + v7), 16 * result);
      v8 = *a1 + 16 * v4;
      if ( v8 )
      {
        result = LODWORD(v11);
        *(float *)v8 = v11;
        *(float *)(v8 + 4) = v12;
        *(float *)(v8 + 8) = v13;
        *(_DWORD *)(v8 + 12) = a3;
      }
    }
    else
    {
      result = *a1 + 16 * v5;
      while ( v4 <= 2 || a3 != *(_DWORD *)(result + 12) )
      {
        result -= 16;
        if ( --v5 < 0 )
          goto LABEL_7;
      }
      v9 = (a2[1] + *(float *)(result + 4)) * 0.5;
      v10 = (a2[2] + *(float *)(result + 8)) * 0.5;
      *(float *)result = (*(float *)result + *a2) * 0.5;
      *(float *)(result + 4) = v9;
      *(float *)(result + 8) = v10;
    }
  }
  return result;
}
