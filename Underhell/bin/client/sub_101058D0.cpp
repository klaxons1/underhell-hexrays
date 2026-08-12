_DWORD *__thiscall sub_101058D0(_DWORD *this, _DWORD *a2)
{
  double v2; // st7
  double v3; // st6
  int v4; // eax
  double v5; // st5
  double v6; // st4
  int v7; // eax
  int v8; // edi
  double v9; // st5
  double v10; // st6
  double v11; // st7
  double v12; // rt1
  double v13; // st6
  double v14; // st7
  int v15; // ebx
  _BYTE *v16; // edi
  _DWORD *result; // eax
  _DWORD v18[2]; // [esp+0h] [ebp-2Ch] BYREF
  float v19; // [esp+8h] [ebp-24h]
  float v20; // [esp+Ch] [ebp-20h]
  float v21; // [esp+10h] [ebp-1Ch]
  int v22; // [esp+14h] [ebp-18h]
  float v23; // [esp+18h] [ebp-14h]
  float v24; // [esp+1Ch] [ebp-10h]
  int v25; // [esp+20h] [ebp-Ch]
  _DWORD *v26; // [esp+24h] [ebp-8h]
  int v27; // [esp+28h] [ebp-4h]

  *(float *)&v18[1] = -1.0;
  v2 = 1.0;
  v19 = 1.0;
  v20 = 1.0;
  v22 = 1;
  v21 = 1.0;
  v18[0] = 0;
  v3 = *(float *)(dword_104367B4 + 44);
  v4 = this[1];
  v23 = *(float *)(dword_104367B4 + 44);
  v5 = *(float *)(dword_1043676C + 44);
  v26 = this;
  v24 = v5;
  v25 = v4;
  if ( v4 >= this[6] )
  {
    result = (_DWORD *)this[6];
    this[1] = result;
  }
  else
  {
    v6 = 0.0;
    v7 = 1240 * v4;
    v27 = v7;
    while ( 1 )
    {
      v8 = v7 + this[3];
      switch ( *(_DWORD *)v8 & 3 )
      {
        case 0:
        case 2:
          if ( v5 <= v6 )
          {
            if ( v6 >= *(float *)(v8 + 4) )
            {
              v19 = v6;
              v20 = v19;
              v21 = v19;
            }
            else
            {
              v19 = v2;
              v20 = v6;
              v21 = v20;
            }
          }
          else
          {
            v19 = *(float *)(v8 + 4) / v5;
            v20 = v6;
            v21 = v20;
          }
          break;
        case 1:
          v9 = v6;
          goto LABEL_7;
        case 3:
          v19 = v2;
          v20 = v19;
          v21 = v19;
          if ( v3 >= *(float *)(v8 + 8) )
          {
            v9 = v6;
LABEL_7:
            if ( v9 >= v3 )
            {
              if ( v9 >= *(float *)(v8 + 8) )
              {
                v19 = v9;
                v10 = v2;
                v11 = v9;
              }
              else
              {
                v10 = v2;
                v11 = v9;
                v19 = v10;
              }
              v20 = v10;
              v12 = v10;
              v13 = v11;
              v14 = v12;
              if ( v13 >= *(float *)(v8 + 8) )
                v21 = v13;
              else
                v21 = v14;
            }
            else
            {
              v19 = *(float *)(v8 + 8) / v3;
              v20 = v2;
              v21 = *(float *)(v8 + 8) / v3;
            }
          }
          break;
        default:
          break;
      }
      v18[0] = ++*a2;
      (*(void (**)(int, _DWORD *, const char *, ...))(*(_DWORD *)dword_1041315C + 120))(
        dword_1041315C,
        v18,
        "%s",
        v8 + 216);
      v15 = 1;
      v16 = (_BYTE *)(v8 + 472);
      do
      {
        if ( !*v16 )
          break;
        v18[0] = ++*a2;
        (*(void (**)(int, _DWORD *, const char *, ...))(*(_DWORD *)dword_1041315C + 120))(
          dword_1041315C,
          v18,
          "%s",
          v16);
        ++v15;
        v16 += 256;
      }
      while ( v15 < 4 );
      this = v26;
      v27 += 1240;
      if ( ++v25 >= v26[6] )
        break;
      v7 = v27;
      v5 = v24;
      v3 = v23;
      v6 = 0.0;
      v2 = 1.0;
    }
    result = v26;
    v26[1] = v26[6];
  }
  return result;
}
