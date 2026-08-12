int __userpurge sub_1002E690@<eax>(
        float *a1@<ecx>,
        int a2@<ebp>,
        float *a3@<edi>,
        float *a4@<esi>,
        float *a5,
        float *a6)
{
  int result; // eax
  int v8; // eax
  int v9; // edi
  float v10; // ecx
  float v11; // edx
  int (__thiscall *v12)(float *, float *, float *); // edx
  int v13; // eax
  int v14; // eax
  float *v15; // eax
  int v16; // eax
  int v19; // [esp+2Ch] [ebp-148h]
  float v20; // [esp+2Ch] [ebp-148h]
  int v21; // [esp+2Ch] [ebp-148h]
  _BYTE *v22; // [esp+30h] [ebp-144h]
  float v23[22]; // [esp+38h] [ebp-13Ch] BYREF
  _BYTE v24[12]; // [esp+90h] [ebp-E4h] BYREF
  int v25; // [esp+9Ch] [ebp-D8h] BYREF
  int v26; // [esp+DCh] [ebp-98h]
  int v27; // [esp+ECh] [ebp-88h] BYREF
  int v28; // [esp+F8h] [ebp-7Ch] BYREF
  float v29; // [esp+104h] [ebp-70h] BYREF
  float v30; // [esp+108h] [ebp-6Ch]
  float v31; // [esp+10Ch] [ebp-68h]
  float v32[9]; // [esp+110h] [ebp-64h] BYREF
  float v33[3]; // [esp+134h] [ebp-40h] BYREF
  float v34[3]; // [esp+140h] [ebp-34h] BYREF
  int v35; // [esp+14Ch] [ebp-28h]
  int v36; // [esp+150h] [ebp-24h]
  int v37; // [esp+154h] [ebp-20h]
  float v38; // [esp+158h] [ebp-1Ch]
  float v39; // [esp+15Ch] [ebp-18h]
  float v40; // [esp+160h] [ebp-14h]
  int v41; // [esp+164h] [ebp-10h]
  int v42; // [esp+168h] [ebp-Ch]
  void *v43; // [esp+16Ch] [ebp-8h]
  void *retaddr; // [esp+174h] [ebp+0h]

  v42 = a2;
  v43 = retaddr;
  result = dword_10690B5C;
  if ( *(_DWORD *)(dword_10690B5C + 48)
    && (v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1),
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8),
        (_BYTE)result) )
  {
    v9 = *(_DWORD *)(dword_10690BA4 + 48);
    v10 = a6[1];
    v38 = *a6;
    v11 = a6[2];
    v29 = v38;
    v39 = v10;
    v30 = v10;
    v40 = v11;
    v31 = v11;
    v35 = v9;
    v37 = 0;
    result = sub_10421D80(&v29, v32);
    if ( v9 > 0 )
    {
      v36 = v35;
      do
      {
        v12 = *(int (__thiscall **)(float *, float *, float *))(*(_DWORD *)a1 + 368);
        v41 = *(_DWORD *)a1;
        v19 = v12(a1, a3, a4);
        v13 = sub_100CF460(a1);
        v20 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(v41 + 1112))(a1, v13, v19);
        v21 = (*(int (__thiscall **)(float *, _DWORD))(v41 + 368))(a1, LODWORD(v20));
        v14 = sub_100CF460(a1);
        v15 = (float *)(*(int (__thiscall **)(float *, int *, int, int))(v41 + 1108))(a1, &v27, v14, v21);
        sub_10022E00(&v29, v15, *(float *)&v22);
        v34[0] = v32[6] * 8192.0 + *a5;
        v34[1] = v32[7] * 8192.0 + a5[1];
        v34[2] = 8192.0 * v32[8] + a5[2];
        sub_1001F180(v23, a5, v34);
        sub_10265570(a1, 0);
        v22 = v24;
        (*(void (__thiscall **)(int, float *, int, int *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v23,
          1174421507,
          &v28);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v24, (int)&v25, 255, 0, 0, 1, 5.0);
        if ( v26 )
        {
          v16 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
          if ( v26 == v16 )
            ++v37;
        }
        a4 = a5;
        a3 = v33;
        (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 2100))(a1);
        v38 = v33[0] - *a5;
        v39 = v33[1] - a5[1];
        v40 = v33[2] - a5[2];
        off_10689714();
        v29 = v38;
        v30 = v39;
        v31 = v40;
        result = sub_10421D80(&v29, v32);
        --v36;
      }
      while ( v36 );
    }
    a1[893] = (double)v37 / (double)v35 * 100.0;
  }
  else
  {
    a1[893] = -1.0;
  }
  return result;
}
