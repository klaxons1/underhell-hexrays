double __thiscall sub_10419460(int this, float a2)
{
  double result; // st7
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // ecx
  double v7; // st7
  int v8; // ebx
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // edi
  _DWORD *v14; // ecx
  int v15; // eax
  double v16; // st7
  double v17; // st5
  double v18; // st4
  int v19; // eax
  int v20; // eax
  double v21; // st7
  double v22; // st5
  double v23; // st4
  int v24; // eax
  int v25; // eax
  double v26; // rt2
  double v27; // st4
  double v28; // st5
  double v29; // st3
  double v30; // st2
  int v31; // eax
  int v32; // eax
  double v33; // rt0
  double v34; // st2
  double v35; // st3
  double v36; // st1
  double v37; // st0
  int v38; // edx
  int v39; // edx
  double v40; // st6
  double v41; // st5
  float v42; // [esp+0h] [ebp-68h]
  int v43; // [esp+18h] [ebp-50h]
  int v44; // [esp+1Ch] [ebp-4Ch]
  float v45; // [esp+20h] [ebp-48h]
  int v46; // [esp+24h] [ebp-44h]
  float v47; // [esp+28h] [ebp-40h]
  int v48; // [esp+2Ch] [ebp-3Ch] BYREF
  float v49; // [esp+30h] [ebp-38h]
  float v50; // [esp+34h] [ebp-34h]
  int v51; // [esp+38h] [ebp-30h] BYREF
  float v52; // [esp+3Ch] [ebp-2Ch]
  float v53; // [esp+40h] [ebp-28h]
  int v54[3]; // [esp+44h] [ebp-24h] BYREF
  int v55[3]; // [esp+50h] [ebp-18h] BYREF
  int v56[3]; // [esp+5Ch] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 4) != 6 )
    return a2;
  v3 = *(_DWORD *)(this + 240);
  if ( v3 != *(_DWORD *)(this + 260) || v3 <= 0 )
    return a2;
  result = 0.0;
  if ( a2 > 0.0 )
  {
    v4 = -1;
    do
    {
      v45 = sub_10419410((_DWORD *)this, 0, v4);
      v5 = v4 + 1;
      v7 = sub_10419410(v6, 0, v4 + 1);
      if ( v45 <= (double)a2 && v7 >= a2 )
        break;
      ++v4;
    }
    while ( v5 < v3 );
    v8 = v4 - 1;
    v9 = v4 + 2;
    v10 = v4 + 1;
    v46 = v4 + 2;
    if ( v4 - 1 < -2 )
      v8 = -2;
    if ( v4 < -1 )
      v4 = -1;
    v11 = *(_DWORD *)(this + 240);
    if ( v10 >= v11 )
      v10 = *(_DWORD *)(this + 240);
    if ( v9 >= v11 + 1 )
      v46 = v11 + 1;
    v12 = 0;
    v44 = 0;
    v43 = 0;
    if ( v4 >= 0 && v4 < v11 )
    {
      v12 = *(_DWORD *)(this + 228) + 28 * v4;
      v44 = v12;
    }
    if ( v10 >= 0 && v10 < v11 )
      v43 = *(_DWORD *)(this + 228) + 28 * v10;
    if ( v12 )
    {
      if ( v43 )
      {
        if ( (*(_BYTE *)(v44 + 20) & 2) != 0 && (*(_BYTE *)(v43 + 20) & 2) != 0 )
        {
          v13 = sub_10419370((_DWORD *)this, 1, v4);
          v15 = sub_10419370(v14, 1, v10);
          if ( v13 )
          {
            if ( v15 )
            {
              v16 = (a2 - *(float *)(v44 + 16)) / (*(float *)(v43 + 16) - *(float *)(v44 + 16));
              return v16 * *(float *)(v15 + 16) + (1.0 - v16) * *(float *)(v13 + 16);
            }
          }
        }
      }
    }
    v47 = v7 - v45;
    if ( v8 > -2 )
    {
      if ( v8 == -1 )
      {
        v17 = 0.0;
        v18 = 0.0;
        goto LABEL_48;
      }
      v19 = *(_DWORD *)(this + 260);
      if ( v8 == v19 )
      {
        v17 = 1.0;
      }
      else if ( v8 <= v19 )
      {
        v17 = *(float *)(*(_DWORD *)(this + 248) + 28 * v8 + 16);
      }
      else
      {
        v17 = 1.0;
      }
    }
    else
    {
      v17 = 0.0;
    }
    if ( v8 > -2 )
    {
      v20 = *(_DWORD *)(this + 240);
      if ( v8 == v20 )
      {
        v18 = 1.0;
      }
      else if ( v8 <= v20 )
      {
        v18 = *(float *)(*(_DWORD *)(this + 228) + 28 * v8 + 16);
      }
      else
      {
        v18 = 1.0;
      }
    }
    else
    {
      v18 = 0.0;
    }
LABEL_48:
    *(float *)&v51 = v18;
    v52 = v17;
    v21 = 1.0;
    v53 = 0.0;
    if ( v4 == -1 )
    {
      v22 = 0.0;
      v23 = 0.0;
    }
    else
    {
      v24 = *(_DWORD *)(this + 260);
      if ( v4 == v24 )
      {
        v22 = 1.0;
      }
      else if ( v4 <= v24 )
      {
        v22 = *(float *)(*(_DWORD *)(this + 248) + 28 * v4 + 16);
      }
      else
      {
        v22 = 1.0;
      }
      v25 = *(_DWORD *)(this + 240);
      if ( v4 == v25 )
      {
        v23 = 1.0;
      }
      else if ( v4 <= v25 )
      {
        v23 = *(float *)(*(_DWORD *)(this + 228) + 28 * v4 + 16);
      }
      else
      {
        v23 = 1.0;
      }
    }
    *(float *)v55 = v23;
    v26 = v23;
    v27 = v22;
    v28 = v26;
    *(float *)&v55[1] = v27;
    *(float *)&v55[2] = 0.0;
    if ( v10 > -2 )
    {
      if ( v10 == -1 )
      {
        v29 = 0.0;
        v30 = 0.0;
        goto LABEL_76;
      }
      v31 = *(_DWORD *)(this + 260);
      if ( v10 == v31 )
      {
        v29 = 1.0;
      }
      else if ( v10 <= v31 )
      {
        v29 = *(float *)(*(_DWORD *)(this + 248) + 28 * v10 + 16);
      }
      else
      {
        v29 = 1.0;
      }
    }
    else
    {
      v29 = 0.0;
    }
    if ( v10 > -2 )
    {
      v32 = *(_DWORD *)(this + 240);
      if ( v10 == v32 )
      {
        v30 = 1.0;
      }
      else if ( v10 <= v32 )
      {
        v30 = *(float *)(*(_DWORD *)(this + 228) + 28 * v10 + 16);
      }
      else
      {
        v30 = 1.0;
      }
    }
    else
    {
      v30 = 0.0;
    }
LABEL_76:
    *(float *)v54 = v30;
    v33 = v30;
    v34 = v29;
    v35 = v33;
    *(float *)&v54[1] = v34;
    *(float *)&v54[2] = 0.0;
    if ( v46 > -2 )
    {
      if ( v46 == -1 )
      {
        v36 = 0.0;
        v37 = 0.0;
LABEL_92:
        *(float *)&v48 = v37;
        v49 = v36;
        v50 = 0.0;
        if ( v44 && (*(_BYTE *)(v44 + 20) & 2) != 0 )
        {
          *(float *)&v51 = v28 - (v35 - v28);
          v52 = v27 - (v34 - v27);
          v53 = 0.0;
        }
        if ( v43 && (*(_BYTE *)(v43 + 20) & 2) != 0 )
        {
          *(float *)&v48 = v35 + v35 - v28;
          v40 = 0.0;
          v49 = v34 - v27 + v34;
          v50 = 0.0;
        }
        else
        {
          v40 = 0.0;
        }
        if ( v47 <= v40 )
        {
          v21 = v40;
        }
        else
        {
          v41 = (a2 - v45) / v47;
          if ( v41 <= 1.0 )
          {
            v21 = v41;
            if ( v40 > v41 )
              v21 = v40;
          }
        }
        v42 = v21;
        sub_104238E0((int)&v51, (int)v55, (int)v54, (int)&v48, v42, (int)v56);
        return *(float *)&v56[1];
      }
      v38 = *(_DWORD *)(this + 260);
      if ( v46 == v38 )
      {
        v36 = 1.0;
      }
      else if ( v46 <= v38 )
      {
        v36 = *(float *)(*(_DWORD *)(this + 248) + 28 * v46 + 16);
      }
      else
      {
        v36 = 1.0;
      }
    }
    else
    {
      v36 = 0.0;
    }
    if ( v46 > -2 )
    {
      v39 = *(_DWORD *)(this + 240);
      if ( v46 == v39 )
      {
        v37 = 1.0;
      }
      else if ( v46 <= v39 )
      {
        v37 = *(float *)(*(_DWORD *)(this + 228) + 28 * v46 + 16);
      }
      else
      {
        v37 = 1.0;
      }
    }
    else
    {
      v37 = 0.0;
    }
    goto LABEL_92;
  }
  return result;
}
