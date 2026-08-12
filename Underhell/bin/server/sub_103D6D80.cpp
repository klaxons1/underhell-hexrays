int __userpurge sub_103D6D80@<eax>(int a1@<ecx>, int a2@<edi>, int a3, int a4)
{
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  int *v9; // ecx
  char v10; // al
  bool v11; // zf
  void (__noreturn ***v12)(); // edi
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int *v17; // ecx
  int v18; // eax
  int *v19; // ecx
  double v20; // st7
  _DWORD *v22; // esi
  float v23; // [esp+2Ch] [ebp-80h]
  float v25; // [esp+34h] [ebp-78h]
  int v26; // [esp+3Ch] [ebp-70h] BYREF
  const char *v27; // [esp+40h] [ebp-6Ch]
  float v28; // [esp+44h] [ebp-68h]
  int v29; // [esp+48h] [ebp-64h]
  int v30; // [esp+4Ch] [ebp-60h]
  int v31; // [esp+50h] [ebp-5Ch]
  int v32; // [esp+54h] [ebp-58h]
  float v33; // [esp+58h] [ebp-54h]
  int v34; // [esp+5Ch] [ebp-50h]
  __int16 v35; // [esp+60h] [ebp-4Ch]
  char v36; // [esp+62h] [ebp-4Ah]
  int v37; // [esp+64h] [ebp-48h]
  int v38[5]; // [esp+68h] [ebp-44h] BYREF
  __int16 v39; // [esp+7Ch] [ebp-30h]
  _DWORD v40[8]; // [esp+80h] [ebp-2Ch] BYREF
  float v41; // [esp+A0h] [ebp-Ch] BYREF
  float v42; // [esp+A4h] [ebp-8h]
  float v43; // [esp+A8h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 8) == -1 )
    *(_DWORD *)(a1 + 8) = 0;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v5 = *(_DWORD *)(a1 + 48);
    if ( v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 48) & 0xFFF) + 1];
      v7 = v5 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 48) & 0xFFF) + 2] == v7 )
      {
        if ( *v6 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 48) & 0xFFF) + 2] == v7 )
            v8 = (_DWORD *)*v6;
          else
            v8 = 0;
          sub_103D5D90(v8, (_DWORD *)(a1 - 1120));
        }
      }
    }
    *(_BYTE *)(a1 + 20) = 1;
  }
  v9 = *(int **)(a1 + 32);
  if ( v9 )
  {
    sub_10242060(v9);
    sub_1005C620((_BYTE *)(*(_DWORD *)(a1 + 32) + 116), 0, 0, 0, 0);
  }
  if ( a4 == 1 )
  {
    (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(a1 - 696) + 204))(*(_DWORD *)(a1 - 696), &v41, 0);
    v25 = v42 * v42 + v41 * v41 + v43 * v43;
    *(float *)(a1 + 28) = off_10689708(v25);
    v22 = (_DWORD *)(a1 - 1120);
    sub_103D3100(v22, a3);
    sub_103D40C0((int)v22);
    return sub_100EC3F0(v22, 0, *(float *)(dword_106B31C8 + 12), off_1067E560);
  }
  else
  {
    v10 = *(_BYTE *)(a1 + 24);
    if ( v10 != 1 )
    {
      if ( !v10 )
        *(float *)(a1 + 44) = *(float *)(dword_106B31C8 + 12);
      *(_BYTE *)(a1 + 24) = 1;
    }
    if ( (*(_DWORD *)(a1 - 868) & 0x800) != 0 )
      sub_100DAE60(a1 - 1120);
    sub_10219BB0(v40);
    v40[0] = &CPASFilter::`vftable';
    sub_1021A370(v40, a1 - 540);
    v40[0] = &CPASAttenuationFilter::`vftable';
    sub_1021A0E0(v40, (float *)(a1 - 540), 0.80000001);
    sub_10219A50(v40);
    v28 = 1.0;
    v33 = 0.0;
    v27 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 100;
    v32 = 0;
    v34 = 0;
    v35 = 1;
    v36 = 0;
    v37 = -1;
    memset(v38, 0, sizeof(v38));
    v39 = -1;
    v26 = 6;
    v11 = *(_DWORD *)(dword_10698344 + 48) == 0;
    v27 = "NPC_CombineBall_Episodic.HoldingInPhysCannon";
    if ( v11 )
      v27 = "NPC_CombineBall.HoldingInPhysCannon";
    v28 = 1.0;
    v29 = 75;
    sub_103D3100((void *)(a1 - 1120), a3);
    v12 = sub_1023DBA0();
    v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 72))(
            dword_106B31D0,
            *(_DWORD *)(a1 - 1096),
            a2);
    v14 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int *))(*v12)[6])(v12, v40, v13, &v26);
    *(_DWORD *)(a1 + 36) = v14;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v12)[2])(v12, v14, 1.0, 100.0, 0.0);
    sub_100EBE30(a1 - 1120, 1);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 - 696) + 112))(20.0);
    v15 = *(_DWORD *)(a1 - 696);
    v41 = 100.0;
    v42 = 100.0;
    v43 = 100.0;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v15 + 132))(v15, &v41);
    sub_100EC3F0((_DWORD *)(a1 - 1120), 0, *(float *)(dword_106B31C8 + 12), off_1067E55C);
    if ( *(_BYTE *)(a1 + 57) != 1 )
    {
      v16 = a1 - 1120;
      if ( *(_BYTE *)(a1 - 1036) )
      {
        *(_BYTE *)(v16 + 88) |= 1u;
      }
      else
      {
        v17 = *(int **)(v16 + 24);
        if ( v17 )
          sub_100194B0(v17, 1177);
      }
      *(_BYTE *)(a1 + 57) = 1;
    }
    if ( *(_BYTE *)(a1 + 58) )
    {
      v18 = a1 - 1120;
      if ( *(_BYTE *)(a1 - 1036) )
      {
        *(_BYTE *)(v18 + 88) |= 1u;
      }
      else
      {
        v19 = *(int **)(v18 + 24);
        if ( v19 )
          sub_100194B0(v19, 1178);
      }
      *(_BYTE *)(a1 + 58) = 0;
    }
    *(_BYTE *)(a1 + 25) = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 1)
      && *(_DWORD *)(dword_10698344 + 48) )
    {
      v20 = 12.0;
    }
    else
    {
      v20 = (float)8.0;
    }
    v23 = v20 - 1.0 + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0((_DWORD *)(a1 - 1120), (int)sub_103D6190, v23, off_1067E558);
    sub_103D3020(a1 - 1120);
    sub_102375F0(v38);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v40);
  }
}
