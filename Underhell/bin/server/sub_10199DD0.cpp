int __usercall sub_10199DD0@<eax>(int a1@<ebp>, float *a2, int a3)
{
  float v3; // edx
  float v4; // edi
  int v5; // esi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st6
  double v11; // st7
  double v12; // st6
  double v13; // st6
  double v14; // st6
  int v16; // eax
  float v17[20]; // [esp+24h] [ebp-FCh] BYREF
  _BYTE v18[12]; // [esp+74h] [ebp-ACh] BYREF
  float v19[10]; // [esp+80h] [ebp-A0h] BYREF
  char v20; // [esp+ABh] [ebp-75h]
  int v21; // [esp+CCh] [ebp-54h] BYREF
  _BYTE v22[12]; // [esp+D8h] [ebp-48h] BYREF
  float v23[3]; // [esp+E4h] [ebp-3Ch] BYREF
  float v24[3]; // [esp+F0h] [ebp-30h] BYREF
  float v25; // [esp+FCh] [ebp-24h] BYREF
  float v26; // [esp+100h] [ebp-20h]
  float v27; // [esp+104h] [ebp-1Ch] BYREF
  float v28; // [esp+108h] [ebp-18h]
  float v29; // [esp+10Ch] [ebp-14h]
  float v30; // [esp+110h] [ebp-10h]
  int v31; // [esp+114h] [ebp-Ch]
  void *v32; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v31 = a1;
  v32 = retaddr;
  v3 = a2[1];
  v4 = a2[2];
  v28 = *a2;
  v29 = v3;
  v30 = v4;
  switch ( a3 )
  {
    case 0:
      v5 = -1;
      v6 = v29 - 16.0;
      v29 = v6;
      v7 = v28;
      v8 = 50.0;
      break;
    case 1:
      v9 = v28 + 16.0;
      goto LABEL_5;
    case 2:
      v5 = -1;
      v6 = v29 + 16.0;
      v29 = v6;
      v7 = v28;
      v8 = 50.0;
      break;
    case 3:
      v9 = v28 - 16.0;
LABEL_5:
      v28 = v9;
      v5 = -1;
      v7 = v9;
      v6 = v29;
      v8 = 50.0;
      break;
    default:
      v6 = v29;
      v5 = -1;
      v7 = v28;
      v8 = 50.0;
      break;
  }
  while ( 1 )
  {
    v25 = v28;
    v26 = v29;
    v27 = v4;
    if ( v5 < 4 )
    {
      if ( v5 < 0 )
      {
LABEL_22:
        v11 = 25.0;
      }
      else
      {
        switch ( v5 )
        {
          case 0:
            v13 = v6 - 25.0;
            v11 = 25.0;
            v26 = v13;
            break;
          case 1:
            v11 = 25.0;
            v25 = v7 + 25.0;
            break;
          case 2:
            v14 = v6 + 25.0;
            v11 = 25.0;
            v26 = v14;
            break;
          case 3:
            v11 = 25.0;
            v25 = v7 - 25.0;
            break;
          default:
            goto LABEL_22;
        }
      }
    }
    else
    {
      switch ( v5 )
      {
        case 4:
          v10 = v6 - v8;
          v11 = 25.0;
          v26 = v10;
          break;
        case 5:
          v11 = 25.0;
          v25 = v7 + v8;
          break;
        case 6:
          v12 = v6 + v8;
          v11 = 25.0;
          v26 = v12;
          break;
        case 7:
          v11 = 25.0;
          v25 = v7 - v8;
          break;
        default:
          v11 = 25.0;
          break;
      }
    }
    v27 = v11 + v27;
    v25 = sub_10192230(v25, 0);
    v26 = sub_10192230(v26, 0);
    if ( (unsigned __int8)sub_1019DEA0(&v25, &v27, v22) )
    {
      v23[0] = v25;
      v23[1] = v26;
      v23[2] = v27 + 2.0;
      v24[0] = v28;
      v24[1] = v29;
      v24[2] = v30 + 2.0;
      sub_1001F180(v17, v24, v23);
      sub_10265570(0, 0);
      (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v17,
        81931,
        &v21,
        v18);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v18, (int)v19, 255, 0, 0, 1, 5.0);
      if ( 1.0 == v19[8] && !v20 && !sub_101A0270(&v25) )
        break;
    }
    if ( ++v5 >= 8 )
      return 0;
    v6 = v29;
    v8 = 50.0;
    v7 = v28;
  }
  v16 = sub_10184390(72);
  if ( !v16 )
    return 0;
  return sub_101A0980(v16, (int)&v25, (int)v22, 0);
}
