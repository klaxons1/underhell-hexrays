void __userpurge sub_102359B0(unsigned __int16 *a1@<ecx>, int a2@<edi>, int a3, float *a4, int a5)
{
  int v6; // edx
  int v7; // eax
  void (__stdcall *v8)(_DWORD); // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  bool v12; // zf
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  float v16; // [esp+34h] [ebp-29Ch]
  int v17; // [esp+44h] [ebp-28Ch] BYREF
  int v18; // [esp+48h] [ebp-288h] BYREF
  float v19[2]; // [esp+4Ch] [ebp-284h] BYREF
  float v20[4]; // [esp+54h] [ebp-27Ch] BYREF
  float v21[3]; // [esp+64h] [ebp-26Ch] BYREF
  int v22[4]; // [esp+70h] [ebp-260h] BYREF
  int v23; // [esp+80h] [ebp-250h]
  int v24; // [esp+84h] [ebp-24Ch]
  int v25; // [esp+88h] [ebp-248h]
  int v26; // [esp+8Ch] [ebp-244h]
  int v27; // [esp+90h] [ebp-240h]
  char v28; // [esp+94h] [ebp-23Ch]
  _DWORD v29[35]; // [esp+244h] [ebp-8Ch] BYREF

  if ( dword_1047C970 && dword_1047CA88 && dword_1047CA5C && *a1 != 0xFFFF )
  {
    v6 = *((unsigned __int8 *)a1 + 3);
    v7 = *((unsigned __int8 *)a1 + 4);
    v20[0] = (double)*((unsigned __int8 *)a1 + 2) * 0.0039215689;
    v20[1] = (double)v6 * 0.0039215689;
    v20[2] = 0.0039215689 * (double)v7;
    (*(void (__stdcall **)(float *, int))(*(_DWORD *)dword_1047CA5C + 108))(v20, a2);
    v8 = *(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA5C + 112);
    v18 = *((unsigned __int8 *)a1 + 5);
    v16 = (double)v18 * 0.0039215689;
    v8(LODWORD(v16));
    v9 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA88 + 40))(*a1);
    v10 = *a1;
    v22[0] = v9;
    v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA88 + 44))(dword_1047CA88, v10);
    v12 = *((_BYTE *)a1 + 1580) == 0;
    v13 = *((_DWORD *)a1 + 2);
    v14 = *((_DWORD *)a1 + 3);
    v22[1] = v11;
    v15 = *((_DWORD *)a1 + 5);
    v22[2] = 0;
    v22[3] = v13;
    v23 = v14;
    v24 = 0;
    v25 = 0;
    v27 = 0;
    v28 = 0;
    v26 = v15;
    if ( v12 )
    {
      sub_101ED860((float *)a1 + 392, a4, v19);
    }
    else
    {
      v19[0] = *((float *)a1 + 392);
      v19[1] = *((float *)a1 + 393);
      v20[0] = *((float *)a1 + 394);
    }
    (*(void (__thiscall **)(int, int, int, float *))(*(_DWORD *)dword_1047CA5C + 52))(dword_1047CA5C, v22[0], v23, v19);
    sub_10017210(&v18, dword_1047C970);
    v17 = 0;
    if ( *(_DWORD *)(v22[0] + 260) )
    {
      sub_101288D0((int)v29, v22[0], dword_1047CA88);
      (*(void (__thiscall **)(int, _DWORD, int *, _DWORD))(*(_DWORD *)dword_1047CA5C + 80))(
        dword_1047CA5C,
        *(_DWORD *)(v22[0] + 260),
        &v17,
        0);
      sub_10126DF0(v29, (int)(a1 + 16), v17);
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA5C + 84))(dword_1047CA5C);
      sub_10030220(v29);
    }
    sub_101EDA00((int)a4, 3, v21);
    (*(void (__thiscall **)(int, _DWORD, int *, int, int, _DWORD, float *))(*(_DWORD *)dword_1047CA5C + 116))(
      dword_1047CA5C,
      0,
      v22,
      a5,
      v17,
      0,
      v21);
    sub_100170F0(&v17);
  }
}
