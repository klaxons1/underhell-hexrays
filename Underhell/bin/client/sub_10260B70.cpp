void __thiscall sub_10260B70(int this)
{
  int v2; // ebx
  int v3; // ebp
  long double v4; // st7
  long double v5; // st6
  int v6; // eax
  void (__thiscall **v7)(int, _DWORD); // edi
  _DWORD *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st7
  int v12; // ecx
  float *i; // edx
  int v14; // edx
  double v15; // st5
  double v16; // st4
  int v17; // ebp
  int v18; // edx
  double v19; // rt2
  int v20; // ecx
  double v21; // rtt
  double v22; // st4
  double v23; // st7
  float *v24; // edi
  double v25; // rt0
  double v26; // st4
  double v27; // st6
  double v28; // rt1
  double v29; // st4
  double v30; // st5
  int v31; // ebp
  int v32; // [esp-14h] [ebp-3Ch]
  int v33; // [esp-10h] [ebp-38h]
  int v34; // [esp-Ch] [ebp-34h]
  float v35; // [esp+8h] [ebp-20h]
  float v36; // [esp+Ch] [ebp-1Ch]
  float v37; // [esp+10h] [ebp-18h]
  float v38; // [esp+14h] [ebp-14h]
  float v39; // [esp+14h] [ebp-14h]
  int v40; // [esp+18h] [ebp-10h]
  int v41; // [esp+18h] [ebp-10h]
  float v42; // [esp+1Ch] [ebp-Ch]
  float v43; // [esp+20h] [ebp-8h]
  int v44; // [esp+24h] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 232) )
  {
    v2 = *(_DWORD *)(this + 224);
    v3 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this)
       - *(_DWORD *)(this + 296)
       - *(_DWORD *)(this + 292);
    v4 = *(float *)(this + 244)
       / (double)(sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this)
                / (*(_DWORD *)(this + 292) + *(_DWORD *)(this + 296)));
    v42 = v4;
    v5 = *(float *)(16 * v2 + *(_DWORD *)(this + 208)) - v4;
    v38 = v5;
    v39 = v38 - fmod(v5, v4);
    v6 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this);
    v40 = dword_1047CA6C;
    v7 = (void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40);
    v43 = (double)v6 / (*(float *)(this + 264) - *(float *)(this + 260));
    v8 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 228))(this, &v44);
    (*v7)(v40, *v8);
    v9 = *(float *)(16 * *(_DWORD *)(this + 220) + *(_DWORD *)(this + 208) + 4);
    v10 = v9;
    if ( v3 > 0 )
    {
      while ( v2 >= 0 )
      {
        if ( v2 >= *(_DWORD *)(this + 212) )
          break;
        if ( v2 > *(_DWORD *)(this + 236) )
          break;
        v14 = *(_DWORD *)(this + 208);
        if ( *(_DWORD *)(v14 + 16 * v2 + 8) == v2 )
          break;
        v15 = 0.0;
        v16 = v39;
        v41 = v3 - (*(_DWORD *)(this + 292) + *(_DWORD *)(this + 296));
        v17 = *(_DWORD *)(this + 208);
        v18 = *(_DWORD *)(16 * v2 + v14 + 8);
        while ( v18 >= 0 )
        {
          if ( v18 >= *(_DWORD *)(this + 212) )
            break;
          if ( v18 > *(_DWORD *)(this + 236) )
            break;
          v20 = 16 * v18;
          if ( *(_DWORD *)(16 * v18 + v17 + 8) == v18 )
            break;
          v21 = v16;
          v22 = v9;
          v23 = v21;
          v24 = (float *)(16 * v2 + v17 + 4);
          if ( v22 > *v24 )
            v22 = *v24;
          v25 = v22;
          v26 = v10;
          v27 = v25;
          if ( v26 < *v24 )
            v26 = *v24;
          v28 = v26;
          v29 = v15;
          v30 = v28;
          if ( v29 < *v24 )
            v29 = *v24;
          if ( *(float *)(v20 + v17) <= v23 )
          {
            v37 = v29;
            v35 = v30;
            v36 = v27;
            v39 = v23 - v42;
            goto LABEL_30;
          }
          v2 = v18;
          v18 = *(_DWORD *)(v20 + v17 + 8);
          v19 = v29;
          v16 = v23;
          v9 = v27;
          v10 = v30;
          v15 = v19;
        }
        v37 = v15;
        v35 = v10;
        v36 = v9;
LABEL_30:
        v31 = *(_DWORD *)dword_1047CA6C;
        v44 = dword_1047CA6C;
        v34 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this);
        v33 = v41 + *(_DWORD *)(this + 292);
        v32 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this) - (int)(v37 * v43);
        (*(void (__thiscall **)(int, int, int, int, int))(v31 + 48))(v44, v41, v32, v33, v34);
        v11 = v35;
        if ( v41 <= 0 )
          goto LABEL_4;
        v3 = v41;
        v10 = v35;
        v9 = v36;
      }
    }
    v11 = v10;
LABEL_4:
    if ( *(_BYTE *)(this + 268) )
    {
      v12 = 0;
      if ( *(int *)(this + 284) > 0 )
      {
        for ( i = *(float **)(this + 272); v11 >= *i; ++i )
        {
          if ( ++v12 >= *(_DWORD *)(this + 284) )
          {
            *(float *)(this + 260) = 0.0;
            *(float *)(this + 264) = v11;
            return;
          }
        }
        v11 = *(float *)(*(_DWORD *)(this + 272) + 4 * v12);
      }
      *(float *)(this + 260) = 0.0;
      *(float *)(this + 264) = v11;
    }
  }
}
