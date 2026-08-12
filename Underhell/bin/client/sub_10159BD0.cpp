int __thiscall sub_10159BD0(char *this)
{
  int (*v2)(void); // edx
  float *v3; // eax
  double v4; // st7
  double v5; // st6
  bool v6; // cc
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  float *v10; // eax
  float *v11; // ebx
  double v12; // st6
  double v13; // st7
  double v14; // st7
  int result; // eax
  float v16[3]; // [esp+Ch] [ebp-2Ch] BYREF
  float v17; // [esp+18h] [ebp-20h] BYREF
  float i; // [esp+1Ch] [ebp-1Ch]
  float v19; // [esp+20h] [ebp-18h]
  int v20; // [esp+24h] [ebp-14h]
  int v21; // [esp+28h] [ebp-10h]
  int v22; // [esp+2Ch] [ebp-Ch]
  int v23; // [esp+30h] [ebp-8h]
  int v24; // [esp+34h] [ebp-4h]

  v2 = *(int (**)(void))(*(_DWORD *)this + 36);
  this[1428] = 1;
  v3 = (float *)v2();
  *((float *)this + 358) = *v3;
  *((float *)this + 359) = v3[1];
  *((float *)this + 360) = v3[2];
  sub_1015BE40(0);
  *((float *)this + 1899) = 0.0;
  this[2361] = 1;
  *((float *)this + 1898) = 0.0;
  *((_DWORD *)this + 1890) = 6;
  *((_DWORD *)this + 1889) = 6;
  *((float *)this + 1891) = 165.0;
  *((_DWORD *)this + 1888) = 6;
  v4 = 0.2;
  v22 = 0;
  v5 = 2.0;
  do
  {
    v6 = *((_DWORD *)this + 1889) <= 0;
    v23 = 0;
    v17 = (double)v22 * v4 * *((float *)this + 1891) * v5 + *((float *)this + 358) - *((float *)this + 1891);
    if ( !v6 )
    {
      do
      {
        v7 = 0;
        v21 = 0;
        for ( i = (double)v23 * v4 * *((float *)this + 1891) * v5 + *((float *)this + 359) - *((float *)this + 1891);
              v7 < *((_DWORD *)this + 1890);
              v21 = v7 )
        {
          v19 = v5 * (v4 * (double)v21 * *((float *)this + 1891)) + *((float *)this + 360) - *((float *)this + 1891);
          if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_104131A0)(dword_104131A0, &v17, 0) & 1) == 0 )
          {
            v8 = v22 + *((_DWORD *)this + 1889) * (v23 + v7 * *((_DWORD *)this + 1888));
            v9 = (int)&this[24 * v8 + 2368];
            if ( &this[24 * v8] != (char *)-2368 )
            {
              sub_10115FB0();
              v10 = (float *)sub_100F06D0((int)(this + 1196), (int)this, 44, *((_DWORD *)this + 591));
              v11 = v10;
              if ( v10 )
              {
                v12 = i - *((float *)this + 359);
                v13 = v19 - *((float *)this + 360);
                v10[3] = v17 - *((float *)this + 358);
                v10[4] = v12;
                v10[5] = v13;
                *((_BYTE *)v10 + 36) = 255 * sub_10115FB0() / 0x7FFF;
                v24 = sub_10115FB0();
                v11[6] = (double)v24 * 0.000030518509 * 1.2 - 0.60000002;
                v24 = sub_10115FB0();
                v11[7] = (double)v24 * 0.000030518509 * 12.0 - 6.0;
              }
              (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)dword_1041315C + 4))(
                dword_1041315C,
                v16,
                &v17,
                1);
              v14 = v16[0];
              *(_DWORD *)v9 = v11;
              v7 = v21;
              *(_DWORD *)(v9 + 4) = -1;
              *(_BYTE *)(v9 + 20) = (int)(v14 * 255.89999);
              *(_BYTE *)(v9 + 21) = (int)(v16[1] * 255.89999);
              v20 = (int)(255.89999 * v16[2]);
              *(_BYTE *)(v9 + 22) = v20;
              *(float *)(v9 + 16) = 1.0;
            }
          }
          v4 = 0.2;
          ++v7;
          v5 = 2.0;
        }
        ++v23;
      }
      while ( v23 < *((_DWORD *)this + 1889) );
    }
    result = v22 + 1;
    v22 = result;
  }
  while ( result < *((_DWORD *)this + 1888) );
  return result;
}
