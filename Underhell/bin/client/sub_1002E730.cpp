void __thiscall sub_1002E730(_DWORD *this, int a2, int a3, int a4, char *String1)
{
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // edi
  int v15; // eax
  float *v16; // edi
  float *v17; // eax
  double v18; // st4
  double v19; // st6
  double v20; // st4
  double v21; // st5
  double v22; // st6
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // edi
  const char *v27; // edi
  int v28; // edi
  const char *v29; // edi
  int v30; // edi
  int v31; // eax
  int v32; // edi
  float *v33; // ebx
  float *v34; // eax
  double v35; // st4
  double v36; // st6
  double v37; // st4
  double v38; // st5
  double v39; // st6
  int v40; // edi
  int v41; // eax
  int v42; // eax
  int v43; // [esp+0h] [ebp-270h]
  int v44; // [esp+0h] [ebp-270h]
  int v45; // [esp+8h] [ebp-268h]
  char Destination[256]; // [esp+20h] [ebp-250h] BYREF
  char String[256]; // [esp+120h] [ebp-150h] BYREF
  _BYTE v48[12]; // [esp+220h] [ebp-50h] BYREF
  int v49[8]; // [esp+22Ch] [ebp-44h] BYREF
  _BYTE v50[12]; // [esp+24Ch] [ebp-24h] BYREF
  _BYTE v51[12]; // [esp+258h] [ebp-18h] BYREF
  float v52; // [esp+264h] [ebp-Ch] BYREF
  float v53; // [esp+268h] [ebp-8h]

  if ( a4 <= 32 )
  {
    if ( a4 == 32 )
    {
      v7 = sub_10076840(String, String1, 32);
      sub_102282F0(Destination, String, 0x100u);
      v8 = sub_10076840(String, v7, 32);
      v9 = sub_100E91B0(String);
      if ( v9 == -1 )
      {
        Warning(
          "Invalid attach type specified for particle effect anim event. Trying to spawn effect '%s' with attach type of '%s'\n",
          Destination,
          String);
      }
      else
      {
        sub_10076840(String, v8, 32);
        v10 = atoi(String);
        if ( String[0] == 48
          || v10
          || (v10 = (*(int (__thiscall **)(_DWORD *, char *))(this[1] + 140))(this + 1, String), v10 != -1) )
        {
          sub_100EA350(Destination, v9, v10, SLODWORD(flt_10459240), SLODWORD(flt_10459244), SLODWORD(flt_10459248));
        }
        else
        {
          Warning(
            "Failed to find attachment point specified for particle effect anim event. Trying to spawn effect '%s' on att"
            "achment named '%s'\n",
            Destination,
            String);
        }
      }
    }
    else
    {
      switch ( a4 )
      {
        case 15:
          sub_1015BB00(v49);
          if ( (int)this[480] <= 0 )
          {
            v45 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
            v44 = sub_10035AA0(this);
            sub_101213E0((int)v49, v44, (int)String1, v45, 0.0, 0);
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, int, _BYTE *, _BYTE *))(this[1] + 148))(this + 1, 1, v50, v48);
            v43 = sub_10035AA0(this);
            sub_101213E0((int)v49, v43, (int)String1, (int)v50, 0.0, 0);
          }
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v49);
          break;
        case 17:
          v6 = sub_10035AA0(this);
          sub_10120990(v6, String1);
          break;
        case 20:
          goto LABEL_35;
        case 21:
          (*(void (__thiscall **)(_DWORD *, char *, int))(*this + 648))(this, String1, 1);
          break;
        case 22:
          (*(void (__thiscall **)(_DWORD *, char *, _DWORD))(*this + 648))(this, String1, 0);
          break;
        default:
          return;
      }
    }
    return;
  }
  if ( a4 > 6004 )
  {
    if ( a4 > 9001 )
    {
      switch ( a4 )
      {
        case 9011:
        case 9021:
        case 9031:
        case 9041:
        case 9051:
        case 9061:
        case 9071:
        case 9081:
        case 9091:
          goto LABEL_35;
        default:
          return;
      }
    }
    else
    {
      if ( a4 == 9001 )
        goto LABEL_35;
      switch ( a4 )
      {
        case 6005:
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 504))(this)
            || (v28 = sub_10008FC0((int)this), sub_100422D0() != v28)
            || (*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8) )
          {
            LOBYTE(v29) = (_BYTE)String1;
            if ( !String1 || !*String1 )
              v29 = "NPC_CombineS";
            sub_1003BCF0(&v52);
            if ( v53 * v53 + v52 * v52 <= 22500.0 )
              sub_10228370(Destination, 0x100u, "%s.FootstepRight", (char)v29);
            else
              sub_10228370(Destination, 0x100u, "%s.RunFootstepRight", (char)v29);
            goto LABEL_57;
          }
          break;
        case 6006:
          sub_1002E5C0(this, 1, 0.5);
          break;
        case 6007:
          sub_1002E5C0(this, 0, 0.5);
          break;
        case 6008:
          sub_1002E5C0(this, 1, 1.0);
          break;
        case 6009:
          sub_1002E5C0(this, 0, 1.0);
          break;
        case 6011:
          if ( (int)this[480] > 0 )
          {
            v30 = sub_10076840(String, String1, 32);
            sub_102282F0(Destination, String, 0x100u);
            sub_10076840(String, v30, 32);
            v31 = atoi(String);
            v32 = v31;
            if ( String[0] == 48
              || v31
              || (v32 = (*(int (__thiscall **)(_DWORD *, char *))(this[1] + 140))(this + 1, String), v32 != -1) )
            {
              v33 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
              v34 = (float *)sub_101356D0();
              v35 = v34[1] - v33[1];
              v36 = v35 * v35;
              v37 = *v34 - *v33;
              v38 = v36;
              v39 = v34[2] - v33[2];
              if ( v37 * v37 + v38 + v39 * v39 < 65536.0
                && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, float *, _BYTE *))(this[1] + 148))(
                     this + 1,
                     v32,
                     &v52,
                     v51) )
              {
                v40 = (int)*off_103E9C2C;
                v41 = atoi(String1);
                v42 = (*(int (__thiscall **)(_DWORD *, int))(*this + 40))(this, v41);
                (*(void (__thiscall **)(void ***, float *, _BYTE *, int))(v40 + 44))(off_103E9C2C, &v52, v51, v42);
              }
            }
            else
            {
              Warning("Failed to find attachment point specified Attachment number is '%i'\n", -1);
            }
          }
          break;
        default:
          return;
      }
    }
  }
  else if ( a4 == 6004 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 504))(this)
      || (v26 = sub_10008FC0((int)this), sub_100422D0() != v26)
      || (*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8) )
    {
      LOBYTE(v27) = (_BYTE)String1;
      if ( !String1 || !*String1 )
        v27 = "NPC_CombineS";
      sub_1003BCF0(&v52);
      if ( v53 * v53 + v52 * v52 <= 22500.0 )
        sub_10228370(Destination, 0x100u, "%s.FootstepLeft", (char)v27);
      else
        sub_10228370(Destination, 0x100u, "%s.RunFootstepLeft", (char)v27);
LABEL_57:
      sub_101212D0((int)Destination, 0.0, 0);
    }
  }
  else
  {
    if ( a4 <= 5013 )
    {
      if ( a4 != 5013 )
      {
        if ( a4 <= 36 )
        {
          switch ( a4 )
          {
            case '$':
              v13 = sub_10076840(Destination, String1, 32);
              sub_102282F0(String, Destination, 0x100u);
              sub_10076840(Destination, v13, 32);
              v14 = atoi(Destination);
              v15 = sub_10029CA0(this, String);
              if ( v15 >= 0 )
                sub_10029C40(this, v15, v14);
              break;
            case '"':
              v12 = sub_10029CA0(this, String1);
              if ( v12 >= 0 )
                sub_10029C40(this, v12, 1);
              break;
            case '#':
              v11 = sub_10029CA0(this, String1);
              if ( v11 >= 0 )
                sub_10029C40(this, v11, 0);
              break;
          }
          return;
        }
        if ( a4 < 5001 || a4 > 5004 && a4 != 5011 )
          return;
      }
LABEL_35:
      (*(void (__thiscall **)(_DWORD *, int, int, int, char *))(*this + 644))(this, a2, a3, a4, String1);
      return;
    }
    if ( a4 <= 5031 )
    {
      if ( a4 != 5031 && a4 != 5021 && a4 != 5023 )
        return;
      goto LABEL_35;
    }
    if ( a4 == 5033 )
      goto LABEL_35;
    if ( a4 == 6001 && (int)this[480] > 0 )
    {
      v16 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
      v17 = (float *)sub_101356D0();
      v18 = v17[1] - v16[1];
      v19 = v18 * v18;
      v20 = *v17 - *v16;
      v21 = v19;
      v22 = v17[2] - v16[2];
      if ( v20 * v20 + v21 + v22 * v22 < 65536.0 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _BYTE *, float *))(this[1] + 148))(
               this + 1,
               2,
               v51,
               &v52) )
        {
          v23 = (int)*off_103E9C2C;
          v24 = atoi(String1);
          v25 = (*(int (__thiscall **)(_DWORD *, int))(*this + 40))(this, v24);
          (*(void (__thiscall **)(void ***, _BYTE *, float *, int))(v23 + 44))(off_103E9C2C, v51, &v52, v25);
        }
      }
    }
  }
}
