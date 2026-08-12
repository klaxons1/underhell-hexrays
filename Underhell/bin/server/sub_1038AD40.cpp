int __usercall sub_1038AD40@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int (__thiscall *v8)(int, int, int); // edx
  int v9; // edi
  int v10; // ebx
  float *v11; // edi
  float *v12; // eax
  int (__thiscall *v13)(int, _BYTE *); // edx
  float *v14; // eax
  double v15; // st7
  int v16; // eax
  float *v17; // eax
  float v19; // [esp+18h] [ebp-74h]
  _BYTE v20[12]; // [esp+58h] [ebp-34h] BYREF
  float v21[3]; // [esp+64h] [ebp-28h] BYREF
  float v22[3]; // [esp+70h] [ebp-1Ch] BYREF
  void **v23; // [esp+7Ch] [ebp-10h] BYREF
  float v24; // [esp+80h] [ebp-Ch]
  float v25; // [esp+84h] [ebp-8h]
  float v26; // [esp+88h] [ebp-4h]
  int savedregs; // [esp+8Ch] [ebp+0h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a1 + 4304) )
    return 0;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  v6 = v5;
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1096))(v6);
      if ( v7 )
        v6 = v7;
    }
  }
  if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
    sub_100DAE60(v6);
  if ( *(float *)(a1 + 588) - *(float *)(v6 + 588) < 150.0 )
    return 0;
  v8 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 368);
  *(float *)(a1 + 4304) = *(float *)(dword_106B31C8 + 12) + 3.0;
  v9 = v8(a1, a2, a3);
  if ( !v9
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9)
    || (v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1096))(v9)) == 0 )
  {
    v10 = v9;
  }
  v11 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 968))(a1, v22);
  v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
  v24 = *v12 - *v11;
  v25 = v12[1] - v11[1];
  v26 = 0.0;
  off_10689714();
  v13 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 968);
  v23 = &CTraceFilterWorldOnly::`vftable';
  v24 = v24 * 100.0;
  v25 = 100.0 * v25;
  v26 = -100.0;
  v14 = (float *)v13(a1, v20);
  v22[0] = *v14 + v24;
  v22[1] = v14[1] + v25;
  v15 = v14[2] + v26;
  v16 = *(_DWORD *)a1;
  v22[2] = v15;
  v17 = (float *)(*(int (__thiscall **)(int))(v16 + 968))(a1);
  sub_10023120(COERCE_FLOAT(&savedregs), a1, v17, v21, (int)v22, 33570827, (int)&v23);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  if ( *(float *)(a1 + 588) - 25.0 > v19 )
    return 0;
  else
    return 106;
}
