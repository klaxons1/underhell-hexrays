char __usercall sub_10317310@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  char result; // al
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st7
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // rt1
  double v21; // st6
  int v22; // eax
  int v23; // edx
  int v24; // eax
  double v25; // st7
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  float v31; // [esp+30h] [ebp-1Ch]
  float v32; // [esp+38h] [ebp-14h] BYREF
  float v33; // [esp+3Ch] [ebp-10h]
  float v34; // [esp+40h] [ebp-Ch]
  int v35; // [esp+44h] [ebp-8h]
  float v36; // [esp+48h] [ebp-4h]

  sub_10313300((float *)a1);
  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a1 + 4080) )
    return 0;
  v5 = *(_DWORD *)(a1 + 248) >> 20;
  *(_DWORD *)(a1 + 4076) = 2;
  if ( (v5 & 1) != 0 )
    *(_DWORD *)(a1 + 3776) = 2;
  v6 = 1;
  v35 = 1;
  if ( sub_103142C0((_BYTE *)a1) )
  {
    v7 = 1;
  }
  else if ( *(_DWORD *)(a1 + 4120) == 4 )
  {
    v7 = 2;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 4240);
  }
  switch ( v7 )
  {
    case 0:
    case 3:
      v8 = *(_DWORD *)(dword_106E353C + 48);
      v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
             dword_106B31E4,
             v8,
             (int)((double)v8 + (double)v8));
      v6 = v35;
      *(_DWORD *)(a1 + 4088) = v9;
      LODWORD(v36) = v9 - v8;
      *(float *)(a1 + 4084) = (double)(v9 - v8) * 0.1;
      break;
    case 1:
      *(float *)(a1 + 4084) = 0.0;
      *(_DWORD *)(a1 + 4088) = 60;
      v6 = 2;
      break;
    case 2:
      *(float *)(a1 + 4084) = 0.0;
      if ( *(_DWORD *)(a1 + 4120) == 4 )
      {
        *(_DWORD *)(a1 + 4088) = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 4088) = 0;
        v6 = 1000;
      }
      break;
    default:
      break;
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
    && (v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 320))(v10))
    && (v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1),
        (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 1096))(v11)) )
  {
    v13 = sub_103131E0((void *)a1);
    (*(void (__thiscall **)(int, float *, _DWORD, int, int))(*(_DWORD *)v13 + 540))(v13, &v32, 0, a3, a2);
    v31 = v32 * v32 + v33 * v33 + v34 * v34;
    v14 = off_10689708(v31);
    v15 = 600.0;
    if ( v14 <= 600.0 )
    {
      v15 = 150.0;
      if ( v14 >= 150.0 )
        v15 = v14;
      v16 = 150.0;
    }
    else
    {
      v16 = 150.0;
    }
    v17 = (v15 - v16) * 0.0022222223;
    v18 = 400.0;
    v19 = 100.0;
    if ( *(float *)(a1 + 4132) <= 400.0 )
    {
      if ( *(float *)(a1 + 4132) >= 100.0 )
        v19 = *(float *)(a1 + 4132);
      v20 = v19;
      v19 = 100.0;
      v18 = v20;
    }
    v21 = (v17 + (v18 - v19) * 0.0033333334) * 0.5;
    v36 = v21;
    v22 = (int)(7.0 - v21 * 7.5 + 0.5);
    if ( v22 < 1 )
      v23 = 0;
    else
      v23 = v22 - 1;
    v24 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, v23, v22 + 1);
    v25 = v36 * 65.0;
    *(_DWORD *)(a1 + 4112) = v24;
    v26 = (int)(70.0 - v25 + 0.5);
    if ( v26 < 5 )
      v27 = 0;
    else
      v27 = v26 - 5;
    *(_DWORD *)(a1 + 4188) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                               dword_106B31E4,
                               v27,
                               v26 + 5);
    *(float *)(a1 + 4116) = sub_102191B0(v36, 0.0, 1.0, 150.0, 350.0);
  }
  else
  {
    if ( sub_103142C0((_BYTE *)a1) )
      v12 = 200;
    else
      v12 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 6, 9);
    *(_DWORD *)(a1 + 4112) = v12;
    *(_DWORD *)(a1 + 4188) = 10000;
  }
  v28 = v6 * *(_DWORD *)(a1 + 4188);
  *(_DWORD *)(a1 + 4112) *= v6;
  result = 1;
  *(_DWORD *)(a1 + 4108) = 0;
  *(_DWORD *)(a1 + 4184) = 0;
  *(_DWORD *)(a1 + 4188) = v28;
  return result;
}
