void __thiscall sub_101B3C20(
        _DWORD *this,
        float a2,
        float a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edi
  int v13; // eax
  int v14; // ebx
  float *v15; // eax
  float v16; // edi
  int v17; // edx
  int v18; // ecx
  float *v19; // eax
  float *v20; // eax
  int v21; // edi
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  double v25; // st7
  int v26; // edi
  double v27; // st6
  int v28; // esi
  int v29; // edi
  int v30; // ebx
  int v31; // eax
  int v32; // ecx
  double v33; // st7
  float v34; // [esp+Ch] [ebp-2Ch]
  int v35; // [esp+18h] [ebp-20h]
  float v36; // [esp+1Ch] [ebp-1Ch]
  int v37; // [esp+20h] [ebp-18h]
  int v38; // [esp+24h] [ebp-14h] BYREF
  int v39; // [esp+28h] [ebp-10h] BYREF
  int v40; // [esp+2Ch] [ebp-Ch] BYREF
  int v41; // [esp+30h] [ebp-8h] BYREF
  int v42; // [esp+34h] [ebp-4h] BYREF

  v11 = a5;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 536))(a5);
  v14 = *(_DWORD *)(v13 + 8);
  v35 = *(int *)v13;
  v36 = *(float *)(v13 + 4);
  v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 36))(v11);
  v16 = v15[1];
  v17 = *((int *)v15 + 2);
  v34 = *v15;
  v18 = this[189];
  if ( v18 )
  {
    v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 40))(v18);
    v35 = *(int *)v19;
    v37 = *((int *)v19 + 2);
    v36 = v19[1] + 90.0;
    v20 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[189] + 268))(this[189]);
    v14 = v37;
    v34 = *v20;
    v16 = v20[1];
    v17 = *((int *)v20 + 2);
  }
  sub_101B3A70(
    this,
    a2,
    a3,
    a4,
    v34,
    v16,
    v17,
    v35,
    v36,
    v14,
    (float *)&v41,
    (float *)&v40,
    (float *)&v38,
    (float *)&v39);
  *(float *)&v39 = 0.75 - (*(float *)&v39 - 1.0) * 0.25;
  switch ( a6 )
  {
    case 0:
      v21 = this[191];
      goto LABEL_9;
    case 1:
      v21 = this[192];
      goto LABEL_9;
    case 2:
      v21 = this[194];
      goto LABEL_9;
    case 3:
      v21 = this[195];
      goto LABEL_9;
    case 4:
    case 5:
      v21 = this[193];
LABEL_9:
      v22 = a10;
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(
        dword_1047CA6C,
        a8,
        a9,
        a10,
        a11);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, v21);
      (*(void (__thiscall **)(int, int, int *, int *))(*(_DWORD *)dword_1047CA6C + 132))(dword_1047CA6C, v21, &v42, &a5);
      v23 = (int)((double)v42 * *(float *)&v39);
      v42 = v23;
      v24 = (int)(*(float *)&v39 * (double)a5);
      a5 = v24;
      if ( a6 == 5 )
      {
        v23 *= 2;
        v24 *= 2;
        v42 = v23;
        a5 = v24;
      }
      a6 = v24 >> 1;
      v25 = *(float *)&v41 - (double)(v23 >> 1);
      v26 = *(_DWORD *)dword_1047CA6C;
      *(float *)&v41 = v25;
      v27 = *(float *)&v40 - (double)(v24 >> 1);
      *(float *)&v40 = v27;
      (*(void (__thiscall **)(int, int, int, int, int))(v26 + 136))(
        dword_1047CA6C,
        (int)v25,
        (int)v27,
        (int)((double)v42 + v25),
        (int)((double)a5 + v27));
      if ( *(float *)&v39 > 0.75 )
      {
        v28 = this[65];
        if ( v28 > 0 )
        {
          (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(
            dword_1047CA6C,
            a8,
            a9,
            v22,
            v28);
          v29 = RandomInt(1, 4);
          v30 = RandomInt(1, 4);
          a6 = RandomInt(-1, 1);
          v31 = RandomInt(-1, 1);
          v32 = a6;
          a6 = v29 - a6;
          v33 = (double)a6;
          a6 = v30 - v31;
          a5 += v30 + v31;
          (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
            dword_1047CA6C,
            (int)(*(float *)&v41 - v33),
            (int)(*(float *)&v40 - (double)(v30 - v31)),
            (int)((double)(v29 + v32 + v42) + *(float *)&v41 - v33),
            (int)((double)a5 + *(float *)&v40 - (double)(v30 - v31)));
        }
      }
      break;
    default:
      return;
  }
}
