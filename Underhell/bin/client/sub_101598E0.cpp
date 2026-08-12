int __thiscall sub_101598E0(_DWORD *this, float *a2, float *a3)
{
  int result; // eax
  int v5; // edx
  int v6; // esi
  __int16 v7; // fps
  double v8; // st7
  bool v9; // c0
  char v10; // c2
  bool v11; // c3
  __int16 v12; // fps
  double v13; // st7
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  __int16 v17; // fps
  double v18; // st7
  bool v19; // c0
  char v20; // c2
  bool v21; // c3
  __int16 v22; // fps
  double v23; // st7
  bool v24; // c0
  char v25; // c2
  bool v26; // c3
  __int16 v27; // fps
  double v28; // st7
  bool v29; // c0
  char v30; // c2
  bool v31; // c3
  __int16 v32; // fps
  double v33; // st7
  bool v34; // c0
  char v35; // c2
  bool v36; // c3
  float *v37; // edi
  _DWORD v38[32]; // [esp+4h] [ebp-88h] BYREF
  int v39; // [esp+84h] [ebp-8h]
  int i; // [esp+88h] [ebp-4h]

  result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10413164 + 24))(dword_10413164, v38);
  v5 = 0;
  v39 = result;
  this[589] = 0;
  for ( i = 0; v5 < v39; i = v5 )
  {
    v6 = v38[v5];
    v8 = *(float *)(v6 + 4) + *(float *)(v6 + 16);
    v9 = v8 < *a2;
    v10 = 0;
    v11 = v8 == *a2;
    LOWORD(result) = v7;
    if ( v8 > *a2 )
    {
      v13 = *(float *)(v6 + 8) + *(float *)(v6 + 16);
      v14 = v13 < a2[1];
      v15 = 0;
      v16 = v13 == a2[1];
      LOWORD(result) = v12;
      if ( v13 > a2[1] )
      {
        v18 = *(float *)(v6 + 12) + *(float *)(v6 + 16);
        v19 = v18 < a2[2];
        v20 = 0;
        v21 = v18 == a2[2];
        LOWORD(result) = v17;
        if ( v18 > a2[2] )
        {
          v23 = *(float *)(v6 + 4) - *(float *)(v6 + 16);
          v24 = v23 < *a3;
          v25 = 0;
          v26 = v23 == *a3;
          LOWORD(result) = v22;
          if ( v23 < *a3 )
          {
            v28 = *(float *)(v6 + 8) - *(float *)(v6 + 16);
            v29 = v28 < a3[1];
            v30 = 0;
            v31 = v28 == a3[1];
            LOWORD(result) = v27;
            if ( v28 < a3[1] )
            {
              v33 = *(float *)(v6 + 12) - *(float *)(v6 + 16);
              v34 = v33 < a3[2];
              v35 = 0;
              v36 = v33 == a3[2];
              LOWORD(result) = v32;
              if ( v33 < a3[2] )
              {
                result = v6 + 20;
                v37 = (float *)&this[7 * this[589] + 365];
                if ( *(_BYTE *)(v6 + 20) || *(_BYTE *)(v6 + 21) || *(_BYTE *)(v6 + 22) )
                {
                  if ( *(_BYTE *)(v6 + 23) )
                  {
                    result = sub_101F29A0(v6 + 20, &this[7 * this[589] + 365]);
                    v5 = i;
                    *v37 = *v37 * 0.0039215689;
                    v37[1] = v37[1] * 0.0039215689;
                    v37[2] = 0.0039215689 * v37[2];
                    v37[6] = (*(float *)(v6 + 16) + 55.0) * (*(float *)(v6 + 16) + 55.0);
                    v37[3] = *(float *)(v6 + 4);
                    v37[4] = *(float *)(v6 + 8);
                    v37[5] = *(float *)(v6 + 12);
                    ++this[589];
                  }
                }
              }
            }
          }
        }
      }
    }
    ++v5;
  }
  return result;
}
