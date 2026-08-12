int __thiscall sub_10052C20(float *this, int a2)
{
  float *v2; // edi
  int result; // eax
  float *v4; // esi
  int v5; // eax
  bool v6; // cc
  int v7; // ebx
  int (__thiscall *v8)(float *); // edx
  float *v9; // edi
  float *v10; // eax
  double v11; // st6
  int (__thiscall *v12)(float *); // edx
  double v13; // rt0
  float *v14; // eax
  int v15; // edx
  int v16; // edi
  int v17; // eax
  float *v18; // edi
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st6
  double v23; // st5
  float v24; // [esp+10h] [ebp-40h]
  float v25; // [esp+14h] [ebp-3Ch]
  float v26[3]; // [esp+1Ch] [ebp-34h] BYREF
  float v27; // [esp+28h] [ebp-28h]
  float v28; // [esp+2Ch] [ebp-24h]
  float v29; // [esp+30h] [ebp-20h]
  float v30; // [esp+34h] [ebp-1Ch]
  float v31; // [esp+38h] [ebp-18h]
  float v32; // [esp+3Ch] [ebp-14h]
  int v33; // [esp+40h] [ebp-10h]
  int v34; // [esp+44h] [ebp-Ch]
  float *v35; // [esp+48h] [ebp-8h]
  float v36; // [esp+4Ch] [ebp-4h]
  int v37; // [esp+58h] [ebp+8h]
  float v38; // [esp+58h] [ebp+8h]

  v2 = this;
  v35 = this;
  result = sub_1003CD40(this, a2);
  if ( !a2 )
  {
    v4 = v2 - 2;
    *((_DWORD *)v2 + 370) = sub_100F29B0("particle/sparkles");
    v5 = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)v2 - 2) + 268))((_DWORD *)v2 - 2);
    sub_100F3060(v5);
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*((_DWORD *)v2 - 2) + 408))((_DWORD *)v2 - 2, -1293.0);
    if ( ((_BYTE)v2[305] & 4) != 0 )
    {
      v6 = *((_DWORD *)v2 + 297) <= 0;
      v34 = 0;
      if ( !v6 )
      {
        do
        {
          v7 = 0;
          if ( dword_103DAFA8 > 0 )
          {
            while ( 1 )
            {
              v30 = (double)sub_10115FB0() * 0.000030518509;
              v31 = (double)sub_10115FB0() * 0.000030518509;
              v37 = sub_10115FB0();
              v8 = *(int (__thiscall **)(float *))(*(_DWORD *)v4 + 260);
              v32 = (double)v37 * 0.000030518509;
              v9 = (float *)v8(v4);
              v10 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 264))(v4);
              v11 = v10[1] - v9[1];
              v12 = *(int (__thiscall **)(float *))(*(_DWORD *)v4 + 260);
              v13 = v10[2] - v9[2];
              v27 = (*v10 - *v9) * v30;
              v28 = v11 * v31;
              v29 = v13 * v32;
              v14 = (float *)v12(v4);
              v15 = *(_DWORD *)v4;
              v26[0] = *v14 + v27;
              v26[1] = v14[1] + v28;
              v26[2] = v14[2] + v29;
              v16 = *(_DWORD *)dword_104131A0;
              v17 = (*(int (__thiscall **)(float *, float *))(v15 + 12))(v4, v26);
              if ( ((*(int (__thiscall **)(int, int))(v16 + 4))(dword_104131A0, v17) & 1) != 0 )
                break;
              if ( ++v7 >= dword_103DAFA8 )
                goto LABEL_13;
            }
            v18 = (float *)sub_100F2B60(10, *((_DWORD *)v4 + 372), v26);
            if ( v18 )
            {
              v33 = *((_DWORD *)v4 + 302);
              v19 = (double)-v33;
              v36 = v19;
              v38 = (double)v33 - v19;
              v33 = sub_10115FB0();
              v24 = (double)v33 * 0.000030518509 * v38 + v36;
              v33 = sub_10115FB0();
              v25 = (double)v33 * 0.000030518509 * v38 + v36;
              v33 = sub_10115FB0();
              v20 = (double)v33 * 0.000030518509 * v38 + v36;
              v18[6] = v24;
              v18[7] = v25;
              v18[8] = v20;
              v18[8] = v18[8] - v4[306];
              v18[9] = 0.0;
              v18[10] = (double)*((int *)v4 + 303)
                      + (double)sub_10115FB0()
                      * ((double)*((int *)v4 + 304) - (double)*((int *)v4 + 303))
                      * 0.000030518509;
              if ( ((_BYTE)v4[307] & 2) != 0 )
              {
                v21 = (double)sub_10115FB0();
                v22 = v4[300] * 0.000099999997;
                v23 = 0.000099999997 * v4[301];
              }
              else
              {
                v21 = (double)sub_10115FB0();
                v22 = v4[300];
                v23 = v4[301];
              }
              v18[11] = v22 + v21 * (v23 - v22) * 0.000030518509;
              v18[12] = v4[298];
            }
LABEL_13:
            v2 = v35;
          }
          result = v34 + 1;
          v34 = result;
        }
        while ( result < *((_DWORD *)v2 + 297) );
      }
    }
  }
  v2[371] = 1.0 / (double)*((int *)v2 + 297);
  v2[372] = 0.0;
  return result;
}
