float *__thiscall sub_1015A0D0(int this, int a2)
{
  double v3; // st7
  long double v4; // st7
  double v5; // st6
  double v6; // st6
  double v7; // st7
  int v8; // ebx
  int v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  float *result; // eax
  float v13[3]; // [esp+10h] [ebp-1Ch] BYREF
  float v14[3]; // [esp+1Ch] [ebp-10h] BYREF
  float v15; // [esp+28h] [ebp-4h]

  v15 = *((float *)off_103DC81C + 3) - *(float *)(this + 252);
  sub_10159360((float *)(this - 1192), *(float *)&a2);
  v3 = v15;
  if ( v15 >= (double)*(float *)(this + 256) )
  {
    if ( v3 >= *(float *)(this + 260) )
      v4 = 0.0;
    else
      v4 = (cos((v3 - *(float *)(this + 256)) / (*(float *)(this + 260) - *(float *)(this + 256)) * 3.14159) + 1.0)
         * 0.5;
  }
  else
  {
    v4 = 1.0;
  }
  *(float *)(this + 264) = v4;
  *(float *)(this + 264) = *(float *)(this + 6404)
                         / (*(float *)(this + 6372) + *(float *)(this + 6372))
                         * *(float *)(this + 264);
  v5 = *(float *)(this + 6372);
  v13[0] = *(float *)(this + 240) - v5;
  v13[1] = *(float *)(this + 244) - v5;
  v13[2] = *(float *)(this + 248) - v5;
  v6 = *(float *)(this + 6372);
  v14[0] = v6 + *(float *)(this + 240);
  v14[1] = v6 + *(float *)(this + 244);
  v14[2] = v6 + *(float *)(this + 248);
  sub_100EC3F0(this + 4, v13, v14, 1);
  sub_101598E0((_DWORD *)(this - 1192), v13, v14);
  if ( *(_BYTE *)(this + 236) == 1 )
  {
    v7 = v15;
    *(float *)(this + 6400) = v15;
    if ( v7 > 5.5 )
      *(float *)(this + 6400) = 5.5;
    v8 = *(_DWORD *)(this + 6360) * *(_DWORD *)(this + 6364) * *(_DWORD *)(this + 6368);
    v9 = 0;
    *(float *)(this + 6404) = sin(*(float *)(this + 6400) * 3.141592653589793 * 0.5 * 0.1818181818181818)
                            * (*(float *)(this + 6372) + *(float *)(this + 6372));
    if ( v8 > 0 )
    {
      v10 = (_DWORD *)(this + 1176);
      LODWORD(v15) = this + 1176;
      do
      {
        if ( *v10 )
        {
          v11 = (_DWORD *)(this - 1192);
          if ( v10[1] == -1 )
            sub_101596F0(v11, v9, a2);
          else
            sub_10159490((int)v11, v9, *(float *)&a2);
        }
        ++v9;
        v10 = (_DWORD *)(LODWORD(v15) + 24);
        LODWORD(v15) += 24;
      }
      while ( v9 < v8 );
    }
  }
  result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 36))(this - 1192);
  *(float *)(this + 240) = *result;
  *(float *)(this + 244) = result[1];
  *(float *)(this + 248) = result[2];
  return result;
}
