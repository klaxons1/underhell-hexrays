void __thiscall sub_10026A30(_DWORD *this, int a2, int a3, int a4, char *a5)
{
  int v5; // edi
  int v7; // edi
  int v8; // ebx
  int v9; // edi
  int v10; // ebx
  int v11; // ecx
  int v12; // edi
  char *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // [esp+0h] [ebp-1C8h]
  int v23; // [esp+0h] [ebp-1C8h]
  int v24; // [esp+Ch] [ebp-1BCh]
  char Destination[128]; // [esp+20h] [ebp-1A8h] BYREF
  char String[128]; // [esp+A0h] [ebp-128h] BYREF
  int v27[8]; // [esp+120h] [ebp-A8h] BYREF
  _BYTE v28[12]; // [esp+140h] [ebp-88h] BYREF
  float v29; // [esp+14Ch] [ebp-7Ch] BYREF
  float v30; // [esp+150h] [ebp-78h]
  float v31; // [esp+154h] [ebp-74h]
  _BYTE v32[12]; // [esp+164h] [ebp-64h] BYREF
  float v33; // [esp+170h] [ebp-58h]
  float v34; // [esp+174h] [ebp-54h]
  float v35; // [esp+178h] [ebp-50h]
  int v36; // [esp+17Ch] [ebp-4Ch]
  int v37; // [esp+180h] [ebp-48h]
  int v38; // [esp+190h] [ebp-38h]
  int v39; // [esp+1ACh] [ebp-1Ch] BYREF
  float v40; // [esp+1B0h] [ebp-18h] BYREF
  float v41; // [esp+1B4h] [ebp-14h]
  float v42; // [esp+1B8h] [ebp-10h]
  float v43; // [esp+1BCh] [ebp-Ch] BYREF
  float v44; // [esp+1C0h] [ebp-8h]
  float v45; // [esp+1C4h] [ebp-4h]

  v5 = a4;
  if ( a4 > 5001 )
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
          goto LABEL_30;
        default:
          return;
      }
    }
    else
    {
      if ( a4 == 9001 )
      {
LABEL_30:
        switch ( a4 )
        {
          case 9001:
            v21 = 0;
            goto LABEL_41;
          case 9011:
            v21 = 1;
            goto LABEL_41;
          case 9021:
            v21 = 2;
            goto LABEL_41;
          case 9031:
            v21 = 3;
            goto LABEL_41;
          case 9041:
            v21 = 4;
            goto LABEL_41;
          case 9051:
            v21 = 5;
            goto LABEL_41;
          case 9061:
            v21 = 6;
            goto LABEL_41;
          case 9071:
            v21 = 7;
            goto LABEL_41;
          case 9081:
            v21 = 8;
            goto LABEL_41;
          case 9091:
            v21 = 9;
LABEL_41:
            if ( this[480] <= v21 )
              return;
            v12 = v21 + 1;
            (*(void (__thiscall **)(_DWORD *, int, float *, float *))(this[1] + 148))(this + 1, v21 + 1, &v40, &v43);
            sub_1000E650(&v29);
            v29 = v40;
            v30 = v41;
            v31 = v42;
            v33 = v43;
            v34 = v44;
            v35 = v45;
            sub_101EDFB0(&v43, v32);
            v11 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
            v13 = a5;
            break;
          default:
            return;
        }
        goto LABEL_43;
      }
      switch ( a4 )
      {
        case 5002:
          (*(void (__thiscall **)(_DWORD *, int, float *, float *))(this[1] + 148))(this + 1, 1, &v40, &v43);
          sub_101EDFB0(&v43, v28);
          v19 = (int)*off_103DFD80;
          v20 = atoi(a5);
          (*(void (__thiscall **)(int (__stdcall ***)(char), float *, int, int, _BYTE *))(v19 + 12))(
            off_103DFD80,
            &v40,
            v20,
            1,
            v28);
          break;
        case 5003:
        case 5011:
        case 5013:
        case 5021:
        case 5023:
        case 5031:
        case 5033:
          goto LABEL_10;
        case 5004:
          sub_1015BB00(v27);
          if ( (int)this[480] <= 0 )
          {
            v23 = sub_10035AA0(this);
            sub_101213E0((int)v27, v23, (int)a5, 0, 0.0, 0);
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, int, float *, float *))(this[1] + 148))(this + 1, 1, &v40, &v43);
            v22 = sub_10035AA0(this);
            sub_101213E0((int)v27, v22, (int)a5, (int)&v40, 0.0, 0);
          }
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v27);
          break;
        default:
          return;
      }
    }
  }
  else if ( a4 == 5001 )
  {
LABEL_10:
    v14 = sub_100378C0(this);
    if ( !v14
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 504))(v14)
      || !(*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8) )
    {
      LOBYTE(a4) = 1;
      switch ( v5 )
      {
        case 5001:
          v15 = 0;
          goto LABEL_22;
        case 5003:
          v15 = 0;
          LOBYTE(a4) = 0;
          goto LABEL_22;
        case 5011:
          v15 = 1;
          goto LABEL_22;
        case 5013:
          v15 = 1;
          LOBYTE(a4) = 0;
          goto LABEL_22;
        case 5021:
          v15 = 2;
          goto LABEL_22;
        case 5023:
          v15 = 2;
          LOBYTE(a4) = 0;
          goto LABEL_22;
        case 5031:
          goto LABEL_21;
        case 5033:
          LOBYTE(a4) = 0;
LABEL_21:
          v15 = 3;
LABEL_22:
          if ( this[480] > v15 )
          {
            (*(void (__thiscall **)(_DWORD *, int, float *, float *))(this[1] + 148))(this + 1, v15 + 1, &v40, &v43);
            v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 108))(dword_10413168);
            sub_1000E5F0(off_103DCD78, &v39, v16);
            v24 = v39;
            v17 = (int)*off_103E9C2C;
            v18 = atoi(a5);
            (*(void (__thiscall **)(void ***, float *, float *, int, int, int))(v17 + 36))(
              off_103E9C2C,
              &v40,
              &v43,
              v18,
              v24,
              a4);
          }
          break;
        default:
          return;
      }
    }
  }
  else if ( a4 == 20 )
  {
    v7 = sub_10076840(String, a5, 32);
    sub_102282F0(Destination, String, 0x80u);
    v8 = sub_10076840(String, v7, 32);
    v9 = atoi(String);
    sub_10076840(String, v8, 32);
    v10 = atoi(String);
    if ( v9 != -1 && this[480] >= v9 )
    {
      (*(void (__thiscall **)(_DWORD *, int, float *, float *))(this[1] + 148))(this + 1, v9, &v40, &v43);
      sub_1000E650(&v29);
      v29 = v40;
      v30 = v41;
      v31 = v42;
      v33 = v43;
      v34 = v44;
      v35 = v45;
      sub_101EDFB0(&v43, v32);
      v11 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
      v12 = v9 + 1;
      v36 = v10;
      v13 = Destination;
LABEL_43:
      v37 = v11;
      v38 = v12;
      sub_10168E60(v13, &v29);
    }
  }
}
