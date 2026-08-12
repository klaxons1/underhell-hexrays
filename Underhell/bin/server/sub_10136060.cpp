int __thiscall sub_10136060(int this)
{
  char *v2; // eax
  _DWORD *v3; // ebx
  char *v4; // eax
  int v5; // eax
  int v6; // edi
  float *v7; // ecx
  double v8; // st7
  bool v9; // al
  int (__stdcall *v10)(int); // eax
  float *v11; // eax
  int v12; // ebx
  int v13; // edx
  int v14; // eax
  double v15; // st7
  int v16; // ebx
  int v17; // ecx
  int v18; // edx
  float *v19; // eax
  int v20; // ebx
  int v21; // edx
  int v22; // eax
  double v23; // st7
  int v24; // ebx
  int v25; // ecx
  int v26; // edx
  int (__thiscall *v27)(int, int); // eax
  int (__thiscall *v28)(int, int); // eax
  float v30; // [esp+38h] [ebp-B0h]
  float v31; // [esp+3Ch] [ebp-ACh]
  int v32; // [esp+4Ch] [ebp-9Ch]
  int v33; // [esp+50h] [ebp-98h]
  int v34; // [esp+50h] [ebp-98h]
  int v35; // [esp+50h] [ebp-98h]
  int v36; // [esp+50h] [ebp-98h]
  int v37[21]; // [esp+60h] [ebp-88h] BYREF
  _DWORD v38[8]; // [esp+B4h] [ebp-34h] BYREF
  _DWORD *v39; // [esp+D4h] [ebp-14h]
  _DWORD *v40; // [esp+D8h] [ebp-10h]
  _DWORD *v41; // [esp+DCh] [ebp-Ch]
  int v42; // [esp+E0h] [ebp-8h]
  float *v43; // [esp+E4h] [ebp-4h]
  int savedregs; // [esp+E8h] [ebp+0h] BYREF

  sub_10219BB0(v38);
  v38[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200(v38);
  v2 = *(char **)(this + 976);
  if ( !v2 )
    v2 = (char *)String;
  v3 = (_DWORD *)sub_100F9520(v2);
  v4 = *(char **)(this + 980);
  v40 = v3;
  if ( !v4 )
    v4 = (char *)String;
  v5 = sub_100F9520(v4);
  v6 = v5;
  if ( v3 && v5 )
  {
    v7 = *(float **)(this + 996);
    v43 = v7;
    v8 = 100.0;
    if ( (double)(int)v7 <= 100.0 )
    {
      v43 = (int)v7 < 0 ? 0 : v7;
      v8 = (double)(int)v43;
    }
    *(_DWORD *)(this + 996) = (int)v8;
    v41 = (_DWORD *)sub_100F98C0((int)v3);
    v9 = sub_100F98C0(v6);
    if ( v41 || v9 )
    {
      if ( (*(_BYTE *)(this + 248) & 8) != 0 )
        return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v38);
      if ( v9 )
      {
        v39 = sub_10019640((_DWORD *)v6);
        v42 = 0;
      }
      else
      {
        v35 = *(_DWORD *)(v6 + 24);
        v27 = *(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72);
        v39 = 0;
        v42 = v27(dword_106B31D0, v35);
      }
      if ( v41 )
      {
        v41 = sub_10019640(v3);
        v43 = 0;
      }
      else
      {
        v28 = *(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72);
        v36 = v3[6];
        v41 = 0;
        v43 = (float *)v28(dword_106B31D0, v36);
      }
      ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD, float *, _DWORD *, int, _DWORD *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*off_1065C5EC)[2])(
        off_1065C5EC,
        v38,
        0.0,
        v43,
        v41,
        v42,
        v39,
        *(_DWORD *)(this + 972),
        0,
        *(_DWORD *)(this + 1008),
        (int)*(float *)(this + 800),
        *(float *)(this + 984),
        *(float *)(this + 988),
        *(float *)(this + 988),
        0,
        *(float *)(this + 992),
        *(unsigned __int8 *)(this + 116),
        *(unsigned __int8 *)(this + 117),
        *(unsigned __int8 *)(this + 118),
        *(unsigned __int8 *)(this + 119),
        *(_DWORD *)(this + 996));
    }
    else
    {
      v33 = *(_DWORD *)(v6 + 24);
      v10 = *(int (__stdcall **)(int))(*(_DWORD *)dword_106B31D0 + 72);
      if ( (*(_BYTE *)(this + 248) & 8) != 0 )
      {
        v11 = (float *)v10(v33);
        v12 = v3[6];
        v13 = *(_DWORD *)dword_106B31D0;
        v43 = v11;
        v14 = (*(int (__thiscall **)(int, int))(v13 + 72))(dword_106B31D0, v12);
        v15 = *(float *)(this + 992);
        v16 = (int)*off_1065C5EC;
        v17 = *(unsigned __int8 *)(this + 118);
        v32 = *(_DWORD *)(this + 996);
        v18 = *(unsigned __int8 *)(this + 117);
        v42 = v14;
        v30 = v15;
        (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, int, float *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, _DWORD))(v16 + 28))(
          off_1065C5EC,
          v38,
          0.0,
          v14,
          v43,
          *(_DWORD *)(this + 972),
          0,
          *(_DWORD *)(this + 1008),
          (int)*(float *)(this + 800),
          *(float *)(this + 984),
          *(float *)(this + 988),
          0,
          LODWORD(v30),
          *(unsigned __int8 *)(this + 116),
          v18,
          v17,
          *(unsigned __int8 *)(this + 119),
          v32,
          0);
      }
      else
      {
        v19 = (float *)v10(v33);
        v20 = v3[6];
        v21 = *(_DWORD *)dword_106B31D0;
        v43 = v19;
        v22 = (*(int (__thiscall **)(int, int))(v21 + 72))(dword_106B31D0, v20);
        v23 = *(float *)(this + 992);
        v24 = (int)*off_1065C5EC;
        v25 = *(unsigned __int8 *)(this + 118);
        v34 = *(_DWORD *)(this + 996);
        v26 = *(unsigned __int8 *)(this + 117);
        v42 = v22;
        v31 = v23;
        (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, int, float *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int))(v24 + 12))(
          off_1065C5EC,
          v38,
          0.0,
          v22,
          v43,
          *(_DWORD *)(this + 972),
          0,
          *(_DWORD *)(this + 1008),
          (int)*(float *)(this + 800),
          *(float *)(this + 984),
          *(float *)(this + 988),
          *(float *)(this + 988),
          0,
          LODWORD(v31),
          *(unsigned __int8 *)(this + 116),
          v26,
          v25,
          *(unsigned __int8 *)(this + 119),
          v34);
      }
    }
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    if ( (v40[63] & 0x800) != 0 )
      sub_100DAE60((int)v40);
    v43 = (float *)(v40 + 145);
    sub_100F9CD0((_DWORD *)this, (int)(v40 + 145), v6 + 580);
    if ( *(float *)(this + 812) > 0.0 )
    {
      if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
        sub_100DAE60(v6);
      if ( (v40[63] & 0x800) != 0 )
        sub_100DAE60((int)v40);
      sub_1002A5F0((int)&savedregs, this, v43, (float *)(v6 + 580), 33570827, 0, 0, (int)v37);
      *(float *)(this + 808) = *(float *)(dword_106B31C8 + 12) - 1.0;
      sub_100F9D30((float *)this, (int)v37);
    }
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v38);
}
