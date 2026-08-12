char __userpurge sub_1005ECD0@<al>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // eax
  int v5; // ebx
  _BYTE *v6; // edi
  int v7; // eax
  int *v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // ecx
  float v23; // [esp+30h] [ebp-78h]
  float v25[3]; // [esp+40h] [ebp-68h] BYREF
  int v26; // [esp+4Ch] [ebp-5Ch]
  int v27; // [esp+50h] [ebp-58h]
  _BYTE v28[24]; // [esp+6Ch] [ebp-3Ch] BYREF
  _DWORD v29[8]; // [esp+84h] [ebp-24h] BYREF
  char *Source; // [esp+A4h] [ebp-4h]
  int v31; // [esp+B0h] [ebp+8h]
  float v32; // [esp+B0h] [ebp+8h]

  sub_1002B830(a1, a3);
  if ( !a3 )
    sub_1005EBE0((void *)(a1 - 8));
  LOBYTE(v4) = *(_BYTE *)(a1 + 1953);
  if ( (_BYTE)v4 != *(_BYTE *)(a1 + 1952) || *(_BYTE *)(a1 + 2752) )
  {
    v4 = sub_100422D0();
    v5 = v4;
    if ( *(_BYTE *)(a1 + 1952) && v4 )
    {
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C97C + 200))(dword_1047C97C, a2)
        || a1 == -2220
        || !*(_BYTE *)(a1 + 2220) )
      {
        Source = (char *)(a1 + 1960);
        v6 = (_BYTE *)(a1 + 1960);
      }
      else
      {
        v6 = (_BYTE *)(a1 + 2220);
        Source = (char *)(a1 + 2220);
      }
      if ( v6 && *v6 )
      {
        sub_10013E00(v25);
        LODWORD(v25[0]) = 6;
        LODWORD(v25[1]) = v6;
        v26 = 140;
        v27 = 128;
        if ( sub_1006BE10(a1 + 2748) )
        {
          v31 = sub_1006BE10(a1 + 2748);
        }
        else if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 108))(dword_10413168) )
        {
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 108))(dword_10413168);
          v31 = sub_1007A6A0(v7);
          v26 = 0;
        }
        else
        {
          v31 = v5;
        }
        sub_1015B880(v29);
        v29[0] = &CSingleUserRecipientFilter::`vftable';
        sub_1015B9D0(v5);
        v8 = (int *)sub_101218C0();
        v9 = *v8;
        v10 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)(v31 + 8) + 36))(v31 + 8, v25);
        v11 = (*(int (__thiscall **)(int *, _DWORD *, int))(v9 + 24))(v8, v29, v10);
        *(_DWORD *)(a1 + 2744) = v11;
        if ( v11 )
        {
          v12 = sub_101218C0();
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v12 + 80))(v12, *(_DWORD *)(a1 + 2744), -1.0);
          v13 = sub_101218C0();
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 8))(
            v13,
            *(_DWORD *)(a1 + 2744),
            1.0,
            100.0,
            *(float *)(a1 + 1956));
        }
        v14 = sub_101218C0();
        v15 = *(_DWORD *)dword_10413194;
        v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 76))(v14, *(_DWORD *)(a1 + 2744));
        v32 = ((double (__thiscall *)(int, int))*(_DWORD *)(v15 + 12))(dword_10413194, v16);
        v17 = sub_100B4090("CHudCloseCaption");
        if ( v17 && (*(_DWORD *)(dword_1043079C + 48) || !*(_DWORD *)(dword_10430904 + 48)) )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 24))(v17);
          sub_100C6000(Source, v32, 0);
          sub_100BFED0(v17);
        }
        v18 = sub_100B4090("CHudCommentary");
        v23 = *(float *)(a1 + 1956) + v32;
        sub_1005E300(
          v18,
          v17,
          a1,
          a1 - 8,
          a1 + 2480,
          *(_DWORD *)(a1 + 2736),
          *(_DWORD *)(a1 + 2740),
          *(float *)(a1 + 1956),
          v23);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v29);
        LOBYTE(v4) = sub_1011A810(v28);
        *(_BYTE *)(a1 + 2752) = 0;
      }
      else
      {
        LOBYTE(v4) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 24))(
                       dword_1041315C,
                       "commentary_finishnode\n");
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 1953) )
      {
        if ( *(_DWORD *)(a1 + 2744) )
        {
          v19 = sub_101218C0();
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 40))(v19, *(_DWORD *)(a1 + 2744));
          *(_DWORD *)(a1 + 2744) = 0;
        }
        v4 = sub_100B4090("CHudCommentary");
        v20 = *(_DWORD *)(v4 + 252);
        if ( v20 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v4 + 252) & 0xFFF) + 2) != v20 >> 12 )
          v21 = 0;
        else
          v21 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v4 + 252) & 0xFFF) + 1);
        if ( a1 - 8 == v21 )
          *(_DWORD *)(v4 + 252) = -1;
      }
      *(_BYTE *)(a1 + 2752) = 0;
    }
  }
  return v4;
}
