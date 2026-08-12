int __thiscall sub_100B2C20(_DWORD *this, float *a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  const char *v7; // esi
  float *v8; // eax
  double v9; // st6
  double v10; // st7
  double v11; // st7
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int16 *v17; // edi
  int v18; // eax
  int v19; // edx
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  float *v23; // eax
  double v24; // st4
  double v25; // st6
  double v26; // st4
  double v27; // st5
  double v28; // st6
  double v29; // st7
  int v30; // ebx
  int v31; // edx
  int v32; // eax
  int v33; // ecx
  float *v34; // eax
  double v35; // st6
  double v36; // st7
  float v37; // [esp+0h] [ebp-4Ch]
  float v38[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v39[3]; // [esp+1Ch] [ebp-30h] BYREF
  float v40; // [esp+28h] [ebp-24h]
  float v41; // [esp+2Ch] [ebp-20h]
  float v42; // [esp+30h] [ebp-1Ch]
  float v43; // [esp+34h] [ebp-18h]
  float v44; // [esp+38h] [ebp-14h]
  float v45; // [esp+3Ch] [ebp-10h]
  int v46; // [esp+40h] [ebp-Ch]
  float v47; // [esp+44h] [ebp-8h]
  int i; // [esp+48h] [ebp-4h]
  int savedregs; // [esp+4Ch] [ebp+0h] BYREF

  if ( byte_1069362C )
  {
    v4 = sub_1008DDF0(this[3], (int)&savedregs);
    v5 = this[3];
    v6 = v4;
    v46 = v4;
    sub_1008D680(v5, (int)a2, (int)this, a2);
    if ( v6 == -1 )
    {
      v7 = *(const char **)(this[1] + 92);
      if ( !v7 )
        v7 = String;
      DevWarning(2, "FindBackAwayNode() - %s has no nearest node!\n", v7);
    }
    else
    {
      v8 = (float *)this[1];
      v9 = a2[1] - v8[180];
      v10 = a2[2] - v8[181];
      v40 = *a2 - v8[179];
      v41 = v9;
      v42 = v10;
      v11 = off_10689714();
      v12 = 0;
      v47 = v11;
      for ( i = 0; ; v12 = i )
      {
        v13 = this[2];
        if ( v6 < 0 || v6 >= *(_DWORD *)(v13 + 4) )
        {
          ++dword_10691DE0;
          v14 = 0;
        }
        else
        {
          v14 = *(_DWORD *)(*(_DWORD *)(v13 + 8) + 4 * v6);
        }
        if ( v12 >= *(_DWORD *)(v14 + 84) )
          break;
        v15 = this[2];
        if ( v6 < 0 || v6 >= *(_DWORD *)(v15 + 4) )
        {
          ++dword_10691DE0;
          v16 = 0;
        }
        else
        {
          v16 = *(_DWORD *)(*(_DWORD *)(v15 + 8) + 4 * v6);
        }
        v17 = *(__int16 **)(*(_DWORD *)(v16 + 72) + 4 * v12);
        if ( sub_1008FA50((_DWORD *)this[3], (int)v17, v6) )
        {
          v18 = sub_10074630(v17, v6);
          v19 = *(_DWORD *)(this[1] + 1676);
          v20 = v18;
          v21 = this[2];
          if ( v20 < 0 || v20 >= *(_DWORD *)(v21 + 4) )
          {
            ++dword_10691DE0;
            v22 = 0;
          }
          else
          {
            v22 = *(_DWORD *)(*(_DWORD *)(v21 + 8) + 4 * v20);
          }
          v23 = sub_1008D160(v22, v39, v19);
          v24 = a2[1] - v23[1];
          v25 = v24 * v24;
          v26 = *a2 - *v23;
          v27 = v25;
          v28 = a2[2] - v23[2];
          v37 = v26 * v26 + v27 + v28 * v28;
          v29 = off_10689708(v37);
          if ( v29 > v47 )
          {
            v30 = this[1];
            v31 = *(_DWORD *)(v30 + 1676);
            v32 = this[2];
            if ( v20 < 0 || v20 >= *(_DWORD *)(v32 + 4) )
            {
              ++dword_10691DE0;
              v33 = 0;
            }
            else
            {
              v33 = *(_DWORD *)(*(_DWORD *)(v32 + 8) + 4 * v20);
            }
            v34 = sub_1008D160(v33, v38, v31);
            v35 = v34[1] - *(float *)(v30 + 720);
            v36 = v34[2] - *(float *)(v30 + 724);
            v43 = *v34 - *(float *)(v30 + 716);
            v44 = v35;
            v45 = v36;
            off_10689714();
            if ( v44 * v41 + v43 * v40 + v45 * v42 < 0.0 )
              return v20;
            v6 = v46;
          }
        }
        ++i;
      }
    }
    return -1;
  }
  else
  {
    DevWarning(2, "Graph not ready for FindBackAwayNode!\n");
    return -1;
  }
}
