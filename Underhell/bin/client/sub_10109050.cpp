void __userpurge sub_10109050(int a1@<ecx>, int a2@<ebp>, _DWORD *a3, float *a4, int a5, int a6)
{
  int v6; // edi
  double v7; // st7
  double v8; // st5
  double v9; // rt0
  double v10; // st5
  int v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // ecx
  double v15; // st5
  double v16; // st5
  float v17[20]; // [esp+24h] [ebp-10Ch] BYREF
  _BYTE v18[12]; // [esp+74h] [ebp-BCh] BYREF
  int v19; // [esp+80h] [ebp-B0h] BYREF
  float v20; // [esp+A0h] [ebp-90h]
  char v21; // [esp+AAh] [ebp-86h]
  _BYTE v22[28]; // [esp+C8h] [ebp-68h]
  int v23; // [esp+E4h] [ebp-4Ch] BYREF
  float v24[2]; // [esp+F0h] [ebp-40h] BYREF
  float v25; // [esp+F8h] [ebp-38h]
  float v26[2]; // [esp+FCh] [ebp-34h] BYREF
  float v27; // [esp+104h] [ebp-2Ch]
  float v28[2]; // [esp+108h] [ebp-28h] BYREF
  float v29; // [esp+110h] [ebp-20h]
  int v30; // [esp+114h] [ebp-1Ch]
  int v31; // [esp+118h] [ebp-18h]
  int v32; // [esp+11Ch] [ebp-14h]
  int v33; // [esp+120h] [ebp-10h]
  int v34; // [esp+124h] [ebp-Ch]
  void *v35; // [esp+128h] [ebp-8h]
  void *retaddr; // [esp+130h] [ebp+0h]

  v34 = a2;
  v35 = retaddr;
  v30 = a1;
  if ( sub_100F7AF0(a3) )
  {
    sub_101EDFB0(a5, v26);
    v27 = 0.0;
    v6 = 36;
    v31 = 0;
    v33 = 36;
    while ( 1 )
    {
      v7 = (double)v33;
      v24[0] = v26[0] * v7 + *a4;
      v8 = v26[1] * v7 + a4[1];
      v24[1] = v8;
      v9 = v8;
      v10 = v7 * v27 + a4[2] + *(float *)(a6 + 8);
      v25 = v10;
      v28[0] = v24[0];
      v28[1] = v9;
      v29 = v10 - 160.0;
      sub_1000E430(v17, v24, v28);
      sub_1012D400(0, 8);
      (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
        dword_104131A0,
        v17,
        33570827,
        &v23,
        v18);
      if ( *(_DWORD *)(dword_10439134 + 48) )
        sub_10130AC0((int)v18, (int)&v19, 255, 0, 0, 1, 5.0);
      if ( v21 || 1.0 == v20 )
        break;
      v6 += 12;
      v11 = v31 + 1;
      v31 = v11;
      v33 = v6;
      *(float *)&v22[4 * v11] = v20 * (v29 - v25) + v25;
      if ( v6 >= 108 )
      {
        v12 = 0;
        v13 = 1;
        v33 = 0;
        if ( v11 <= 1 )
          goto LABEL_17;
        do
        {
          v14 = (int)(*(float *)&v22[4 * v13 + 4] - *(float *)&v22[4 * v13]);
          v32 = v14;
          v15 = (double)v14;
          if ( v15 <= -0.1 || v15 >= 0.1 )
          {
            if ( v12 )
            {
              v32 = v14 - v12;
              v16 = (double)(v14 - v12);
              if ( v16 > 0.1 || v16 < -0.1 )
                return;
            }
            ++v33;
            v12 = v14;
          }
          ++v13;
        }
        while ( v13 < v31 );
        if ( v12 )
        {
          if ( v33 >= 2 )
          {
            v32 = -v12;
            *(float *)(v30 + 32) = (double)-v12 * *(float *)(dword_10436AEC + 44);
          }
        }
        else
        {
LABEL_17:
          *(float *)(v30 + 32) = 0.0;
        }
        return;
      }
    }
  }
}
