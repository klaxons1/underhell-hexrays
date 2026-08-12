void __userpurge sub_1038A180(float *a1@<ecx>, int a2@<ebx>, int a3@<edi>, float a4)
{
  int v5; // edi
  int v6; // ebx
  float *v7; // edi
  float *v8; // eax
  double v9; // st6
  int v10; // ebx
  double v11; // st4
  double v12; // rt0
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int (__thiscall *v17)(float *); // edx
  int v18; // eax
  float *v19; // eax
  _BYTE v20[12]; // [esp+10h] [ebp-18h] BYREF
  float v21; // [esp+1Ch] [ebp-Ch] BYREF
  float v22; // [esp+20h] [ebp-8h]
  float v23; // [esp+24h] [ebp-4h]
  float v24; // [esp+30h] [ebp+8h]

  if ( *((_DWORD *)a1 + 1067) )
  {
    sub_10389120((int)a1, a4);
    v5 = (*(int (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 368))(a1, a3, a2);
    if ( !v5
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5)
      || (v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1096))(v5)) == 0 )
    {
      v6 = v5;
    }
    v7 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)a1 + 968))(a1, v20);
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
    v9 = v8[1] - v7[1];
    v10 = *(_DWORD *)(dword_106E9DBC + 48);
    v11 = *v8 - *v7;
    v12 = v8[2] - v7[2];
    v24 = v11 * v11 + v9 * v9 + v12 * v12;
    v13 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
    v14 = v13;
    if ( v13 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 320))(v13) )
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 1096))(v14);
        if ( v15 )
          v14 = v15;
      }
    }
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v14 + 540))(v14, &v21, 0);
    if ( v24 > 562500.0 || v22 * v22 + v21 * v21 + v23 * v23 > 160000.0 )
      v16 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, v10, v10 + 1);
    else
      v16 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
              dword_106B31E4,
              2 * v10 - 1,
              2 * v10 + 1);
    *((_DWORD *)a1 + 1059) = v16;
    v17 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368);
    *((_DWORD *)a1 + 1067) = 5;
    *((_DWORD *)a1 + 1068) = 4;
    v18 = v17(a1);
    v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 576))(v18);
    a1[1052] = *v19;
    a1[1053] = v19[1];
    a1[1054] = v19[2];
  }
}
