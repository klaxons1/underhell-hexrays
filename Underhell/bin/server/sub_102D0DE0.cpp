// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_102D0DE0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax
  float v11[22]; // [esp+D8h] [ebp-15Ch] BYREF
  _BYTE v12[12]; // [esp+130h] [ebp-104h] BYREF
  float v13[16]; // [esp+13Ch] [ebp-F8h] BYREF
  int v14; // [esp+17Ch] [ebp-B8h]
  _DWORD v15[3]; // [esp+18Ch] [ebp-A8h] BYREF
  _DWORD v16[8]; // [esp+198h] [ebp-9Ch] BYREF
  float v17; // [esp+1B8h] [ebp-7Ch] BYREF
  float v18; // [esp+1BCh] [ebp-78h]
  float v19; // [esp+1C0h] [ebp-74h]
  float v20; // [esp+1C4h] [ebp-70h]
  float v21; // [esp+1C8h] [ebp-6Ch]
  float v22; // [esp+1CCh] [ebp-68h]
  float v23; // [esp+1D0h] [ebp-64h]
  float v24; // [esp+1D4h] [ebp-60h]
  float v25; // [esp+1D8h] [ebp-5Ch]
  float v26; // [esp+1DCh] [ebp-58h]
  float v27; // [esp+1E0h] [ebp-54h]
  float v28; // [esp+1E4h] [ebp-50h]
  float v29; // [esp+1E8h] [ebp-4Ch]
  float v30; // [esp+1ECh] [ebp-48h]
  float v31; // [esp+1F0h] [ebp-44h]
  float v32; // [esp+1F4h] [ebp-40h]
  float v33; // [esp+1F8h] [ebp-3Ch]
  int v34; // [esp+1FCh] [ebp-38h]
  float v35; // [esp+200h] [ebp-34h]
  float v36; // [esp+204h] [ebp-30h]
  float v37; // [esp+208h] [ebp-2Ch]
  float v38; // [esp+20Ch] [ebp-28h]
  float v39; // [esp+210h] [ebp-24h]
  int v40; // [esp+214h] [ebp-20h]
  float v41; // [esp+218h] [ebp-1Ch]
  float v42; // [esp+21Ch] [ebp-18h] BYREF
  float v43; // [esp+220h] [ebp-14h]
  int v44; // [esp+224h] [ebp-10h]
  int v45; // [esp+228h] [ebp-Ch]
  void *v46; // [esp+22Ch] [ebp-8h]
  void *retaddr; // [esp+234h] [ebp+0h]

  v45 = a2;
  v46 = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v5 = *(_DWORD *)(a1 + 252);
  v42 = *(float *)(a1 + 580);
  v43 = *(float *)(a1 + 584);
  *(float *)&v44 = *(float *)(a1 + 588) - 128.0;
  if ( (v5 & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_1001F180(v11, (float *)(a1 + 580), &v42);
  sub_10265570(v15, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v11,
    16395,
    v15,
    v12,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v12, (int)v13, 255, 0, 0, 1, 5.0);
  sub_10264E40((int)v12, (int)"Scorch");
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v29 = 0.0;
  v22 = 0.0;
  v30 = 0.0;
  v23 = 0.0;
  v34 = 0;
  v24 = 0.0;
  LOWORD(v35) = 0;
  v25 = 0.0;
  v36 = 0.0;
  v26 = 0.0;
  v37 = 0.0;
  v27 = 0.0;
  v38 = 0.0;
  v28 = 0.0;
  LOBYTE(v39) = 0;
  v31 = 1.0;
  v32 = 0.0;
  v33 = 0.0;
  if ( v14
    && !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v14 + 24)) )
  {
    v33 = 175.0;
    v23 = v13[3];
    v24 = v13[4];
    v25 = v13[5];
    v17 = v13[0];
    v18 = v13[1];
    v19 = v13[2];
    sub_1028E890((int)"AR2Explosion", (int)&v17);
  }
  sub_10219BB0(v16);
  v16[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v16);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  ((void (__stdcall *)(_DWORD *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, _DWORD, int))(*off_1065C5EC)[8])(
    v16,
    0.0,
    a1 + 580,
    8.0,
    700.0,
    *(_DWORD *)(a1 + 820),
    0,
    0,
    2,
    0.2,
    32.0,
    0,
    0.0,
    255,
    255,
    225,
    32,
    0,
    8);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v44 = 8;
  ((void (__stdcall *)(_DWORD *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, _DWORD))(*off_1065C5EC)[8])(
    v16,
    0.0,
    a1 + 580,
    8.0,
    350.0,
    *(_DWORD *)(a1 + 820),
    0,
    0,
    2,
    0.2,
    64.0,
    0,
    0.0,
    255,
    255,
    225,
    64,
    0);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v6 = *(_DWORD *)(a1 + 412);
  if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1];
  v43 = 0.0;
  v42 = 0.0;
  v41 = 350.0;
  v40 = a1 + 580;
  v8 = sub_10248110((int)v11, a1, v7, 50.0, 67108928, 0);
  sub_100C9F20(v8, v40, v41, SLODWORD(v42), SLODWORD(v43));
  sub_1023C380((_DWORD *)a1, (int)"Weapon_Mortar.Impact", 0.0, 0);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10261B70((float *)(a1 + 580), 10.0, 60.0, 1.0, 550.0, 0, 0);
  *(float *)(a1 + 800) = *(float *)(dword_106B31C8 + 12);
  sub_100EC3F0((_DWORD *)a1, (int)sub_102CF520, 0.0, 0);
  v42 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
  sub_100EC4A0((int *)a1, v42, 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
}
