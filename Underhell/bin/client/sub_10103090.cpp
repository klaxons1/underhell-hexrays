void __userpurge sub_10103090(_DWORD *a1@<ecx>, int a2@<edi>, int a3, int a4, int a5)
{
  int v5; // ebx
  double v6; // st7
  double v7; // st6
  double v8; // st5
  _DWORD *v9; // esi
  double v10; // st4
  double v11; // st7
  __int16 v12; // cx
  int v13; // eax
  double v14; // st7
  double v15; // st7
  int v16; // edx
  float v17; // [esp+0h] [ebp-8Ch]
  float v18[18]; // [esp+10h] [ebp-7Ch] BYREF
  __int16 v19; // [esp+58h] [ebp-34h]
  int v20; // [esp+60h] [ebp-2Ch]
  int v21; // [esp+64h] [ebp-28h]
  float v22[3]; // [esp+70h] [ebp-1Ch] BYREF
  float v23; // [esp+7Ch] [ebp-10h] BYREF
  float v24; // [esp+80h] [ebp-Ch]
  float v25; // [esp+84h] [ebp-8h]
  _DWORD *v26; // [esp+88h] [ebp-4h]

  v5 = a1[46];
  v26 = a1;
  if ( v5 )
  {
    v6 = *(float *)(a3 + 12) - *(float *)a3;
    v23 = v6;
    v7 = *(float *)(a3 + 16) - *(float *)(a3 + 4);
    v24 = v7;
    v8 = *(float *)(a3 + 20) - *(float *)(a3 + 8);
    v25 = v8;
    if ( a4 == 64 )
    {
      v17 = v8 * v8 + v7 * v7 + v6 * v6;
      off_103EDFE0(v17);
      v23 = v23 * 500.0;
      v24 = v24 * 500.0;
      v25 = 500.0 * v25;
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v5 + 236))(v5, &v23, a2);
      v9 = v26;
    }
    else
    {
      v10 = v6 * *(float *)(a3 + 44);
      v11 = *(float *)(a3 + 44);
      v22[0] = v10 + *(float *)a3;
      v22[1] = v7 * v11 + *(float *)(a3 + 4);
      v22[2] = v11 * v8 + *(float *)(a3 + 8);
      off_103EDFEC();
      v23 = v23 * 4000.0;
      v24 = v24 * 4000.0;
      v25 = 4000.0 * v25;
      (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v5 + 240))(v5, &v23, v22, a2);
      sub_1000E650(v18);
      v12 = *(_WORD *)(a3 + 64);
      v18[0] = *(float *)(a3 + 12);
      v13 = *(_DWORD *)(a3 + 80);
      v18[1] = *(float *)(a3 + 16);
      v14 = *(float *)(a3 + 20);
      v20 = a4;
      v18[2] = v14;
      v19 = v12;
      v15 = *(float *)a3;
      v21 = v13;
      v18[3] = v15;
      v18[4] = *(float *)(a3 + 4);
      v9 = v26;
      v16 = *v26;
      v18[5] = *(float *)(a3 + 8);
      v18[13] = *(float *)(*(int (__thiscall **)(_DWORD *))(v16 + 8))(v26);
      if ( a5 )
        sub_10168E60(a5, v18);
      else
        sub_10168E60("Impact", v18);
    }
    (*(void (__thiscall **)(_DWORD *))(*v9 + 752))(v9);
  }
}
