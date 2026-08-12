unsigned int __userpurge sub_101F0710@<eax>(float *a1@<ecx>, int a2@<ebx>, int a3@<edi>, float *a4, float *a5)
{
  unsigned int result; // eax
  int *v7; // ecx
  int v8; // edi
  int (__thiscall *v9)(int, float *); // edx
  int v10; // ebx
  void (__thiscall *v11)(float *, _DWORD, int); // edx
  float v12; // edx
  float v13; // eax
  int v14; // ecx
  float v15; // eax
  float v16; // edx
  double v17; // st6
  unsigned int v18; // edi
  unsigned int v19; // ebx
  int *v20; // ecx
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // eax
  int *v24; // ecx
  int v25; // eax
  int v26; // eax
  unsigned int v27; // edi
  unsigned int v28; // eax
  int *v29; // ecx
  int v30; // edi
  float v31; // [esp+4h] [ebp-20h] BYREF
  float v32; // [esp+8h] [ebp-1Ch]
  float v33; // [esp+Ch] [ebp-18h]
  float v34; // [esp+10h] [ebp-14h] BYREF
  float v35; // [esp+14h] [ebp-10h]
  float v36; // [esp+18h] [ebp-Ch]
  int v37; // [esp+1Ch] [ebp-8h]
  int v38; // [esp+20h] [ebp-4h]

  result = *((_DWORD *)a1 + 855);
  if ( result != -1 )
  {
    v7 = &off_1061BE18[4 * ((_DWORD)a1[855] & 0xFFF) + 1];
    result >>= 12;
    if ( v7[1] == result )
    {
      if ( *v7 )
      {
        v8 = (*(int (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 1092))(a1, a3, a2);
        v9 = *(int (__thiscall **)(int, float *))(*(_DWORD *)v8 + 4);
        v38 = v8;
        v10 = v9(v8, a1);
        v11 = *(void (__thiscall **)(float *, _DWORD, int))(*(_DWORD *)a1 + 140);
        v37 = v10;
        v11(a1, 0, -1);
        if ( ((_DWORD)a1[63] & 0x800) != 0 )
          sub_100DAE60((int)a1);
        v12 = a1[146];
        v13 = a1[147];
        v31 = a1[145];
        v14 = *((_DWORD *)a1 + 63) >> 11;
        v32 = v12;
        v33 = v13;
        if ( (v14 & 1) != 0 )
          sub_100DAE60((int)a1);
        v15 = a1[177];
        v16 = a1[176];
        v36 = a1[178];
        v17 = *a4;
        v35 = v15;
        v34 = v16;
        if ( v17 == flt_106F1CA8 && a4[1] == flt_106F1CAC && a4[2] == flt_106F1CB0 )
        {
          (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)v8 + 76))(v8, v10, &v31, &v34);
        }
        else
        {
          v31 = *a4;
          v32 = a4[1];
          v33 = a4[2];
          v34 = *a5;
          v35 = a5[1];
          v36 = a5[2];
        }
        (*(void (__thiscall **)(float *, float *))(*(_DWORD *)a1 + 1420))(a1, &v31);
        sub_100E0D20((int)a1, &v31);
        sub_100E0EA0((int)a1, &v34);
        sub_100DD660((int)a1, &flt_106F1CA8);
        v36 = 0.0;
        a1[812] = v34;
        a1[813] = v35;
        a1[814] = 0.0;
        *((_DWORD *)a1 + 816) = 1;
        v18 = (_DWORD)a1[563] & 0xFFFFFBFF;
        if ( *((_DWORD *)a1 + 563) != v18 )
        {
          (**((void (__thiscall ***)(_DWORD *, _DWORD *))a1 + 548))((_DWORD *)a1 + 548, (_DWORD *)a1 + 563);
          *((_DWORD *)a1 + 563) = v18;
        }
        v19 = (_DWORD)a1[48] & 0xFFFFFFDF;
        if ( *((_DWORD *)a1 + 48) != v19 )
        {
          if ( *((_BYTE *)a1 + 84) )
          {
            *((_BYTE *)a1 + 88) |= 1u;
          }
          else
          {
            v20 = (int *)*((_DWORD *)a1 + 6);
            if ( v20 )
              sub_100194B0(v20, 192);
          }
          *((_DWORD *)a1 + 48) = v19;
        }
        if ( *((_DWORD *)a1 + 6) )
          **((_DWORD **)a1 + 6) |= 0x80u;
        sub_100D8500(a1);
        sub_100E0970((int)a1, v21, 2, 0);
        sub_100EBE30((int)a1, 5);
        v22 = *((_DWORD *)a1 + 106);
        if ( v22 )
          (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v22 + 180))(v22, &v31, &flt_106F1CB4, 1);
        v23 = *((_DWORD *)a1 + 855);
        if ( v23 != -1
          && off_1061BE18[4 * ((_DWORD)a1[855] & 0xFFF) + 2] == v23 >> 12
          && off_1061BE18[4 * ((_DWORD)a1[855] & 0xFFF) + 1] )
        {
          if ( *((_BYTE *)a1 + 84) )
          {
            *((_BYTE *)a1 + 88) |= 1u;
          }
          else
          {
            v24 = (int *)*((_DWORD *)a1 + 6);
            if ( v24 )
              sub_100194B0(v24, 3420);
          }
          a1[855] = NAN;
        }
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v38 + 36))(v38, v37, 0);
        if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 264))(a1) )
        {
          if ( sub_100CF460(a1) )
          {
            v25 = sub_100CF460(a1);
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v25 + 1008))(v25) )
            {
              v26 = sub_100CF460(a1);
              (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 992))(v26);
              v27 = (_DWORD)a1[563] & 0xFFFFFEFF;
              if ( *((_DWORD *)a1 + 563) != v27 )
              {
                (**((void (__thiscall ***)(_DWORD *, _DWORD *))a1 + 548))((_DWORD *)a1 + 548, (_DWORD *)a1 + 563);
                *((_DWORD *)a1 + 563) = v27;
              }
            }
          }
          v28 = *((_DWORD *)a1 + 1007);
          if ( v28 != -1 )
          {
            v29 = &off_1061BE18[4 * ((_DWORD)a1[1007] & 0xFFF) + 1];
            if ( off_1061BE18[4 * ((_DWORD)a1[1007] & 0xFFF) + 2] == v28 >> 12 )
            {
              v30 = *v29;
              if ( *v29 )
              {
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v30 + 864))(v30, 32);
                (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v30 + 840))(
                  v30,
                  "models/weapons/v_grenade.mdl",
                  0);
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v30 + 836))(v30, 0);
              }
            }
          }
        }
        return sub_101E3110(a1, 0, 0, 0);
      }
    }
  }
  return result;
}
