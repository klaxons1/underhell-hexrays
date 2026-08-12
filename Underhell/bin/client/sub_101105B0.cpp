float *__userpurge sub_101105B0@<eax>(float *result@<eax>, int a2@<ecx>, int a3, float a4, int a5, int a6)
{
  int v6; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  bool v11; // zf
  double v12; // st7
  float *v13; // esi
  char *v14; // eax
  int v15; // ecx
  int v16; // edx
  float v17; // edi
  float v18; // ecx
  float v19; // edx
  double v20; // st6
  int v21; // edi
  int v22; // ecx
  double v23; // st6
  double v24; // st5
  char *v25; // edi
  float *v26; // ecx
  float v27; // edx
  float v28; // eax
  int v29; // ecx
  float *v30; // edx
  int v31[4]; // [esp+14h] [ebp-68h] BYREF
  int v32[4]; // [esp+24h] [ebp-58h] BYREF
  int v33[4]; // [esp+34h] [ebp-48h] BYREF
  _DWORD v34[3]; // [esp+44h] [ebp-38h] BYREF
  float v35; // [esp+50h] [ebp-2Ch]
  float v36; // [esp+54h] [ebp-28h]
  float v37; // [esp+58h] [ebp-24h]
  float v38; // [esp+5Ch] [ebp-20h]
  float v39; // [esp+60h] [ebp-1Ch]
  float v40; // [esp+64h] [ebp-18h]
  float v41; // [esp+68h] [ebp-14h]
  float v42; // [esp+6Ch] [ebp-10h]
  float v43; // [esp+70h] [ebp-Ch]
  int v44; // [esp+74h] [ebp-8h]
  float *v45; // [esp+78h] [ebp-4h]

  v6 = a5;
  v8 = a6;
  v44 = a2;
  if ( a5 == a6 )
  {
    v9 = 0;
    if ( *(_BYTE *)(a2 + 29) )
    {
      result = *(float **)(a6 + 8);
      v10 = a3 + 8;
      do
      {
        ++v9;
        *(float *)(v10 - 8) = *result;
        result += 3;
        v10 += 12;
        *(float *)(v10 - 16) = *(result - 2);
        *(float *)(v10 - 12) = *(result - 1);
      }
      while ( v9 < *(unsigned __int8 *)(a2 + 29) );
    }
  }
  else
  {
    v11 = *(_BYTE *)(a2 + 29) == 0;
    v45 = 0;
    if ( !v11 )
    {
      v12 = a4;
      v13 = (float *)(a3 + 8);
      while ( 1 )
      {
        v14 = (char *)v13 - 8 - a3;
        if ( *((_BYTE *)v45 + *(_DWORD *)(a2 + 32)) )
        {
          v15 = *(_DWORD *)(v8 + 8);
          v16 = *(_DWORD *)(v6 + 8);
          v35 = *(float *)&v14[v15];
          v17 = *(float *)&v14[v15 + 4];
          v37 = *(float *)&v14[v15 + 8];
          v38 = *(float *)&v14[v16];
          v18 = *(float *)&v14[v16 + 4];
          v19 = *(float *)&v14[v16 + 8];
          v39 = v18;
          v40 = v19;
          v36 = v17;
          v20 = (1.0 - v12) * v19 + v37 * v12;
          *(v13 - 2) = v38 * (1.0 - v12) + v35 * v12;
          *(v13 - 1) = v18 * (1.0 - v12) + v17 * v12;
        }
        else
        {
          v21 = *(_DWORD *)(v8 + 8);
          v22 = *(_DWORD *)(v6 + 8);
          v23 = *(float *)&v14[v21];
          v24 = *(float *)&v14[v22];
          v25 = &v14[v21];
          v26 = (float *)&v14[v22];
          if ( v24 == v23 && v26[1] == *((float *)v25 + 1) && v26[2] == *((float *)v25 + 2) )
          {
            v27 = v26[1];
            v41 = *v26;
            v28 = v26[2];
            v42 = v27;
            v43 = v28;
          }
          else
          {
            sub_101EF050(v26, v32);
            sub_101EF050(v25, v33);
            sub_101F0F00((int)v32, (int)v33, a4, (int)v31);
            sub_101F0F70(v31, v34);
            v12 = a4;
            v41 = *(float *)v34;
            v42 = *(float *)&v34[1];
            v43 = *(float *)&v34[2];
          }
          *(v13 - 2) = v41;
          *(v13 - 1) = v42;
          v20 = v43;
        }
        v29 = v44;
        *v13 = v20;
        v30 = (float *)*(unsigned __int8 *)(v29 + 29);
        result = (float *)((char *)v45 + 1);
        v13 += 3;
        v45 = result;
        if ( (int)result >= (int)v30 )
          break;
        v6 = a5;
        a2 = v29;
        v8 = a6;
      }
    }
  }
  return result;
}
