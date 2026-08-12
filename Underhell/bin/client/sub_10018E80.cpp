// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_10018E80@<eax>(
        int a1@<ebx>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float *a8,
        float *a9,
        float a10,
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
  int v22; // eax
  int v23; // esi
  int v24; // esi
  int v25; // ebx
  double v26; // st7
  float *v27; // esi
  float *v28; // edi
  long double v29; // st7
  float *v30; // eax
  double v31; // st5
  double v32; // st7
  double v33; // st6
  double v34; // st5
  float *v35; // eax
  float *v36; // eax
  double v37; // st5
  double v38; // st7
  double v39; // st6
  double v40; // st5
  float *v41; // eax
  float *v42; // eax
  int v43; // eax
  void (__thiscall *v44)(int, int, int); // edx
  int v45; // esi
  float v46; // [esp+Ch] [ebp-230h]
  _DWORD v47[44]; // [esp+14h] [ebp-228h] BYREF
  char v48; // [esp+C4h] [ebp-178h]
  int v49; // [esp+C8h] [ebp-174h]
  int v50; // [esp+CCh] [ebp-170h]
  char v51; // [esp+D0h] [ebp-16Ch]
  int v52[3]; // [esp+D4h] [ebp-168h] BYREF
  char v53; // [esp+E0h] [ebp-15Ch]
  int v54; // [esp+E4h] [ebp-158h]
  int v55; // [esp+E8h] [ebp-154h]
  int v56; // [esp+ECh] [ebp-150h]
  int v57; // [esp+F0h] [ebp-14Ch]
  int v58; // [esp+F4h] [ebp-148h]
  char v59; // [esp+104h] [ebp-138h]
  _DWORD v60[41]; // [esp+108h] [ebp-134h] BYREF
  int v61; // [esp+1ACh] [ebp-90h]
  int v62; // [esp+1B4h] [ebp-88h]
  int v63; // [esp+1B8h] [ebp-84h]
  float *v64; // [esp+1C0h] [ebp-7Ch]
  float *v65; // [esp+1C8h] [ebp-74h]
  unsigned int *v66; // [esp+1E8h] [ebp-54h]
  float *v67; // [esp+1FCh] [ebp-40h]
  float v68; // [esp+200h] [ebp-3Ch]
  float v69; // [esp+204h] [ebp-38h]
  float v70; // [esp+208h] [ebp-34h]
  float v71; // [esp+20Ch] [ebp-30h]
  int v72; // [esp+210h] [ebp-2Ch]
  float *v73; // [esp+214h] [ebp-28h]
  int v74; // [esp+218h] [ebp-24h]
  float v75; // [esp+21Ch] [ebp-20h]
  float v76; // [esp+220h] [ebp-1Ch]
  float v77; // [esp+224h] [ebp-18h]
  float v78; // [esp+228h] [ebp-14h]
  float v79; // [esp+22Ch] [ebp-10h]
  float v80; // [esp+230h] [ebp-Ch] BYREF
  float v81; // [esp+234h] [ebp-8h]
  float v82; // [esp+238h] [ebp-4h]

  result = sub_10017240(a2, a5, (int)*(float *)&a6, a7);
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
                &unk_10403228);
        if ( v19 )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 12))(v19, LODWORD(a16));
      }
      if ( v17 > a3 )
      {
        a14 = a3;
        v17 = a3;
      }
      v46 = a9[1] * a9[1] + *a9 * *a9 + a9[2] * a9[2];
      v20 = off_103EDFE0(v46) * 0.01;
      if ( v20 < 0.5 )
        v20 = 0.5;
      a6 = v17 - 1;
      v21 = 1.0 / (double)(v17 - 1);
      v71 = v21;
      v76 = v20 * v21;
      v81 = fmod(a12 * a13, 1.0);
      v22 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      v23 = v22;
      v72 = v22;
      if ( v22 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 8))(v22);
      v24 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v23 + 224))(v23, 1, 0, 0, 0, a1);
      v74 = v24;
      sub_10016C20((int)v47);
      v49 = v24;
      v51 = 1;
      v50 = 3;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 40))(v24, 3);
      (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v49 + 68))(v49, 2 * v17, 2 * v17, v47);
      v52[0] = v47[41];
      v57 = v47[39];
      v54 = v24 + 4;
      v53 = v48;
      v56 = 0;
      v55 = 2 * v17;
      v59 = 0;
      v58 = 0;
      sub_10016990((int)v60, v24, 2 * v17, v47);
      v25 = 0;
      v58 = 0;
      sub_10016A00(v60);
      v26 = a9[2];
      v82 = 0.0;
      v75 = v26;
      if ( v17 > 0 )
      {
        v27 = a8;
        v28 = a15;
        v77 = v26 + a10;
        v73 = &v80;
        v67 = (float *)&a6;
        do
        {
          v82 = ((double)SLODWORD(v82) * v71 + (double)SLODWORD(v82) * v71) * 3.141592653589793;
          v29 = sin(v82);
          v30 = v67;
          *v73 = cos(v82);
          *v30 = v29;
          v31 = *(float *)&a6 * a12 * v75 + *v27;
          v68 = v31;
          v32 = v31;
          v33 = v75 * (a12 * v80) + v27[1];
          v69 = v33;
          v34 = a10 + v27[2];
          v70 = v34;
          v78 = 8388608.0;
          v79 = 8388608.0;
          v82 = 8388608.0;
          *v66 = LOBYTE(v78) | ((LOBYTE(v79) | ((LOBYTE(v82) | 0xFFFFFF00) << 8)) << 8);
          v35 = v65;
          *v65 = 1.0;
          v35[1] = v81;
          v36 = v64;
          *v64 = v32;
          v36[1] = v33;
          v36[2] = v34;
          sub_10016A80(v60);
          v37 = *(float *)&a6 * a12 * v77 + *v27;
          v68 = v37;
          v38 = v37;
          v39 = v77 * (a12 * v80) + v27[1];
          v69 = v39;
          v40 = v27[2] - a10;
          v70 = v40;
          v82 = v28[2] * 255.0 + 8388608.0;
          v79 = v28[1] * 255.0 + 8388608.0;
          v78 = 255.0 * *v28 + 8388608.0;
          *v66 = LOBYTE(v82) | ((LOBYTE(v79) | ((LOBYTE(v78) | 0xFFFFFF00) << 8)) << 8);
          v41 = v65;
          *v65 = 0.0;
          v41[1] = v81;
          v42 = v64;
          *v64 = v38;
          v42[1] = v39;
          v42[2] = v40;
          sub_10016A80(v60);
          ++v25;
          v82 = *(float *)&v25;
          v81 = v81 + v76;
        }
        while ( v25 < a14 );
        v24 = v74;
      }
      if ( v51 )
      {
        switch ( v50 )
        {
          case 4:
            v43 = 2 * v63 - 2;
            break;
          case 5:
            v43 = 2 * v63;
            break;
          case 6:
            v43 = 3 * v63 - 6;
            break;
          case 7:
            v43 = 6 * v63 / 4;
            break;
          case 8:
            v43 = 0;
            break;
          default:
            v43 = v63;
            break;
        }
        sub_10016B00(v52, v50, v43);
      }
      v44 = *(void (__thiscall **)(int, int, int))(*(_DWORD *)v49 + 80);
      v47[2] = v47;
      v44(v49, v63, v56);
      v54 = 0;
      v55 = 0;
      v62 = 0;
      v61 = 0;
      v60[19] = -1;
      v49 = 0;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v24 + 48))(v24, -1, 0);
      if ( v61 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v61 + 8))(v61) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v61 + 16))(v61);
      if ( v54 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v54 + 8))(v54) )
          (*(void (__thiscall **)(int))(*(_DWORD *)v54 + 16))(v54);
      }
      v45 = v72;
      (*(void (__thiscall **)(int))(*(_DWORD *)v72 + 12))(v72);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v45 + 4))(v45);
    }
  }
  return result;
}
