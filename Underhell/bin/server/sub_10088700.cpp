void __userpurge sub_10088700(int a1@<ecx>, int a2@<ebp>, int *a3, float *a4)
{
  bool v4; // zf
  float *v6; // eax
  int v7; // esi
  int v8; // esi
  int v9; // ecx
  float *v10; // edx
  char *v11; // eax
  const char *v12; // eax
  float *v13; // [esp+0h] [ebp-120h]
  float v14[20]; // [esp+24h] [ebp-FCh] BYREF
  _BYTE v15[12]; // [esp+74h] [ebp-ACh] BYREF
  int v16; // [esp+80h] [ebp-A0h] BYREF
  float v17; // [esp+A0h] [ebp-80h]
  char v18; // [esp+ABh] [ebp-75h]
  int v19; // [esp+CCh] [ebp-54h] BYREF
  float v20[4]; // [esp+D8h] [ebp-48h] BYREF
  float v21[3]; // [esp+E8h] [ebp-38h] BYREF
  char *i; // [esp+F4h] [ebp-2Ch]
  int v23; // [esp+F8h] [ebp-28h] BYREF
  int v24; // [esp+FCh] [ebp-24h]
  int v25; // [esp+100h] [ebp-20h]
  int v26; // [esp+104h] [ebp-1Ch]
  int v27; // [esp+108h] [ebp-18h]
  float *v28; // [esp+10Ch] [ebp-14h]
  int v29; // [esp+110h] [ebp-10h]
  _DWORD v30[3]; // [esp+114h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+120h] [ebp+0h]

  v30[0] = a2;
  v30[1] = retaddr;
  v4 = ((_BYTE)a4[16] & 0x1C) == 0;
  LODWORD(v20[3]) = a1;
  if ( v4 )
  {
    sub_1008D160(v21, 1);
    v23 = SLODWORD(v21[0]);
    v24 = SLODWORD(v21[1]);
    *(float *)&v25 = v21[2] - 37.0;
    v13 = (float *)sub_10073730(1);
    v6 = (float *)sub_10073710(1);
    sub_100231A0((int)v30, a1, v21, (float *)&v23, v6, v13, 147467, 0, 0, (int)v15);
    if ( v18 || 1.0 == v17 )
    {
      if ( !byte_1069362C )
      {
        v7 = 0;
        v23 = 4;
        v24 = 8;
        v25 = 16;
        v29 = 0;
        v27 = 0;
        do
        {
          *((_DWORD *)a4 + 16) = *(&v23 + v7);
          sub_1008D160(v20, 1);
          sub_1001F180(v14, v21, v20);
          sub_10265570(0, 0);
          (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v14,
            147467,
            &v19,
            v15);
          if ( *(_DWORD *)(dword_106CE63C + 48) )
            sub_101A0AD0((int)v15, (int)&v16, 255, 0, 0, 1, 5.0);
          if ( !v18 && 1.0 == v17 && fabs(a4[3] - sub_1008D510(v20)) < 36.0 )
          {
            v8 = sub_10085070(a3, (int)(a4 + 1), a4[14]);
            *(_DWORD *)(v8 + 96) = 0;
            *(_DWORD *)(v8 + 60) = 4;
            *(float *)(v8 + 64) = a4[16];
            sub_10086E40((int)v30, (int)a3, v8);
            if ( v29 )
            {
              v9 = 0;
              v10 = (float *)(v8 + 16);
              v11 = (char *)a4 - v8;
              v26 = 0;
              v28 = (float *)(v8 + 16);
              for ( i = (char *)a4 - v8; ; v11 = i )
              {
                if ( fabs(*(float *)((char *)v10 + (_DWORD)v11) - *v10) > 1.0 )
                {
                  v12 = (const char *)sub_100737F0(v9);
                  DevMsg(2, "Warning: Climb Node %i has different exit heights for hull %s\n", *(_DWORD *)a4, v12);
                  v10 = v28;
                  v9 = v26;
                }
                ++v9;
                ++v10;
                v26 = v9;
                v28 = v10;
                if ( v9 >= 10 )
                  break;
              }
            }
            else
            {
              a4[4] = *(float *)(v8 + 16);
              a4[5] = *(float *)(v8 + 20);
              a4[6] = *(float *)(v8 + 24);
              a4[7] = *(float *)(v8 + 28);
              a4[8] = *(float *)(v8 + 32);
              a4[9] = *(float *)(v8 + 36);
              a4[10] = *(float *)(v8 + 40);
              a4[11] = *(float *)(v8 + 44);
              a4[12] = *(float *)(v8 + 48);
              a4[13] = *(float *)(v8 + 52);
            }
            ++v29;
            v7 = v27;
          }
          v27 = ++v7;
        }
        while ( v7 < 3 );
        if ( !v29 )
          DevMsg("ERROR: Climb Node %i has no way off\n", *(_DWORD *)a4);
        *((_DWORD *)a4 + 16) = 2;
      }
    }
    else
    {
      *((_DWORD *)a4 + 16) = 1;
      sub_10086E40((int)v30, (int)a3, (int)a4);
    }
  }
}
