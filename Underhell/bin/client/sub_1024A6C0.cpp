int __thiscall sub_1024A6C0(int this)
{
  void (__thiscall **v2)(int, int); // edi
  int v3; // eax
  int result; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // ecx
  bool v8; // cc
  void (__fastcall ***v9)(_DWORD); // edi
  bool v10; // zf
  int v11; // ebp
  __int16 v12; // ax
  int v13; // eax
  int v14; // eax
  int (__thiscall ***v15)(_DWORD); // eax
  int (__thiscall **v16)(_DWORD); // edx
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  void (__thiscall **v20)(_DWORD, _DWORD); // ebx
  _DWORD *v21; // eax
  void (__fastcall ***v22)(_DWORD); // ecx
  void (__fastcall **v23)(_DWORD); // edx
  int v24; // [esp+44h] [ebp-48h]
  int v25; // [esp+48h] [ebp-44h] BYREF
  int v26; // [esp+4Ch] [ebp-40h] BYREF
  __int16 *v27; // [esp+50h] [ebp-3Ch]
  int v28; // [esp+54h] [ebp-38h]
  int v29; // [esp+58h] [ebp-34h]
  int v30; // [esp+5Ch] [ebp-30h] BYREF
  int v31; // [esp+60h] [ebp-2Ch] BYREF
  int v32; // [esp+64h] [ebp-28h] BYREF
  _DWORD v33[2]; // [esp+68h] [ebp-24h] BYREF
  int v34; // [esp+70h] [ebp-1Ch] BYREF
  _BYTE v35[4]; // [esp+74h] [ebp-18h] BYREF
  _BYTE v36[4]; // [esp+78h] [ebp-14h] BYREF
  _BYTE v37[4]; // [esp+7Ch] [ebp-10h] BYREF
  _BYTE v38[4]; // [esp+80h] [ebp-Ch] BYREF
  _BYTE v39[4]; // [esp+84h] [ebp-8h] BYREF
  _BYTE v40[4]; // [esp+88h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int *, _BYTE *, int *))(*(_DWORD *)this + 884))(this, &v30, &v25, v35, &v31);
  if ( *(_DWORD *)(this + 272) )
  {
    v2 = (void (__thiscall **)(int, int))(*(_DWORD *)this + 828);
    v3 = sub_10236790((void *)this, *(char **)(this + 272));
    (*v2)(this, v3);
    sub_10034930(*(_DWORD *)(this + 272));
    *(_DWORD *)(this + 272) = 0;
  }
  result = sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)v37, (int)v36);
  v5 = v25 + *(_DWORD *)(this + 244);
  v6 = v30;
  v7 = 0;
  v8 = *(_DWORD *)(this + 232) <= 0;
  v28 = v5;
  v29 = 0;
  if ( !v8 )
  {
    v24 = 0;
    while ( 1 )
    {
      result = v24 + *(_DWORD *)(this + 220);
      v9 = *(void (__fastcall ****)(_DWORD))result;
      v10 = *(_DWORD *)result == 0;
      v27 = (__int16 *)result;
      if ( !v10 )
        break;
LABEL_30:
      v24 += 12;
      v8 = ++v7 < *(_DWORD *)(this + 232);
      v29 = v7;
      if ( !v8 )
        return result;
    }
    v11 = *(__int16 *)(result + 4) + v6;
    if ( v7 == *(_DWORD *)(this + 260) )
    {
      switch ( *(_DWORD *)(this + 212) )
      {
        case 0:
        case 3:
        case 6:
          v11 += *(_DWORD *)(this + 240);
          break;
        case 2:
        case 5:
        case 8:
          v11 -= *(_DWORD *)(this + 240);
          break;
        default:
          break;
      }
    }
    v12 = *(_WORD *)(result + 6);
    if ( v12 >= 0 )
      v11 = v12;
    ((void (__thiscall *)(void (__fastcall ***)(_DWORD), int, int))(*v9)[1])(v9, v11, v5);
    v13 = *(_DWORD *)(this + 212);
    if ( v13 == 3 || v13 == 4 || v13 == 5 )
    {
      ((void (__thiscall *)(void (__fastcall ***)(_DWORD), _BYTE *, int *))(*v9)[3])(v9, v38, &v26);
      if ( v26 < v31 - v25 )
      {
        v5 = (v31 - v26 - v25) / 2 + v28;
        ((void (__thiscall *)(void (__fastcall ***)(_DWORD), int, int))(*v9)[1])(v9, v11, v5);
      }
    }
    if ( v27[4] >= 0 )
    {
      ((void (__thiscall *)(void (__fastcall ***)(_DWORD), int *, _DWORD *))(*v9)[3])(v9, &v32, v33);
      v14 = v27[4];
      if ( v32 > v14 )
        ((void (__thiscall *)(void (__fastcall ***)(_DWORD), int, _DWORD))(*v9)[4])(v9, v14, v33[0]);
    }
    if ( v9 == *(void (__fastcall ****)(_DWORD))(this + 216) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 204))(this) )
      {
        if ( sub_10237C80((_DWORD *)(this + 268))
          && (v15 = (int (__thiscall ***)(_DWORD))sub_10237C80((_DWORD *)(this + 268)),
              v16 = *v15,
              v27 = (__int16 *)dword_1047CA68,
              v17 = *(_DWORD *)dword_1047CA70,
              v33[1] = dword_1047CA70,
              v18 = (*v16)(v15),
              v19 = (*(int (__thiscall **)(__int16 *, int))(*(_DWORD *)v27 + 16))(v27, v18),
              (*(unsigned __int8 (__thiscall **)(int, int))(v17 + 88))(v34, v19)) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 216) + 20))(
            *(_DWORD *)(this + 216),
            *(_DWORD *)(this + 256));
          (***(void (__thiscall ****)(_DWORD))(this + 216))(*(_DWORD *)(this + 216));
        }
        else
        {
          v20 = (void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 216) + 20);
          v21 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 228))(this, v39);
          (*v20)(*(_DWORD *)(this + 216), *v21);
          (***(void (__thiscall ****)(_DWORD))(this + 216))(*(_DWORD *)(this + 216));
        }
        goto LABEL_29;
      }
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 216) + 4))(
        *(_DWORD *)(this + 216),
        v11 + 1,
        v5 + 1);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 216) + 20))(
        *(_DWORD *)(this + 216),
        *(_DWORD *)(this + 248));
      (***(void (__thiscall ****)(_DWORD))(this + 216))(*(_DWORD *)(this + 216));
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 96))(dword_1047CA6C);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 216) + 4))(*(_DWORD *)(this + 216), v11, v5);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 216) + 20))(
        *(_DWORD *)(this + 216),
        *(_DWORD *)(this + 252));
      v22 = *(void (__fastcall ****)(_DWORD))(this + 216);
      v23 = *v22;
    }
    else
    {
      v23 = *v9;
      v22 = v9;
    }
    (*v23)(v22);
LABEL_29:
    result = ((int (__thiscall *)(void (__fastcall ***)(_DWORD), int *, _BYTE *))(*v9)[3])(v9, &v34, v40);
    v6 = v34 + v11;
    v7 = v29;
    v5 = v28;
    goto LABEL_30;
  }
  return result;
}
