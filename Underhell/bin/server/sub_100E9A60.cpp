// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_100E9A60@<al>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        int a7,
        float *a8)
{
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  double (__thiscall *v12)(int, _DWORD, _DWORD); // edx
  int v13; // eax
  double v14; // st1
  double v15; // st7
  float v17; // [esp+30h] [ebp-DCh] BYREF
  float v18; // [esp+34h] [ebp-D8h]
  float v19; // [esp+38h] [ebp-D4h]
  float v20; // [esp+3Ch] [ebp-D0h]
  float v21[8]; // [esp+40h] [ebp-CCh] BYREF
  int v22; // [esp+60h] [ebp-ACh]
  float v23; // [esp+68h] [ebp-A4h]
  _BYTE v24[12]; // [esp+90h] [ebp-7Ch] BYREF
  float v25; // [esp+9Ch] [ebp-70h] BYREF
  float v26; // [esp+A0h] [ebp-6Ch]
  float v27; // [esp+A4h] [ebp-68h]
  float v28; // [esp+A8h] [ebp-64h]
  float v29; // [esp+ACh] [ebp-60h]
  float v30; // [esp+B0h] [ebp-5Ch]
  char v31; // [esp+C0h] [ebp-4Ch]
  float v32[2]; // [esp+ECh] [ebp-20h] BYREF
  float v33; // [esp+F4h] [ebp-18h]
  float v34; // [esp+F8h] [ebp-14h]
  int v35; // [esp+FCh] [ebp-10h]
  int v36; // [esp+100h] [ebp-Ch]
  void *v37; // [esp+104h] [ebp-8h]
  void *retaddr; // [esp+10Ch] [ebp+0h]

  v36 = a2;
  v37 = retaddr;
  sub_1001F180(v21, a5 + 1, a6);
  (*(void (__thiscall **)(int, float *, int, int, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v21,
    1174421555,
    a7,
    v24,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v24, (int)&v25, 255, 0, 0, 1, -1.0);
  v32[0] = v25;
  v35 = 0;
  v32[1] = v26;
  v34 = COERCE_FLOAT(v32);
  v33 = v27 - 0.1;
  if ( ((**(int (__thiscall ***)(int, float *))dword_106B31F4)(dword_106B31F4, v32) & 0x30) == 0 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 660))(a1) )
  {
    v34 = a5[11];
    v10 = (_DWORD *)sub_102D9B20();
    v34 = COERCE_FLOAT(sub_100B9DD0(v10, SLODWORD(v34)));
    v11 = (_DWORD *)sub_102D9B20();
    v35 = sub_100B9E00(v11, SLODWORD(v34));
    sub_1001F130(&v17);
    v17 = v25;
    v18 = v26;
    v19 = v27;
    v21[2] = v28;
    v21[3] = v29;
    v21[4] = v30;
    v12 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    v34 = (float)v35;
    v33 = (float)SLODWORD(v34);
    v23 = v12(dword_106B31E4, LODWORD(v33), LODWORD(v34));
    if ( (v31 & 0x10) != 0 )
      v22 |= 1u;
    sub_1028E890("gunshotsplash", &v17);
  }
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v13 = sub_10261B20();
    if ( v13 )
    {
      if ( *(_BYTE *)(v13 + 447) == 3 )
      {
        if ( sub_101811E0("waterbullet", -1) )
        {
          sub_10272A70(&v25, a5 + 4);
          sub_1001F130(&v17);
          v20 = v25;
          v34 = COERCE_FLOAT(&v17);
          v21[0] = v26;
          v33 = COERCE_FLOAT("TracerSound");
          v22 = 16;
          v21[1] = v27;
          v14 = a5[6];
          v15 = a5[5] * 400.0 + v26;
          v17 = a5[4] * 400.0 + v25;
          v18 = v15;
          v19 = 400.0 * v14 + v27;
          sub_1028E890("TracerSound", &v17);
        }
      }
    }
  }
  *a8 = v25;
  a8[1] = v26;
  a8[2] = v27;
  return 1;
}
