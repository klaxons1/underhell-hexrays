char *__cdecl sub_1010EDA0(int a1, char *Source, int a3)
{
  char *result; // eax
  const char *v4; // ebx
  const char *v5; // edi
  _DWORD *v6; // esi
  int v7; // ecx
  int v8; // eax
  const char *v9; // edi
  signed int v10; // ecx
  char v11; // dl
  int i; // ebx
  _DWORD *v13; // eax
  _DWORD *v14; // edi
  int v15; // eax
  const char *v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // esi
  int v20; // [esp-8h] [ebp-244h]
  char Buffer[256]; // [esp+Ch] [ebp-230h] BYREF
  char v22[256]; // [esp+10Ch] [ebp-130h] BYREF
  _DWORD v23[9]; // [esp+20Ch] [ebp-30h] BYREF
  char ArgList[4]; // [esp+230h] [ebp-Ch]
  const char *v25; // [esp+234h] [ebp-8h]
  int v26; // [esp+238h] [ebp-4h]
  char *Sourcea; // [esp+248h] [ebp+Ch]

  result = *(char **)Source;
  v4 = 0;
  v5 = String;
  if ( *(int *)Source > 0 )
    v5 = (const char *)*((_DWORD *)Source + 258);
  if ( *(_DWORD *)Source )
  {
    result = (char *)_stricmp(v5, "say");
    if ( result && (result = (char *)_stricmp(v5, "say_team")) != 0 )
    {
      result = (char *)(*(int *)Source < 2
                      ? sub_10429A00(Buffer, 0x100u, "%s", (char)v5)
                      : sub_10429A00(Buffer, 0x100u, "%s %s", (char)v5));
      Sourcea = Buffer;
    }
    else
    {
      if ( *(int *)Source < 2 )
        return result;
      result = (char *)*((_DWORD *)Source + 1);
      if ( result )
      {
        result = &Source[(_DWORD)result + 8];
        Sourcea = result;
      }
      else
      {
        Sourcea = (char *)String;
      }
    }
    v6 = 0;
    if ( a1 )
    {
      v7 = *(_DWORD *)(a1 + 12);
      if ( v7 )
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
      else
        v8 = 0;
      v6 = (_DWORD *)v8;
      result = (char *)sub_1010E410(v8, (int)Sourcea);
      Sourcea = result;
    }
    if ( Sourcea )
    {
      if ( a1 )
      {
        result = (char *)(*(int (__thiscall **)(_DWORD *))(*v6 + 1536))(v6);
        if ( !(_BYTE)result )
          return result;
        (*(void (__thiscall **)(_DWORD *, char *, int))(*v6 + 1544))(v6, Sourcea, 127);
      }
      v9 = 0;
      v25 = 0;
      v26 = 0;
      if ( dword_106B3CDC )
      {
        v25 = (const char *)(*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)dword_106B3CDC + 476))(
                              dword_106B3CDC,
                              a3,
                              v6);
        v9 = (const char *)(*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)dword_106B3CDC + 468))(
                             dword_106B3CDC,
                             a3,
                             v6);
        v26 = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)dword_106B3CDC + 472))(dword_106B3CDC, a3, v6);
        v4 = (const char *)v26;
      }
      if ( v6 )
        *(_DWORD *)ArgList = v6 + 1074;
      else
        *(_DWORD *)ArgList = "Console";
      if ( v9 && strlen(v9) )
      {
        if ( v4 && strlen(v4) )
          sub_10429A00(v22, 0x100u, "%s %s @ %s: ", (char)v9);
        else
          sub_10429A00(v22, 0x100u, "%s %s: ", (char)v9);
      }
      else
      {
        sub_10429A00(v22, 0x100u, "%s: ", ArgList[0]);
      }
      v10 = 254 - strlen(v22);
      if ( (int)strlen(Sourcea) > v10 )
        Sourcea[v10] = v11;
      sub_10429750((int)v22, Sourcea, 256, -1);
      sub_10429750((int)v22, "\n", 256, -1);
      for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
      {
        v13 = (_DWORD *)sub_1025FB50(i);
        v14 = v13;
        if ( v13 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v13 + 320))(v13) )
          {
            v15 = v14[6];
            if ( v15 )
            {
              if ( v15 != a1
                && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v14 + 324))(v14)
                && (!(_BYTE)a3
                 || (*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)dword_106B3CDC + 412))(
                      dword_106B3CDC,
                      v14,
                      v6) == 1) )
              {
                if ( !v6
                  || (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*v14 + 1532))(v14, v6)
                  && (!sub_10272250() || (v20 = sub_1001F3C0(v6), sub_10272250(), !(unsigned __int8)sub_10272650(v20, i))) )
                {
                  sub_100D13A0(v23, (int)v14);
                  sub_10219A50(v23);
                  if ( v25 )
                    sub_10260280(v23, v6, 1, v25, *(_DWORD *)ArgList, Sourcea, v26, 0);
                  else
                    sub_10260220(v23, v22, v6, 1);
                  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v23);
                }
              }
            }
          }
        }
      }
      if ( v6 )
      {
        sub_10219BB0(v23);
        v23[0] = &CSingleUserRecipientFilter::`vftable';
        sub_10219D00(v6);
        sub_10219A50(v23);
        if ( v25 )
          sub_10260280(v23, v6, 1, v25, *(_DWORD *)ArgList, Sourcea, v26, 0);
        else
          sub_10260220(v23, v22, v6, 1);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v23);
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0) )
        Msg("%s", v22);
      v16 = "Console";
      v17 = 0;
      v25 = "Console";
      if ( v6 )
      {
        v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(dword_106B31D0, v6[6]);
        sub_101E77C0(v6);
        v26 = (int)(v6 + 1074);
        v18 = sub_100D87F0(v6);
        if ( v18 )
          v25 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 728))(v18);
        LOBYTE(v16) = v26;
      }
      if ( (_BYTE)a3 )
        sub_1025F5A0("\"%s<%i><%s><%s>\" say_team \"%s\"\n", (char)v16);
      else
        sub_1025F5A0("\"%s<%i><%s><%s>\" say \"%s\"\n", (char)v16);
      result = (char *)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
                         dword_106B31F8,
                         "player_say",
                         0);
      v19 = (int)result;
      if ( result )
      {
        (*(void (__thiscall **)(char *, const char *, int))(*(_DWORD *)result + 40))(result, "userid", v17);
        (*(void (__thiscall **)(int, const char *, char *))(*(_DWORD *)v19 + 48))(v19, "text", Sourcea);
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v19 + 40))(v19, "priority", 1);
        return (char *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(
                         dword_106B31F8,
                         v19,
                         0);
      }
    }
  }
  return result;
}
