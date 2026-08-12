// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_100189F0@<eax>(
        int a1@<ebx>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        float a6,
        int a7,
        float *a8,
        float *a9,
        int a10,
        int a11,
        float a12,
        float a13,
        int a14,
        float *a15,
        float a16)
{
  int result; // eax
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  double v20; // st7
  double v21; // st5
  int (__thiscall *v22)(int); // eax
  int v23; // eax
  int v24; // esi
  int v25; // esi
  int v26; // ebx
  double v27; // st7
  double v28; // st6
  double v29; // st5
  double v30; // st4
  double v31; // st3
  double v32; // st2
  float *v33; // eax
  float *v34; // eax
  long double v35; // st7
  float *v36; // eax
  double v37; // st6
  double v38; // rt1
  double v39; // st6
  double v40; // st5
  float *v41; // eax
  float *v42; // eax
  double v43; // st7
  int v44; // eax
  void (__thiscall *v45)(int, int, int); // eax
  int v46; // esi
  float v47; // [esp+Ch] [ebp-234h]
  _DWORD v48[44]; // [esp+18h] [ebp-228h] BYREF
  char v49; // [esp+C8h] [ebp-178h]
  int v50; // [esp+CCh] [ebp-174h]
  int v51; // [esp+D0h] [ebp-170h]
  char v52; // [esp+D4h] [ebp-16Ch]
  int v53[3]; // [esp+D8h] [ebp-168h] BYREF
  char v54; // [esp+E4h] [ebp-15Ch]
  int v55; // [esp+E8h] [ebp-158h]
  int v56; // [esp+ECh] [ebp-154h]
  int v57; // [esp+F0h] [ebp-150h]
  int v58; // [esp+F4h] [ebp-14Ch]
  int v59; // [esp+F8h] [ebp-148h]
  char v60; // [esp+108h] [ebp-138h]
  _DWORD v61[41]; // [esp+10Ch] [ebp-134h] BYREF
  int v62; // [esp+1B0h] [ebp-90h]
  int v63; // [esp+1B8h] [ebp-88h]
  int v64; // [esp+1BCh] [ebp-84h]
  float *v65; // [esp+1C4h] [ebp-7Ch]
  float *v66; // [esp+1CCh] [ebp-74h]
  unsigned int *v67; // [esp+1ECh] [ebp-54h]
  float v68; // [esp+200h] [ebp-40h]
  float v69; // [esp+204h] [ebp-3Ch]
  float v70; // [esp+208h] [ebp-38h]
  float v71; // [esp+20Ch] [ebp-34h]
  float v72; // [esp+210h] [ebp-30h]
  int v73; // [esp+214h] [ebp-2Ch]
  float *v74; // [esp+218h] [ebp-28h]
  int v75; // [esp+21Ch] [ebp-24h]
  float v76; // [esp+220h] [ebp-20h]
  float *v77; // [esp+224h] [ebp-1Ch]
  int v78; // [esp+228h] [ebp-18h]
  float v79; // [esp+22Ch] [ebp-14h]
  float v80; // [esp+230h] [ebp-10h] BYREF
  float v81; // [esp+234h] [ebp-Ch]
  float v82; // [esp+238h] [ebp-8h] BYREF
  float v83; // [esp+23Ch] [ebp-4h]
  float v84; // [esp+254h] [ebp+14h]

  result = sub_10017240(a2, a5, (int)a6, a7);
  if ( result )
  {
    v17 = a14;
    if ( a14 >= 2 )
    {
      v18 = *(_DWORD *)(result + 16);
      if ( v18 )
      {
        v19 = (*(int (__thiscall **)(int, const char *, void *))(*(_DWORD *)v18 + 188))(
                v18,
                "$hdrcolorscale",
                &unk_10403224);
        if ( v19 )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 12))(v19, LODWORD(a16));
      }
      if ( a14 > a3 )
      {
        a14 = a3;
        v17 = a3;
      }
      v47 = a9[1] * a9[1] + *a9 * *a9 + a9[2] * a9[2];
      v20 = off_103EDFE0(v47) * 0.01;
      if ( v20 < 0.5 )
        v20 = 0.5;
      v21 = 1.0 / (double)(v17 - 1);
      v72 = v21;
      v76 = v20 * v21;
      v84 = fmod(a12 * a13, 1.0);
      v22 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380);
      v68 = a9[2] * a12;
      v23 = v22(dword_1047C96C);
      v24 = v23;
      v73 = v23;
      if ( v23 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23);
      v25 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v24 + 224))(v24, 1, 0, 0, 0, a1);
      v75 = v25;
      sub_10016C20((int)v48);
      v50 = v25;
      v52 = 1;
      v51 = 3;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v25 + 40))(v25, 3);
      (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v50 + 68))(v50, 2 * v17, 2 * v17, v48);
      v53[0] = v48[41];
      v58 = v48[39];
      v55 = v25 + 4;
      v54 = v49;
      v57 = 0;
      v56 = 2 * v17;
      v60 = 0;
      v59 = 0;
      sub_10016990((int)v61, v25, 2 * v17, v48);
      v26 = 0;
      v59 = 0;
      sub_10016A00(v61);
      v78 = 0;
      if ( v17 > 0 )
      {
        v27 = 255.0;
        v28 = 8388608.0;
        v29 = v84;
        v74 = &v80;
        v77 = &v82;
        while ( 1 )
        {
          v30 = *a8;
          v69 = *a8;
          v31 = a8[1];
          v70 = a8[1];
          v32 = a8[2];
          v71 = a8[2];
          v83 = a15[2] * v27 + v28;
          v79 = a15[1] * v27 + v28;
          v81 = v28 + v27 * *a15;
          *v67 = LOBYTE(v83) | ((LOBYTE(v79) | ((LOBYTE(v81) | 0xFFFFFF00) << 8)) << 8);
          v33 = v66;
          *v66 = 1.0;
          v33[1] = v29;
          v34 = v65;
          *v65 = v30;
          v34[1] = v31;
          v34[2] = v32;
          sub_10016A80(v61);
          v83 = ((double)v78 * v72 + (double)v78 * v72) * 3.141592653589793;
          v35 = sin(v83);
          v36 = v77;
          *v74 = cos(v83);
          *v36 = v35;
          v37 = v82 * v68 + *a8;
          v69 = v37;
          v38 = v37;
          v39 = v68 * v80 + a8[1];
          v70 = v39;
          v40 = a8[2];
          v71 = a8[2];
          v81 = a15[2] * 255.0 + 8388608.0;
          v79 = a15[1] * 255.0 + 8388608.0;
          v83 = 255.0 * *a15 + 8388608.0;
          *v67 = LOBYTE(v81) | ((LOBYTE(v79) | ((LOBYTE(v83) | 0xFFFFFF00) << 8)) << 8);
          v41 = v66;
          *v66 = 0.0;
          v41[1] = v84;
          v42 = v65;
          *v65 = v38;
          v42[1] = v39;
          v42[2] = v40;
          sub_10016A80(v61);
          ++v26;
          v43 = v84 + v76;
          v78 = v26;
          v84 = v43;
          if ( v26 >= a14 )
            break;
          v28 = 8388608.0;
          v29 = v43;
          v27 = 255.0;
        }
        v25 = v75;
      }
      if ( v52 )
      {
        switch ( v51 )
        {
          case 4:
            v44 = 2 * v64 - 2;
            break;
          case 5:
            v44 = 2 * v64;
            break;
          case 6:
            v44 = 3 * v64 - 6;
            break;
          case 7:
            v44 = 6 * v64 / 4;
            break;
          case 8:
            v44 = 0;
            break;
          default:
            v44 = v64;
            break;
        }
        sub_10016B00(v53, v51, v44);
      }
      v45 = *(void (__thiscall **)(int, int, int))(*(_DWORD *)v50 + 80);
      v48[2] = v48;
      v45(v50, v64, v57);
      v55 = 0;
      v56 = 0;
      v63 = 0;
      v62 = 0;
      v61[19] = -1;
      v50 = 0;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v25 + 48))(v25, -1, 0);
      if ( v62 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v62 + 8))(v62) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v62 + 16))(v62);
      if ( v55 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v55 + 8))(v55) )
          (*(void (__thiscall **)(int))(*(_DWORD *)v55 + 16))(v55);
      }
      v46 = v73;
      (*(void (__thiscall **)(int))(*(_DWORD *)v73 + 12))(v73);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v46 + 4))(v46);
    }
  }
  return result;
}
