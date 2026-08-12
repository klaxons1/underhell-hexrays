int __thiscall sub_100306C0(_DWORD *this)
{
  _DWORD *v1; // edi
  int (__fastcall *v2)(_DWORD *); // edx
  int v3; // eax
  int result; // eax
  int v5; // ebx
  const char *v6; // eax
  const char *v7; // esi
  const char *v8; // eax
  const char *v9; // esi
  bool v10; // zf
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // ebx
  char *v14; // eax
  const char *v15; // esi
  const char *v16; // [esp+Ch] [ebp-74h]
  _BYTE v17[80]; // [esp+1Ch] [ebp-64h] BYREF
  int v18; // [esp+6Ch] [ebp-14h]
  const char *v19; // [esp+70h] [ebp-10h]
  int v20; // [esp+74h] [ebp-Ch]
  int v21; // [esp+78h] [ebp-8h]
  char v22; // [esp+7Eh] [ebp-2h]
  char v23; // [esp+7Fh] [ebp-1h]

  v1 = this;
  v2 = *(int (__fastcall **)(_DWORD *))(*this + 368);
  v20 = (int)this;
  v3 = v2(this);
  result = sub_100D7680(v3);
  v5 = result;
  v21 = result;
  if ( result )
  {
    if ( (v1[59] & 0x1000) != 0 && *(_DWORD *)(dword_1069076C + 48) )
    {
      v6 = *(const char **)(result + 92);
      v23 = 1;
      v19 = v6;
      if ( !v6 )
        v19 = String;
      v7 = (const char *)v1[23];
      if ( !v7 )
        v7 = String;
      v16 = (const char *)sub_100D6390(v5);
      v8 = (const char *)sub_100D6390(v1);
      Msg("%s(%s): Computing valid interactions with %s(%s)\n", v7, v8, v19, v16);
    }
    else
    {
      v23 = 0;
    }
    result = 0;
    v22 = 0;
    v18 = 0;
    if ( (int)v1[634] > 0 )
    {
      v19 = 0;
      while ( 1 )
      {
        v9 = &v19[v1[631]];
        v10 = *((_DWORD *)v9 + 2) == 1;
        *((_BYTE *)v9 + 156) = 0;
        if ( v10 )
          break;
LABEL_42:
        v19 += 164;
        result = v18 + 1;
        v18 = result;
        if ( result >= v1[634] )
          goto LABEL_43;
      }
      v11 = dword_10700AC8;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
      if ( !*(_DWORD *)(v5 + 1100) && sub_100D7240(v5) )
        sub_100BD750(v5);
      v12 = *(_DWORD **)(v5 + 1100);
      if ( v12 && *v12 )
        v13 = *(_DWORD *)(v5 + 1100);
      else
        v13 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
      if ( v13 )
      {
        sub_102487B0(v20, v20, (int)&flt_106F1CA8, (int)&flt_106F1CA8, 1.0, 2, 0, 0);
        if ( (*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)v21 + 244))(v21, v17) )
        {
          if ( ((v9[4] & 0x10) == 0
             || sub_100CF460(v20)
             && (!*((_DWORD *)v9 + 15) || *(_DWORD *)(sub_100CF460(v20) + 92) == *((_DWORD *)v9 + 15)))
            && ((v9[4] & 0x20) == 0
             || sub_100CF460(v21)
             && (!*((_DWORD *)v9 + 16) || *(_DWORD *)(sub_100CF460(v21) + 92) == *((_DWORD *)v9 + 16)))
            && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v21 + 264))(v21) )
          {
            if ( *((_DWORD *)v9 + 20) == -1 )
            {
              v14 = (char *)*((_DWORD *)v9 + 19);
              if ( !v14 )
                v14 = (char *)String;
              goto LABEL_36;
            }
            v14 = (char *)sub_10022870((int)v9, 1);
            if ( v14 )
            {
LABEL_36:
              if ( sub_100BDF40(v14) != -1 )
              {
                v10 = v23 == 0;
                *((_BYTE *)v9 + 156) = 1;
                v22 = 1;
                if ( !v10 )
                {
                  v15 = *(const char **)v9;
                  if ( !v15 )
                    v15 = String;
                  Msg("   Found: %s\n", v15);
                }
              }
            }
          }
        }
      }
      v1 = (_DWORD *)v20;
      v5 = v21;
      goto LABEL_42;
    }
LABEL_43:
    if ( v23 )
    {
      if ( !v22 )
        return Msg("   No valid interactions found.\n");
    }
  }
  return result;
}
