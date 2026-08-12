int __userpurge sub_1023B400@<eax>(int a1@<esi>, _BYTE *a2, int a3, char a4, char *Source, int a6, float a7, char a8)
{
  int result; // eax
  double v9; // st7
  int v10; // eax
  int i; // edi
  int v12; // eax
  int v13; // eax
  float *v14; // esi
  unsigned __int8 v15; // bl
  int v16; // eax
  int v17; // eax
  int v18; // eax
  const char *v19; // eax
  int v20; // eax
  int v21; // eax
  char Str[256]; // [esp+0h] [ebp-12Ch] BYREF
  _DWORD v24[8]; // [esp+100h] [ebp-2Ch] BYREF
  float v25[3]; // [esp+120h] [ebp-Ch] BYREF

  result = *(_DWORD *)(dword_106B31C8 + 20);
  if ( result <= 1 && (result != 1 || *(_DWORD *)(*(_DWORD *)(dword_106C4E90 + 28) + 48)) )
  {
    v9 = 0.0;
    if ( a7 < 0.0 )
    {
      v10 = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)dword_106B3204 + 60))(dword_106B3204, Source, 0);
      if ( v10 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E8 + 12))(dword_106B31E8, v10);
      else
        v9 = 2.0;
      a7 = v9;
    }
    sub_104299C0(Str, Source, 0x100u);
    _strlwr(Str);
    if ( strstr(Str, "\\") )
      sub_1023A970(Str);
    sub_10219BB0(v24);
    sub_10219C30((int)v24, a2);
    sub_100D76A0((int)v24);
    if ( sub_1042A300(v24) > 0 )
    {
      for ( i = sub_1042A300(v24) - 1; i >= 0; --i )
      {
        v12 = sub_10219B80(v24, i);
        v13 = sub_1025FB50(v12);
        v14 = (float *)v13;
        if ( v13 )
        {
          if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
            sub_100DAE60(v13);
          v25[0] = v14[145];
          v25[1] = v14[146];
          v25[2] = v14[147];
          if ( sub_10224620((int)Str, v25, a6) )
            sub_10219DB0((int)v14);
        }
      }
    }
    if ( sub_1042A300(v24) > 0 )
    {
      v15 = a8 != 0;
      if ( a4 )
        v15 |= 2u;
      v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, a3);
      if ( v16 || (v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0 )
      {
        v17 = *(_DWORD *)(v16 + 12);
        if ( v17 )
        {
          v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 20))(v17);
          if ( v18 )
          {
            v19 = *(const char **)(*(int (__thiscall **)(int, char *, int))(*(_DWORD *)v18 + 28))(v18, &a8, a1);
            if ( !v19 )
              v19 = String;
            v20 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B3204 + 136))(dword_106B3204, v19);
            if ( v20 == 1 )
            {
              v15 |= 4u;
            }
            else if ( v20 == 2 )
            {
              v15 |= 8u;
            }
          }
        }
      }
      sub_10154B40((int)v24, "CloseCaption");
      sub_10154D00((int)Str);
      v21 = (int)(a7 * 10.0);
      if ( v21 > 255 )
        v21 = 255;
      sub_10154C10(v21);
      sub_10154BB0(v15);
      sub_10154B90();
    }
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v24);
  }
  return result;
}
