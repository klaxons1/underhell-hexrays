void __stdcall sub_10107F50(int a1)
{
  char *v1; // eax
  char *v2; // esi
  float *v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  double v11; // st7
  int v12; // edx
  _DWORD v13[3]; // [esp+28h] [ebp-30h] BYREF
  float v14; // [esp+34h] [ebp-24h]
  float v15; // [esp+38h] [ebp-20h]
  float v16; // [esp+3Ch] [ebp-1Ch]
  float v17; // [esp+40h] [ebp-18h]
  float v18; // [esp+44h] [ebp-14h]
  float v19; // [esp+48h] [ebp-10h]
  float v20; // [esp+4Ch] [ebp-Ch] BYREF
  float v21; // [esp+50h] [ebp-8h]
  float v22; // [esp+54h] [ebp-4h]
  float v23; // [esp+60h] [ebp+8h]

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 104))(dword_1041315C) )
  {
    if ( (*(int (__thiscall **)(int *))(*off_103DC72C[0] + 68))(off_103DC72C[0]) )
    {
      v1 = (char *)sub_100422D0();
      v2 = v1;
      if ( v1 )
      {
        if ( sub_10034ED0(v1) )
        {
          v3 = (float *)sub_10034470(v2);
          v14 = *v3;
          v15 = v3[1];
          v16 = v3[2];
          v4 = sub_10034F40(v2, a1 - 1);
          if ( v4 )
          {
            v5 = (*(int (__thiscall **)(char *))(*(_DWORD *)v2 + 60))(v2);
            v6 = sub_10109E00("m_vecNetworkOrigin", v5);
            if ( v6 )
            {
              v7 = *(_DWORD *)(v6 + 12);
              v8 = *(float *)(v7 + v4);
              v9 = *(float *)(v7 + v4 + 4);
              v10 = *(float *)(v7 + v4 + 8);
              v17 = v8;
              v18 = v9;
              v19 = v10;
              v20 = v8 - v14;
              v21 = v9 - v15;
              v11 = v10 - v16;
              v22 = v11;
              sub_10011640(&v20);
              if ( v11 <= 64.0 && v11 > 0.5 )
              {
                sub_10045AE0((float *)v2, &v20);
                if ( *(int *)(dword_10436AA4 + 48) >= 1 )
                {
                  *(float *)&v13[2] = 1.0;
                  v14 = 0.94999999;
                  v15 = 0.69999999;
                  *(float *)&v13[1] = 2.0;
                  v12 = ++dword_10436C38 / 20;
                  v13[0] = dword_10436C38 + 20 * (1 - v12);
                  LOBYTE(v16) = 1;
                  v23 = v11;
                  (*(void (**)(int, _DWORD *, const char *, ...))(*(_DWORD *)dword_1041315C + 120))(
                    dword_1041315C,
                    v13,
                    "pred error %6.3f units (%6.3f %6.3f %6.3f)",
                    v23,
                    v20,
                    v21,
                    v22);
                }
              }
            }
          }
        }
      }
    }
  }
}
