void __cdecl sub_1011D080(float *a1, float *a2, float a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  int v9; // ebx
  double v10; // st7
  int (__thiscall *v11)(int, int *); // edx
  float *v12; // eax
  float v13; // ecx
  double v14; // st5
  float v15; // edx
  double v16; // st7
  double v17; // st6
  double v18; // st5
  int v19; // ebx
  int v20; // edi
  int v21; // esi
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // rtt
  double v26; // st5
  double v27; // rt0
  double v28; // st5
  double v29; // rtt
  double v30; // st5
  double v31; // st6
  double v32; // rt0
  double v33; // st5
  double v34; // st7
  char Buffer[28]; // [esp+14h] [ebp-68h] BYREF
  int v36[3]; // [esp+30h] [ebp-4Ch] BYREF
  int v37[3]; // [esp+3Ch] [ebp-40h] BYREF
  float v38; // [esp+48h] [ebp-34h]
  float v39; // [esp+4Ch] [ebp-30h]
  float v40; // [esp+50h] [ebp-2Ch]
  int v41; // [esp+54h] [ebp-28h] BYREF
  int v42; // [esp+58h] [ebp-24h]
  float v43; // [esp+5Ch] [ebp-20h]
  float v44; // [esp+60h] [ebp-1Ch]
  float v45; // [esp+64h] [ebp-18h]
  float v46; // [esp+68h] [ebp-14h]
  float v47; // [esp+6Ch] [ebp-10h]
  float v48; // [esp+70h] [ebp-Ch]
  float v49; // [esp+74h] [ebp-8h]
  int v50; // [esp+78h] [ebp-4h]

  v9 = sub_1025FB50(dword_1060F300);
  if ( v9 )
  {
    v44 = *a2 - *a1;
    v45 = a2[1] - a1[1];
    v46 = a2[2] - a1[2];
    v10 = off_10689714() / a3;
    v11 = *(int (__thiscall **)(int, int *))(*(_DWORD *)v9 + 904);
    v50 = (int)v10;
    v12 = (float *)v11(v9, v36);
    v13 = a1[1];
    v14 = v12[2];
    v15 = a1[2];
    v16 = *v12 * 4.0;
    v17 = v12[1] * 4.0;
    v47 = *a1;
    v18 = v14 * 4.0;
    v48 = v13;
    v49 = v15;
    v19 = 0;
    v38 = v18 * v45 - v17 * v46;
    v39 = v46 * v16 - v18 * v44;
    v40 = v17 * v44 - v16 * v45;
    sub_1011BC50(a1, a2, a5, a6, a7, a8, a9);
    v20 = v50 + 1;
    v21 = 0;
    if ( v50 + 1 > 0 )
    {
      v22 = v49;
      v23 = v48;
      v24 = v47;
      while ( 1 )
      {
        *(float *)&v41 = v24 - v38;
        *(float *)&v42 = v23 - v39;
        v43 = v22 - v40;
        *(float *)v37 = v38 + v24;
        *(float *)&v37[1] = v23 + v39;
        *(float *)&v37[2] = v22 + v40;
        if ( v19 == a4 )
        {
          sub_10429A00(Buffer, 0x19u, "%i", v21);
          v36[0] = v41;
          v36[1] = v42;
          *(float *)&v36[2] = v43 + 8.0;
          sub_1011BC50((float *)&v41, (float *)v37, 255, 255, 255, a8, a9);
          sub_1011CF30((float *)v36, (int)Buffer, 1, 0.0);
          v19 = 0;
        }
        else
        {
          sub_1011BC50((float *)&v41, (float *)v37, a5, a6, a7, a8, a9);
        }
        ++v21;
        ++v19;
        v28 = v44 * a3 + v47;
        v47 = v28;
        v29 = v28;
        v30 = v45 * a3 + v48;
        v31 = v29;
        v48 = v30;
        v32 = v30;
        v33 = a3 * v46 + v49;
        v34 = v32;
        v49 = v33;
        if ( v21 >= v20 )
          break;
        v25 = v33;
        v26 = v34;
        v22 = v25;
        v27 = v26;
        v24 = v31;
        v23 = v27;
      }
    }
  }
}
