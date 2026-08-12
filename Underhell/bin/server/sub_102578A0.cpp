void __thiscall sub_102578A0(int this, int a2)
{
  char v3; // al
  _DWORD *v4; // eax
  double v5; // st7
  int v6; // ecx
  double v7; // st7
  double v8; // st6
  double v9; // st7
  int v10; // ecx
  double v11; // st6
  double v12; // st5
  double v13; // rtt
  double v14; // st5
  double v15; // st7
  double v16; // st5
  double v17; // st4
  double v18; // rt0
  double v19; // st6
  double v20; // st7
  float *v21; // eax
  float v22[3]; // [esp+8h] [ebp-30h] BYREF
  float v23; // [esp+14h] [ebp-24h] BYREF
  float v24; // [esp+18h] [ebp-20h]
  float v25; // [esp+1Ch] [ebp-1Ch]
  float v26; // [esp+20h] [ebp-18h] BYREF
  float v27; // [esp+24h] [ebp-14h]
  float v28; // [esp+28h] [ebp-10h]
  float v29; // [esp+2Ch] [ebp-Ch] BYREF
  float v30; // [esp+30h] [ebp-8h]
  float v31; // [esp+34h] [ebp-4h]

  if ( *(_BYTE *)(a2 + 361) )
  {
    if ( (*(_BYTE *)(a2 + 356) & 4) == 0 )
    {
      v3 = *(_BYTE *)(a2 + 306);
      if ( v3 != 7
        && v3
        && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 752))(this, a2)
        && !sub_100233D0((_DWORD *)a2) )
      {
        v4 = sub_100BCD00((_DWORD *)this);
        sub_10421C00(this + 1092, v4, &v29);
        if ( (*(_DWORD *)(this + 248) & 0x80) != 0 )
        {
          v5 = *(float *)(this + 1108);
          v23 = v29 * v5;
          v24 = v30 * v5;
          v25 = v5 * v31;
          sub_100EA150(a2, &v23);
          if ( v31 > 0.0 )
            sub_101C73D0((unsigned int *)a2, 0);
          sub_1025FAC0(this);
        }
        else
        {
          switch ( *(_BYTE *)(a2 + 306) )
          {
            case 0:
            case 7:
            case 8:
              return;
            case 6:
              v6 = *(_DWORD *)(a2 + 424);
              if ( v6 )
              {
                v7 = *(float *)(this + 1108);
                v8 = *(float *)(dword_106B31C8 + 16);
                v22[0] = v29 * v7 * 100.0 * v8;
                v22[1] = v30 * v7 * 100.0 * v8;
                v22[2] = v7 * v31 * 100.0 * v8;
                (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 236))(v6, v22);
              }
              break;
            default:
              if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
                || *(_BYTE *)(a2 + 306) != 9
                || (*(_DWORD *)(this + 248) & 0x100) != 0 )
              {
                v9 = *(float *)(this + 1108);
                v10 = *(_DWORD *)(a2 + 256);
                v11 = v29 * v9;
                v26 = v11;
                v12 = v30 * v9;
                v27 = v12;
                v13 = v12;
                v14 = v9;
                v15 = v13;
                v16 = v14 * v31;
                v28 = v16;
                if ( (v10 & 0x800000) != 0 )
                {
                  v17 = *(float *)(a2 + 468);
                  v18 = v16 + *(float *)(a2 + 472);
                  v26 = v11 + *(float *)(a2 + 464);
                  v19 = v15 + v17;
                  v20 = v18;
                  v27 = v19;
                  v28 = v18;
                }
                else
                {
                  v20 = v16;
                }
                if ( v20 > 0.0 && (v10 & 1) != 0 )
                {
                  sub_101C73D0((unsigned int *)a2, 0);
                  v21 = (float *)sub_10019640((_DWORD *)a2);
                  v23 = *v21;
                  v24 = v21[1];
                  v25 = v21[2] + 1.0;
                  sub_100E0D20(a2, &v23);
                }
                sub_100DCCB0((float *)a2, &v26);
                sub_100EA940((int *)a2, 0x800000);
              }
              break;
          }
        }
      }
    }
  }
}
