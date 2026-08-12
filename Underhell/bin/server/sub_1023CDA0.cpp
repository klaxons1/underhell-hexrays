int __thiscall sub_1023CDA0(int *this)
{
  int result; // eax
  int v3; // edx
  int v4; // esi
  double v5; // st7
  unsigned int v6; // eax
  int v7; // ebx
  unsigned __int8 v8; // al
  int v9; // edx
  double v10; // st7
  float *v11; // esi
  int v12; // ebx
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  int *v18; // ebx
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st7
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  int v29; // ebx
  int v30; // ecx
  int v31; // eax
  int i; // ecx
  int v33; // eax
  int j; // ecx
  float v35; // [esp+10h] [ebp-CCh]
  int v36[3]; // [esp+1Ch] [ebp-C0h] BYREF
  int v37[3]; // [esp+28h] [ebp-B4h] BYREF
  int v38[3]; // [esp+34h] [ebp-A8h] BYREF
  int v39[3]; // [esp+40h] [ebp-9Ch] BYREF
  int v40[3]; // [esp+4Ch] [ebp-90h] BYREF
  int v41[3]; // [esp+58h] [ebp-84h] BYREF
  int v42[3]; // [esp+64h] [ebp-78h] BYREF
  int v43[3]; // [esp+70h] [ebp-6Ch] BYREF
  int v44[3]; // [esp+7Ch] [ebp-60h] BYREF
  int v45[3]; // [esp+88h] [ebp-54h] BYREF
  int v46[3]; // [esp+94h] [ebp-48h] BYREF
  int v47[3]; // [esp+A0h] [ebp-3Ch] BYREF
  int v48; // [esp+ACh] [ebp-30h]
  float v49; // [esp+B0h] [ebp-2Ch] BYREF
  float v50; // [esp+B4h] [ebp-28h]
  float v51; // [esp+B8h] [ebp-24h]
  float v52; // [esp+BCh] [ebp-20h] BYREF
  float v53; // [esp+C0h] [ebp-1Ch]
  float v54; // [esp+C4h] [ebp-18h]
  float v55; // [esp+C8h] [ebp-14h] BYREF
  float v56; // [esp+CCh] [ebp-10h]
  float v57; // [esp+D0h] [ebp-Ch]
  int v58; // [esp+D4h] [ebp-8h]
  int v59; // [esp+D8h] [ebp-4h]

  v35 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0(this, v35, 0);
  result = this[201];
  v48 = -1;
  v58 = result;
  if ( result != -1 )
  {
    v3 = dword_106C4FC4;
    do
    {
      v4 = 52 * v58;
      v5 = *(float *)(dword_106B31C8 + 12);
      v59 = 52 * v58;
      if ( (v5 < *(float *)&this[13 * v58 + 209] || *((_BYTE *)this + v4 + 842))
        && (!*((_BYTE *)this + v4 + 860)
         || (v6 = *(int *)((char *)this + v4 + 812), v6 != -1)
         && off_1061BE18[4 * (*(int *)((char *)this + v4 + 812) & 0xFFF) + 2] == v6 >> 12
         && off_1061BE18[4 * (*(int *)((char *)this + v4 + 812) & 0xFFF) + 1]) )
      {
        if ( *(_DWORD *)(dword_106B2CAC + 48) )
        {
          (*(void (__thiscall **)(int *, float *, float *, float *))(*this + 528))(this, &v52, &v49, &v55);
          v8 = -1;
          if ( (*(int *)((char *)this + v4 + 828) & 8) != 0 )
            v8 = 0;
          v9 = *(_DWORD *)(dword_106B2CAC + 48);
          if ( v9 == 1 || v9 == 2 && (*(int *)((char *)this + v4 + 828) & 8) != 0 )
          {
            v10 = (double)*(int *)((char *)this + v4 + 820);
            v11 = (float *)((char *)this + v4 + 848);
            v12 = v8;
            *(float *)v37 = v52 * v10 + *v11;
            *(float *)&v37[1] = v53 * v10 + v11[1];
            *(float *)&v37[2] = v10 * v54 + v11[2];
            sub_1011BC50(v11, (float *)v37, 255, v8, 0, 0, 0.1);
            v13 = (double)this[v59 / 4u + 205];
            *(float *)v45 = *v11 - v52 * v13;
            *(float *)&v45[1] = v11[1] - v53 * v13;
            *(float *)&v45[2] = v11[2] - v13 * v54;
            sub_1011BC50(v11, (float *)v45, 255, v12, 0, 0, 0.1);
            v14 = (double)this[v59 / 4u + 205];
            *(float *)v47 = v49 * v14 + *v11;
            *(float *)&v47[1] = v50 * v14 + v11[1];
            *(float *)&v47[2] = v14 * v51 + v11[2];
            sub_1011BC50(v11, (float *)v47, 255, v12, 0, 0, 0.1);
            v15 = (double)this[v59 / 4u + 205];
            *(float *)v43 = *v11 - v49 * v15;
            *(float *)&v43[1] = v11[1] - v50 * v15;
            *(float *)&v43[2] = v11[2] - v15 * v51;
            sub_1011BC50(v11, (float *)v43, 255, v12, 0, 0, 0.1);
            v16 = (double)this[v59 / 4u + 205];
            *(float *)v39 = v55 * v16 + *v11;
            *(float *)&v39[1] = v56 * v16 + v11[1];
            *(float *)&v39[2] = v16 * v57 + v11[2];
            sub_1011BC50(v11, (float *)v39, 255, v12, 0, 0, 0.1);
            v17 = (double)this[v59 / 4u + 205];
            *(float *)v41 = *v11 - v55 * v17;
            *(float *)&v41[1] = v11[1] - v56 * v17;
            *(float *)&v41[2] = v11[2] - v17 * v57;
            sub_1011BC50(v11, (float *)v41, 255, v12, 0, 0, 0.1);
            if ( 1.0 != *(float *)&this[v59 / 4u + 206] )
            {
              v18 = &this[v59 / 4u + 205];
              v19 = (double)*v18 * *(float *)&this[v59 / 4u + 206];
              *(float *)v46 = v52 * v19 + *v11;
              *(float *)&v46[1] = v53 * v19 + v11[1];
              *(float *)&v46[2] = v19 * v54 + v11[2];
              sub_1011BC50(v11, (float *)v46, 0, 150, 255, 0, 0.1);
              v20 = (double)*v18 * *(float *)&this[v59 / 4u + 206];
              *(float *)v44 = *v11 - v52 * v20;
              *(float *)&v44[1] = v11[1] - v53 * v20;
              *(float *)&v44[2] = v11[2] - v20 * v54;
              sub_1011BC50(v11, (float *)v44, 0, 150, 255, 0, 0.1);
              v21 = (double)*v18 * *(float *)&this[v59 / 4u + 206];
              *(float *)v42 = v49 * v21 + *v11;
              *(float *)&v42[1] = v50 * v21 + v11[1];
              *(float *)&v42[2] = v21 * v51 + v11[2];
              sub_1011BC50(v11, (float *)v42, 0, 150, 255, 0, 0.1);
              v22 = (double)*v18 * *(float *)&this[v59 / 4u + 206];
              *(float *)v40 = *v11 - v49 * v22;
              *(float *)&v40[1] = v11[1] - v50 * v22;
              *(float *)&v40[2] = v11[2] - v22 * v51;
              sub_1011BC50(v11, (float *)v40, 0, 150, 255, 0, 0.1);
              v23 = (double)*v18 * *(float *)&this[v59 / 4u + 206];
              *(float *)v38 = v55 * v23 + *v11;
              *(float *)&v38[1] = v56 * v23 + v11[1];
              *(float *)&v38[2] = v23 * v57 + v11[2];
              sub_1011BC50(v11, (float *)v38, 0, 150, 255, 0, 0.1);
              v24 = (double)*v18 * *(float *)&this[v59 / 4u + 206];
              *(float *)v36 = *v11 - v55 * v24;
              *(float *)&v36[1] = v11[1] - v56 * v24;
              *(float *)&v36[2] = v11[2] - v24 * v57;
              sub_1011BC50(v11, (float *)v36, 0, 150, 255, 0, 0.1);
            }
            v4 = v59;
          }
          v25 = this[201];
          if ( v25 == -1 )
          {
            v26 = 0;
          }
          else
          {
            v27 = 0;
            do
            {
              v25 = SLOWORD(this[13 * v25 + 210]);
              ++v27;
            }
            while ( v25 != -1 );
            v26 = v27;
          }
          v28 = this[200];
          if ( v28 == -1 )
          {
            v29 = 0;
          }
          else
          {
            v30 = 0;
            do
            {
              v28 = SLOWORD(this[13 * v28 + 210]);
              ++v30;
            }
            while ( v28 != -1 );
            v29 = v30;
          }
          v31 = this[201];
          for ( i = 0; v31 != -1; ++i )
            v31 = SLOWORD(this[13 * v31 + 210]);
          DevMsg(2, "Soundlist: %d / %d  (%d)\n", i, v29, v26 - this[202]);
          v33 = this[201];
          for ( j = 0; v33 != -1; ++j )
            v33 = SLOWORD(this[13 * v33 + 210]);
          v3 = dword_106C4FC4;
          this[202] = j;
        }
        result = *(__int16 *)((char *)this + v4 + 840);
        v48 = v58;
        v58 = result;
      }
      else
      {
        v7 = *(__int16 *)((char *)this + v4 + 840);
        if ( *(_DWORD *)(dword_106B2CAC + 48) == 1 )
        {
          Msg("  Removed Sound: %d (Time:%f)\n", *(int *)((char *)this + v4 + 828), *(float *)(dword_106B31C8 + 12));
          v3 = dword_106C4FC4;
        }
        result = dword_106B2CAC;
        if ( *(_DWORD *)(dword_106B2CAC + 48) == 2 )
        {
          result = *(int *)((char *)this + v4 + 828);
          if ( (result & 8) != 0 )
          {
            result = Msg("  Removed Danger Sound: %d (time:%f)\n", result, *(float *)(dword_106B31C8 + 12));
            v3 = dword_106C4FC4;
          }
        }
        if ( v3 )
        {
          if ( v48 == -1 )
            *(_DWORD *)(v3 + 804) = *(__int16 *)(v4 + v3 + 840);
          else
            *(_WORD *)(52 * v48 + v3 + 840) = *(_WORD *)(v4 + v3 + 840);
          result = v58;
          *(_WORD *)(v4 + v3 + 840) = *(_WORD *)(v3 + 800);
          *(_DWORD *)(v3 + 800) = result;
        }
        v58 = v7;
      }
    }
    while ( v58 != -1 );
  }
  return result;
}
