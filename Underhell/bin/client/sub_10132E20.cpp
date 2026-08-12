int __thiscall sub_10132E20(char *this)
{
  int v1; // esi
  char *v2; // edx
  int v3; // ecx
  double v4; // st5
  double v5; // st4
  int result; // eax
  int i; // ecx
  double v8; // st4
  float v9[3]; // [esp+4h] [ebp-28h]
  float v10[3]; // [esp+10h] [ebp-1Ch]
  int v11; // [esp+1Ch] [ebp-10h]
  __int16 v12; // [esp+20h] [ebp-Ch]
  int v13; // [esp+24h] [ebp-8h]
  int v14; // [esp+28h] [ebp-4h]

  v9[0] = -63.0;
  v1 = 0;
  v11 = -10223553;
  v10[0] = -5.0;
  v12 = 127;
  v14 = 0;
  v9[1] = 63.0;
  v2 = this + 204;
  v10[1] = -127.0;
  v9[2] = 155.0;
  v10[2] = 0.0;
  do
  {
    if ( v1 >= 8 )
    {
      v13 = v1 - 8;
      for ( i = 0; i < 3; v2[i - 1] = v13 )
      {
        v8 = v10[i];
        v13 = *((unsigned __int8 *)&v11 + i + 3);
        result = HIWORD(v14) | 0xC00;
        ++i;
        v13 = (int)(v8 * ((double)(v1 - 8) * 0.0625) + (double)v13);
        LOBYTE(result) = v13;
      }
    }
    else
    {
      v3 = 0;
      v4 = (double)v14 * 0.125;
      do
      {
        v5 = v9[v3] * v4;
        v14 = *((unsigned __int8 *)&v11 + v3++);
        result = HIWORD(v14) | 0xC00;
        v13 = (int)(v5 + (double)v14);
        LOBYTE(result) = v13;
        v2[v3 - 1] = v13;
      }
      while ( v3 < 3 );
    }
    ++v1;
    v2 += 3;
    v14 = v1;
  }
  while ( v1 < 24 );
  return result;
}
