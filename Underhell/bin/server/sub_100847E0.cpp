int __thiscall sub_100847E0(void *this)
{
  float *v2; // edi
  float *v3; // eax
  double v4; // st7
  char *v5; // eax
  int v6; // ecx
  int v7; // ebx
  double v8; // st7
  float *v9; // edi
  _DWORD *v10; // ebx
  int v11; // eax
  int v12; // edi
  float *v13; // eax
  int v14; // ecx
  bool v15; // bl
  char *v16; // eax
  int *v18; // ecx
  int v19; // eax
  int i; // edx
  int *v21; // edi
  int v22; // ebx
  int v23; // eax
  int v24; // edi
  int v25; // ecx
  char *v26; // eax
  float v27; // [esp+14h] [ebp-170h]
  float v28; // [esp+18h] [ebp-16Ch]
  int v29; // [esp+18h] [ebp-16Ch]
  char Buffer[256]; // [esp+28h] [ebp-15Ch] BYREF
  int v31[14]; // [esp+128h] [ebp-5Ch] BYREF
  int v32; // [esp+160h] [ebp-24h]
  float *v33; // [esp+164h] [ebp-20h]
  int v34; // [esp+168h] [ebp-1Ch] BYREF
  float v35; // [esp+16Ch] [ebp-18h]
  float v36; // [esp+170h] [ebp-14h]
  float v37; // [esp+174h] [ebp-10h]
  float v38; // [esp+178h] [ebp-Ch] BYREF
  float v39; // [esp+17Ch] [ebp-8h]
  float v40; // [esp+180h] [ebp-4h]

  v2 = (float *)sub_100A6030(*((_DWORD *)this + 9));
  v3 = (float *)*((_DWORD *)this + 1);
  v4 = *v2 - v3[179];
  v33 = v2;
  v38 = v4;
  v39 = v2[1] - v3[180];
  v40 = v2[2] - v3[181];
  v37 = off_10689714();
  if ( *((_DWORD *)this + 3) != 3 )
  {
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v5 = sub_1001E280(Buffer, "[Nav] %s", "Climb start\n");
      sub_10029660(*((_DWORD **)this + 1), (int)v5);
    }
    v6 = *((_DWORD *)this + 9);
    v7 = **((_DWORD **)this + 5);
    v32 = *((_DWORD *)this + 5);
    v28 = sub_100A6080(v6);
    (*(void (__thiscall **)(int, float *, float *, float, _DWORD))(v7 + 16))(
      v32,
      v2,
      &v38,
      COERCE_FLOAT(LODWORD(v37)),
      LODWORD(v28));
  }
  *((_DWORD *)this + 3) = 3;
  memset(v31, 0, sizeof(v31));
  if ( v37 <= 0.01 )
    goto LABEL_20;
  v8 = v37 - 0.005;
  if ( v8 > 0.1 )
    v8 = 0.1;
  v9 = (float *)*((_DWORD *)this + 1);
  v10 = (_DWORD *)*((_DWORD *)this + 6);
  *(float *)&v34 = v38 * v8 + v9[179];
  v35 = v39 * v8 + v9[180];
  v36 = v8 * v40 + v9[181];
  v11 = sub_1007E610((int)this);
  if ( sub_1007C550(v10, 3, v9 + 179, (float *)&v34, 33701899, v11, 100.0, 0, (float *)v31) )
    goto LABEL_20;
  if ( !v31[7] )
    goto LABEL_20;
  v12 = sub_100D7680(v31[7]);
  if ( !v12 )
    goto LABEL_20;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 296))(v12) )
  {
    if ( sub_100223E0((_DWORD *)v12) != 3 )
      goto LABEL_20;
    if ( v40 > 0.01 )
      goto LABEL_20;
    v13 = (float *)sub_100A6030(*(_DWORD *)(*(_DWORD *)(v12 + 2588) + 36));
    *(float *)&v34 = *v13 - *(float *)(v12 + 716);
    v35 = v13[1] - *(float *)(v12 + 720);
    v36 = v13[2] - *(float *)(v12 + 724);
    off_10689714();
    if ( v35 * v39 + *(float *)&v34 * v38 + v36 * v40 >= 0.0
      || (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v12 + 2588) + 84))(
           *(_DWORD *)(v12 + 2588),
           *((_DWORD *)this + 10))
      && (v14 = *((_DWORD *)this + 1),
          *((float *)this + 11) = *(float *)(dword_106B31C8 + 12),
          *((_DWORD *)this + 3) = 0,
          *(float *)(v14 + 552) = 1.0,
          v15 = sub_10083810((int)this, 0, 0) == 0,
          *(float *)(*((_DWORD *)this + 1) + 552) = 0.0,
          *((_DWORD *)this + 3) = 3,
          !v15) )
    {
LABEL_20:
      v18 = (int *)*((_DWORD *)this + 9);
      v19 = *v18;
      for ( i = 0; v19; ++i )
      {
        if ( *(_DWORD *)(v19 + 36) != 3 )
          break;
        v19 = *(_DWORD *)(v19 + 40);
      }
      v21 = (int *)*((_DWORD *)this + 5);
      v22 = *v21;
      v29 = i;
      v27 = sub_100A6080(v18);
      v23 = (*(int (__thiscall **)(int *, float *, float *, float, _DWORD, int))(v22 + 20))(
              v21,
              v33,
              &v38,
              COERCE_FLOAT(LODWORD(v37)),
              LODWORD(v27),
              v29);
      v24 = v23;
      if ( v23 == 1 )
      {
        if ( *(_DWORD *)(**((_DWORD **)this + 9) + 40) )
          sub_100820C0((int)this);
        else
          (*(void (__thiscall **)(void *))(*(_DWORD *)this + 48))(this);
        v25 = *((_DWORD *)this + 9);
        if ( *(_DWORD *)v25 && *(_DWORD *)(*(_DWORD *)v25 + 40) && sub_100A6190(v25) == 3 )
          return v24;
        if ( !*(_DWORD *)(dword_106934A4 + 48) )
          goto LABEL_36;
        v26 = sub_1001E280(Buffer, "[Nav] %s", "Climb stop\n");
      }
      else
      {
        if ( !v23 )
          return v24;
        if ( !*(_DWORD *)(dword_106934A4 + 48) )
        {
LABEL_36:
          (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 5) + 24))(*((_DWORD *)this + 5));
          *((_DWORD *)this + 3) = 0;
          return v24;
        }
        v26 = sub_1001E280(Buffer, "[Nav] %s", "Climb fail (2)\n");
      }
      sub_10029660(*((_DWORD **)this + 1), (int)v26);
      goto LABEL_36;
    }
  }
  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v16 = sub_1001E280(Buffer, "[Nav] %s", "Climb fail\n");
    sub_10029660(*((_DWORD **)this + 1), (int)v16);
  }
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 5) + 24))(*((_DWORD *)this + 5));
  *((_DWORD *)this + 3) = 0;
  return -3;
}
