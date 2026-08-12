int __thiscall sub_103D3C70(_DWORD *this)
{
  int v1; // esi
  int v3; // ebx
  int *v4; // esi
  unsigned int v5; // edx
  double v6; // st3
  float *v7; // eax
  double v8; // st4
  double v9; // st6
  double v10; // st4
  double v11; // st5
  double v12; // st6
  bool v13; // zf
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  double v20; // st3
  _DWORD *v21; // esi
  int v22; // eax
  int v23; // eax
  float v24; // [esp+14h] [ebp-C4h]
  float v25; // [esp+14h] [ebp-C4h]
  float v26; // [esp+18h] [ebp-C0h]
  float v27; // [esp+18h] [ebp-C0h]
  int v28; // [esp+28h] [ebp-B0h] BYREF
  const char *v29; // [esp+2Ch] [ebp-ACh]
  float v30; // [esp+30h] [ebp-A8h]
  int v31; // [esp+34h] [ebp-A4h]
  int v32[6]; // [esp+54h] [ebp-84h] BYREF
  _DWORD v33[8]; // [esp+6Ch] [ebp-6Ch] BYREF
  float v34[3]; // [esp+8Ch] [ebp-4Ch] BYREF
  float v35[3]; // [esp+98h] [ebp-40h] BYREF
  float v36; // [esp+A4h] [ebp-34h]
  float v37; // [esp+A8h] [ebp-30h]
  float v38; // [esp+ACh] [ebp-2Ch]
  float v39; // [esp+B0h] [ebp-28h]
  float v40; // [esp+B4h] [ebp-24h]
  float v41; // [esp+B8h] [ebp-20h]
  float v42; // [esp+BCh] [ebp-1Ch] BYREF
  float v43; // [esp+C0h] [ebp-18h]
  float v44; // [esp+C4h] [ebp-14h]
  _DWORD *v45; // [esp+C8h] [ebp-10h]
  int v46; // [esp+CCh] [ebp-Ch] BYREF
  float v47; // [esp+D0h] [ebp-8h]
  float v48; // [esp+D4h] [ebp-4h]

  v1 = this[106];
  v45 = this;
  if ( !v1 )
  {
    v26 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
    return sub_100EC3F0(this, (int)sub_103D3C70, v26, off_1067E554);
  }
  (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v1 + 188))(v1, &v46, 0);
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v1 + 204))(v1, &v42, 0);
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
  {
    v3 = 1;
    do
    {
      v4 = (int *)sub_1025FB50(v3);
      if ( v4 )
      {
        if ( (v4[63] & 0x800) != 0 )
          sub_100DAE60((int)v4);
        v39 = *((float *)v4 + 145) - *(float *)&v46;
        v40 = *((float *)v4 + 146) - v47;
        v41 = *((float *)v4 + 147) - v48;
        off_10689714();
        if ( v40 * v43 + v39 * v42 + v41 * v44 > 0.5 )
        {
          v5 = (unsigned int)v4[63] >> 11;
          v6 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 28);
          v34[0] = v42 * v6 + *(float *)&v46;
          v34[1] = v43 * v6 + v47;
          v34[2] = v6 * v44 + v48;
          if ( (v5 & 1) != 0 )
            sub_100DAE60((int)v4);
          if ( sub_104246F0(v4 + 145, &v46, v34, 0) < 200.0 )
          {
            v7 = (float *)(*(int (__thiscall **)(int *, float *))(*v4 + 516))(v4, v35);
            v8 = v7[1] - v47;
            v9 = v8 * v8;
            v10 = *v7 - *(float *)&v46;
            v11 = v9;
            v12 = v7[2] - v48;
            v27 = v10 * v10 + v11 + v12 * v12;
            if ( off_10689708(v27) > 2500.0 )
            {
              sub_10219BB0(v33);
              v33[0] = &CSingleUserRecipientFilter::`vftable';
              sub_10219D00((int)v33, v4);
              sub_100F8510((float *)&v28);
              v28 = 6;
              v13 = *(_DWORD *)(dword_10698344 + 48) == 0;
              v29 = "NPC_CombineBall_Episodic.WhizFlyby";
              if ( v13 )
                v29 = "NPC_CombineBall.WhizFlyby";
              v14 = v45[6];
              v30 = 1.0;
              v31 = 75;
              v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v14);
              sub_1023BE40(v33, v15, (int)&v28);
              sub_102375F0(v32);
              std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v33);
            }
          }
        }
      }
      v16 = dword_106B31C8;
      ++v3;
    }
    while ( v3 <= *(_DWORD *)(dword_106B31C8 + 20) );
    goto LABEL_29;
  }
  v17 = sub_10261B20();
  v18 = v17;
  if ( !v17 )
    goto LABEL_28;
  if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
    sub_100DAE60(v17);
  v36 = *(float *)(v18 + 580) - *(float *)&v46;
  v37 = *(float *)(v18 + 584) - v47;
  v38 = *(float *)(v18 + 588) - v48;
  off_10689714();
  if ( v38 * v44 + v36 * v42 + v37 * v43 <= 0.5 )
    goto LABEL_28;
  v19 = *(_DWORD *)(v18 + 252) >> 11;
  v20 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 28);
  v35[0] = v42 * v20 + *(float *)&v46;
  v35[1] = v43 * v20 + v47;
  v35[2] = v20 * v44 + v48;
  if ( (v19 & 1) != 0 )
    sub_100DAE60(v18);
  if ( sub_104246F0(v18 + 580, &v46, v35, 0) >= 200.0 )
  {
LABEL_28:
    v16 = dword_106B31C8;
LABEL_29:
    v25 = *(float *)(v16 + 28) + *(float *)(v16 + 28) + *(float *)(v16 + 12);
    return sub_100EC3F0(v45, (int)sub_103D3C70, v25, off_1067E554);
  }
  sub_100FB740(v33, (int)&v46, 0.80000001);
  sub_100F8510((float *)&v28);
  v28 = 6;
  v13 = *(_DWORD *)(dword_10698344 + 48) == 0;
  v29 = "NPC_CombineBall_Episodic.WhizFlyby";
  if ( v13 )
    v29 = "NPC_CombineBall.WhizFlyby";
  v21 = v45;
  v22 = v45[6];
  v30 = 1.0;
  v31 = 75;
  v23 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v22);
  sub_1023BE40(v33, v23, (int)&v28);
  v24 = *(float *)(dword_106B31C8 + 12) + 0.5;
  sub_100EC3F0(v21, (int)sub_103D3C70, v24, off_1067E554);
  sub_102375F0(v32);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v33);
}
