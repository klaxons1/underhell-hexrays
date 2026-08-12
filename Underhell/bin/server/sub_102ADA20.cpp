int __thiscall sub_102ADA20(int *this, int a2, _BYTE *a3)
{
  int v4; // eax
  _DWORD *v5; // ebx
  char *v6; // eax
  float *v7; // eax
  float *v8; // eax
  int v9; // edi
  int v10; // esi
  int v11; // edx
  char *v13; // [esp-18h] [ebp-13Ch]
  char *v14; // [esp-18h] [ebp-13Ch]
  char *v15; // [esp-14h] [ebp-138h]
  char *v16; // [esp-14h] [ebp-138h]
  _DWORD v17[20]; // [esp+10h] [ebp-114h] BYREF
  int v18[19]; // [esp+60h] [ebp-C4h] BYREF
  _DWORD v19[5]; // [esp+ACh] [ebp-78h] BYREF
  float v20[3]; // [esp+C0h] [ebp-64h] BYREF
  int v21[3]; // [esp+CCh] [ebp-58h] BYREF
  float v22[3]; // [esp+D8h] [ebp-4Ch] BYREF
  float v23[3]; // [esp+E4h] [ebp-40h] BYREF
  int v24[3]; // [esp+F0h] [ebp-34h] BYREF
  int v25; // [esp+FCh] [ebp-28h]
  int v26; // [esp+100h] [ebp-24h]
  int v27; // [esp+104h] [ebp-20h]
  int v28; // [esp+108h] [ebp-1Ch]
  int v29; // [esp+10Ch] [ebp-18h]
  int v30; // [esp+110h] [ebp-14h]
  float v31; // [esp+114h] [ebp-10h] BYREF
  int v32; // [esp+118h] [ebp-Ch]
  float v33; // [esp+11Ch] [ebp-8h]
  char v34; // [esp+123h] [ebp-1h]

  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    v27 = 0;
    if ( a2 )
    {
      v29 = 0;
      v30 = 0;
      sub_10072560(v18);
      sub_1006FF60(v18, this[240]);
      sub_10070FE0(v18, 400);
      memset(v24, 0, sizeof(v24));
      v25 = 0;
      v26 = 0;
      sub_100727B0(0, &flt_106F1CA8, v18, v24);
      v4 = 0;
      v28 = 0;
      if ( v25 > 0 )
      {
        do
        {
          v5 = *(_DWORD **)(v24[0] + 4 * v4);
          if ( v5 )
          {
            v6 = *(char **)(a2 + 260);
            if ( (char *)v5[65] == v6 )
              goto LABEL_9;
            if ( !v6 )
              v6 = (char *)String;
            if ( sub_100D6190(v5, v6) )
            {
LABEL_9:
              ++v30;
              sub_100703C0((int)v5, 5, &v31);
              v34 = 0;
              v7 = (float *)sub_10073730(5);
              v23[0] = *v7 + v31;
              v23[1] = v7[1] + *(float *)&v32;
              v23[2] = v7[2] + v33;
              v8 = (float *)sub_10073710(5);
              v22[0] = *v8 + v31;
              v22[1] = v8[1] + *(float *)&v32;
              v22[2] = v8[2] + v33;
              sub_1025F990(v19, (int)v17, 20, 0);
              v9 = sub_1025F9C0((int)v22, (int)v23, (int)v19);
              v10 = 0;
              if ( v9 > 0 )
              {
                while ( *(_BYTE *)(v17[v10] + 306) != 6 || sub_101B4DE0(v17[v10]) <= 250.0 )
                {
                  if ( ++v10 >= v9 )
                    goto LABEL_16;
                }
                ++v29;
                v11 = v17[v10];
                v34 = 1;
                v27 = v11;
                if ( v5 == (_DWORD *)a2 )
                  *a3 = 1;
              }
LABEL_16:
              if ( *(_DWORD *)(dword_106DBB3C + 48) == 1 )
              {
                if ( v34 )
                {
                  v20[0] = v31;
                  v20[1] = *(float *)&v32;
                  v20[2] = v33 + 5.0;
                  v15 = sub_10073730(5);
                  v13 = sub_10073710(5);
                  sub_1011BB20((int)v20, (int)v13, (int)v15, 255, 0, 0, 128, 0.25);
                }
                else
                {
                  *(float *)v21 = v31;
                  v21[1] = v32;
                  *(float *)&v21[2] = v33 + 5.0;
                  v16 = sub_10073730(5);
                  v14 = sub_10073710(5);
                  sub_1011BB20((int)v21, (int)v14, (int)v16, 0, 255, 0, 128, 0.25);
                }
              }
            }
          }
          v4 = v28 + 1;
          v28 = v4;
        }
        while ( v4 < v25 );
        if ( v30 > 0 && v29 == v30 )
        {
          sub_102375F0(v24);
          sub_100725D0(v18);
          return v27;
        }
      }
      sub_102375F0(v24);
      sub_100725D0(v18);
    }
  }
  return 0;
}
