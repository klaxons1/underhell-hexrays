char __userpurge sub_102B49D0@<al>(int a1@<ecx>, int a2@<edi>, int a3, float *a4)
{
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int *v8; // esi
  int (__thiscall ***v10)(_DWORD, _DWORD, float *); // edi
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st5
  double v16; // st7
  double v17; // st6
  double v18; // st7
  int (__thiscall *v19)(_DWORD, _DWORD, float *); // edx
  double v20; // st6
  int v21; // eax
  int v22; // ecx
  int *v23; // edi
  double v24; // st7
  double v25; // st6
  double v26; // st7
  int v27; // ebx
  int v28; // eax
  float *v29; // eax
  float *v30; // eax
  float *v31; // eax
  int v32; // ecx
  const char *v33; // edi
  int v34; // eax
  double v35; // [esp+10h] [ebp-D8h]
  double v36; // [esp+18h] [ebp-D0h]
  double v37; // [esp+20h] [ebp-C8h]
  float v38; // [esp+24h] [ebp-C4h]
  float v39; // [esp+28h] [ebp-C0h]
  double v40; // [esp+28h] [ebp-C0h]
  float v41; // [esp+2Ch] [ebp-BCh]
  double v42; // [esp+30h] [ebp-B8h]
  float v43; // [esp+34h] [ebp-B4h]
  char v45[80]; // [esp+44h] [ebp-A4h] BYREF
  float v46[3]; // [esp+94h] [ebp-54h] BYREF
  float v47[3]; // [esp+A0h] [ebp-48h] BYREF
  float v48; // [esp+ACh] [ebp-3Ch]
  int v49; // [esp+B0h] [ebp-38h] BYREF
  float v50; // [esp+B4h] [ebp-34h]
  float v51; // [esp+B8h] [ebp-30h]
  int v52; // [esp+BCh] [ebp-2Ch] BYREF
  float v53; // [esp+C0h] [ebp-28h]
  float v54; // [esp+C4h] [ebp-24h]
  int v55; // [esp+C8h] [ebp-20h] BYREF
  float v56; // [esp+CCh] [ebp-1Ch] BYREF
  float v57; // [esp+D0h] [ebp-18h]
  float v58; // [esp+D4h] [ebp-14h]
  int v59; // [esp+D8h] [ebp-10h] BYREF
  float v60; // [esp+DCh] [ebp-Ch]
  float v61; // [esp+E0h] [ebp-8h]
  int v62; // [esp+E4h] [ebp-4h]
  float v63; // [esp+F0h] [ebp+8h]

  v62 = a1;
  if ( a3 )
  {
    v5 = *(_DWORD *)(a3 + 4);
    if ( v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (*(_DWORD *)(a3 + 4) & 0xFFF) + 1];
      v7 = v5 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a3 + 4) & 0xFFF) + 2] == v7 )
      {
        if ( *v6 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a3 + 4) & 0xFFF) + 2] == v7 )
            v8 = (int *)*v6;
          else
            v8 = 0;
          if ( (v8[63] & 0x200000) != 0 )
            return 0;
          (*(void (__thiscall **)(int *, float *, float *, int))(*v8 + 520))(v8, v46, a4, 1);
          *(float *)&v59 = v46[0] - *a4;
          v60 = v46[1] - a4[1];
          v61 = 0.0;
          if ( off_10689714() <= 256.0 )
          {
            v10 = (int (__thiscall ***)(_DWORD, _DWORD, float *))sub_101243B0((int)v8);
            v11 = *(float *)(dword_106B31C8 + 12) - *(float *)(a3 + 8);
            if ( v11 <= 1.0 )
            {
              v15 = 0.0;
              if ( v11 >= 0.0 )
                v15 = v11;
              v13 = v15;
              v14 = 0.0;
              v12 = 1.0;
            }
            else
            {
              v12 = 1.0;
              v13 = 1.0;
              v14 = 0.0;
            }
            v48 = v13;
            v41 = v12;
            v39 = v14;
            v38 = v13;
            v16 = sub_1001F0E0(v38, v39, v41, 30.0, 40.0);
            v63 = v16;
            if ( v10 )
            {
              v17 = v16;
              v18 = *(float *)(dword_106C629C + 44);
              v19 = **v10;
              v20 = v17 * 0.14999999;
              v47[0] = *(float *)&v59 * v20 * v18;
              v47[1] = v20 * v60 * v18;
              v47[2] = v18 * (v20 * v61);
              v21 = v19(v10, *(float *)(a3 + 8), v47);
              v8 = (int *)v21;
              if ( !v21 )
                return 1;
              *(float *)&v55 = COERCE_FLOAT(&washentity_t::`vftable');
              v56 = NAN;
              sub_10019680(&v56, v21);
              v57 = *(float *)(a3 + 8);
              sub_102B4220((int *)(v62 + 3900), *(_DWORD *)(v62 + 3912), (int)&v55);
              v22 = v8[106];
              v23 = v8 + 106;
              if ( !v22 )
                return 1;
              goto LABEL_25;
            }
            if ( (char *)v8[23] == "prop_vehicle_airboat" )
            {
LABEL_23:
              v43 = v16;
              sub_102B29D0((void *)v62, v8, (float *)&v59, v43);
              return 1;
            }
            if ( sub_100D6240(v8, "prop_vehicle_airboat") )
            {
              v16 = v63;
              goto LABEL_23;
            }
            v22 = v8[106];
            v23 = v8 + 106;
            if ( v22 )
            {
LABEL_25:
              v24 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v22 + 116))(v22, a2);
              v58 = v24;
              if ( v24 >= 30.0 )
              {
                v24 = 30.0;
                v58 = 30.0;
              }
              v25 = *(float *)(dword_106C629C + 44);
              v26 = v24 * (0.14999999 * v63);
              *(float *)&v49 = v26 * *(float *)&v59 * v25;
              v50 = v60 * v26 * v25;
              v51 = v25 * (v26 * v61);
              v27 = *v8;
              v28 = sub_102487B0((int)v45, v62, v62, (float *)&v49, a4, v63, 64, 0, 0);
              (*(void (__thiscall **)(int *, int))(v27 + 600))(v8, v28);
              if ( *(_DWORD *)(dword_106DCA24 + 48) == 1 )
              {
                *(float *)&v55 = 4.0;
                v56 = 4.0;
                v57 = 4.0;
                *(float *)&v52 = -4.0;
                v53 = -4.0;
                v54 = -4.0;
                v29 = (float *)sub_10019640(v8);
                sub_1011C000(v29, (float *)&v52, (float *)&v55, 255, 0, 0, 1, 0.1);
                v30 = (float *)sub_10019640(v8);
                *(float *)&v52 = *(float *)&v49 + *v30;
                v53 = v30[1] + v50;
                v54 = v30[2] + v51;
                v31 = (float *)sub_10019640(v8);
                sub_1011BC50(v31, (float *)&v52, 255, 255, 0, 1, 0.1);
                v32 = *v23;
                v33 = (const char *)v8[23];
                if ( !v33 )
                  v33 = String;
                v35 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v32 + 116))(
                        v32,
                        COERCE_UNSIGNED_INT64(v63),
                        HIDWORD(COERCE_UNSIGNED_INT64(v63)),
                        COERCE_UNSIGNED_INT64(v58 * 30.0),
                        HIDWORD(COERCE_UNSIGNED_INT64(v58 * 30.0)),
                        COERCE_UNSIGNED_INT64(40.0 * v58),
                        HIDWORD(COERCE_UNSIGNED_INT64(40.0 * v58)),
                        COERCE_UNSIGNED_INT64(*(float *)(dword_106B31C8 + 12)),
                        HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(dword_106B31C8 + 12))));
                v34 = sub_1001F3C0(v8);
                Msg(
                  "Pushed %s (index %d) (mass %f) with force %f (min %.2f max %.2f) at time %.2f\n",
                  v33,
                  v34,
                  v35,
                  v36,
                  v37,
                  v40,
                  v42);
              }
              if ( v48 <= 2.0 )
                return 1;
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}
