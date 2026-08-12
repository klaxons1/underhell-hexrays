float *__userpurge sub_1038A650@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, float *a3, float *a4)
{
  int v5; // eax
  int v6; // edi
  float *result; // eax
  float *v8; // eax
  double v10; // st4
  double v11; // st5
  double v12; // st7
  double v13; // st7
  double v14; // st6
  float v15; // edx
  double v16; // st7
  float v17; // [esp+0h] [ebp-44h]
  float v18; // [esp+10h] [ebp-34h]
  float v19[3]; // [esp+1Ch] [ebp-28h] BYREF
  float v20[3]; // [esp+28h] [ebp-1Ch] BYREF
  float v21; // [esp+34h] [ebp-10h] BYREF
  float v22; // [esp+38h] [ebp-Ch]
  float v23; // [esp+3Ch] [ebp-8h]
  float v24; // [esp+40h] [ebp-4h]
  float v25; // [esp+50h] [ebp+Ch]

  v5 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
  v6 = v5;
  if ( v5 )
  {
    if ( a1[1058] < a1[1059] )
    {
      v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
      v10 = a4[1] - v8[1];
      v11 = a4[2] - v8[2];
      v18 = v11 * v11 + v10 * v10 + (*a4 - *v8) * (*a4 - *v8);
      v12 = off_10689708(v18);
      v25 = v12;
      if ( v12 <= 1000.0 )
      {
        v13 = 1.2;
        v14 = -0.2;
      }
      else
      {
        if ( v12 > 2000.0 )
        {
          v25 = 2000.0;
          v12 = 2000.0;
        }
        v17 = v12;
        v24 = sub_102191B0(v17, 1000.0, 2000.0, -0.2, -0.69999999);
        v13 = sub_102191B0(v25, 1000.0, 2000.0, 1.2, 1.7);
        v14 = v24;
      }
      v20[0] = v13;
      v20[1] = v20[0];
      v20[2] = v13 * 0.75;
      v19[0] = v14;
      v19[1] = v19[0];
      v19[2] = v19[0];
      sub_10111860(v6 + 320, v19, v20, &v21);
      result = a3;
      v21 = v21 - *a4;
      v22 = v22 - a4[1];
      v15 = v22;
      v16 = v23 - a4[2];
      *a3 = v21;
      a3[1] = v15;
      v23 = v16;
      a3[2] = v23;
    }
    else
    {
      sub_1038A4E0(a3, v5, a4);
      return a3;
    }
  }
  else
  {
    sub_1002E900(a1, a2, a3, a4);
    return a3;
  }
  return result;
}
