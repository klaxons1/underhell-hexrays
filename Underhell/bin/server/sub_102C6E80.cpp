int sub_102C6E80()
{
  const char *v0; // eax
  int result; // eax
  int v2; // ebx
  int v3; // esi
  double v4; // st7
  double v5; // st6
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  double v9; // st5
  int v10[3]; // [esp+10h] [ebp-2Ch] BYREF
  int v11[3]; // [esp+1Ch] [ebp-20h] BYREF
  int v12[3]; // [esp+28h] [ebp-14h] BYREF
  int v13; // [esp+34h] [ebp-8h]
  int v14; // [esp+38h] [ebp-4h]

  v0 = *(const char **)(dword_106B31C8 + 60);
  if ( !v0 )
    v0 = String;
  result = sub_102C6C50((int)&dword_106DE088, v0);
  v14 = result;
  if ( result )
  {
    v2 = 0;
    v3 = *(_DWORD *)(result + 96) - 1;
    if ( v3 >= 0 )
    {
      v4 = 8.0;
      v5 = -8.0;
      v6 = 6 * v3;
      while ( 1 )
      {
        v7 = *(_DWORD *)(result + 84);
        v8 = *(__int16 *)(v7 + v6 + 4);
        v13 = *(__int16 *)(v7 + v6 + 2);
        v9 = (double)v13;
        v13 = *(__int16 *)(v7 + v6);
        *(float *)v10 = (float)v13;
        *(float *)&v10[1] = v9;
        *(float *)&v10[2] = (double)v8 + 36.0;
        *(float *)v12 = v4;
        v12[1] = v12[0];
        v12[2] = v12[0];
        *(float *)v11 = v5;
        v11[1] = v11[0];
        v11[2] = v11[0];
        sub_1011BB20((int)v10, (int)v11, (int)v12, 0, 255, 0, 128, 10.0);
        if ( v2 > 150 )
          break;
        v6 -= 6;
        ++v2;
        if ( --v3 < 0 )
          break;
        result = v14;
        v5 = -8.0;
        v4 = 8.0;
      }
      result = v14;
    }
    return Msg("\nlisted %d deaths\n", *(_DWORD *)(result + 96));
  }
  return result;
}
