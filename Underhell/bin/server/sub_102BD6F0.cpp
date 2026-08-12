void __userpurge sub_102BD6F0(int a1@<ecx>, int a2@<esi>, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // eax
  float v26; // [esp+0h] [ebp-34h]
  float v27; // [esp+4h] [ebp-30h]
  int v28[8]; // [esp+14h] [ebp-20h] BYREF

  if ( !*(_BYTE *)(a1 + 1282) )
  {
    v4 = *(_DWORD *)(a1 + 248) >> 12;
    *(_BYTE *)(a1 + 1282) = 1;
    if ( (v4 & 1) != 0 )
    {
      if ( *(_BYTE *)(a1 + 1120) && *(_BYTE *)(a1 + 1283) )
      {
        if ( *(_DWORD *)(a1 + 1256) )
        {
          v26 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
          sub_100EC3F0((_DWORD *)a1, (int)sub_102BC470, v26, off_106614DC);
        }
      }
    }
    else
    {
      sub_100D78A0(v28, a1, 0.0);
      if ( (*(_DWORD *)(a1 + 248) & 2) == 0 )
      {
        v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
        sub_1023C580(a1, a2, v28, v5, (int)"HeadcrabCanister.LaunchSound", 0, 0.0, 0);
      }
      v6 = sub_102BD2F0((_DWORD *)a1);
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v7 = sub_10286F30("sprites/smoke.vmt", (float *)(a1 + 580), 1);
      if ( v7 )
        *(_DWORD *)(a1 + 1244) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v7 + 8))(v7);
      else
        *(_DWORD *)(a1 + 1244) = -1;
      v8 = *(_DWORD *)(a1 + 1244);
      if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 2] != v8 >> 12 )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 1];
      sub_10128950(v9, 5, 224, 224, 255, 255, 0);
      v10 = *(_DWORD *)(a1 + 1244);
      if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 1];
      sub_10126B10(v11, a1, 0);
      v12 = *(_DWORD *)(a1 + 1244);
      if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 2] != v12 >> 12 )
        v13 = 0;
      else
        v13 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 1];
      sub_10287300(v13, 32.0);
      v14 = *(_DWORD *)(a1 + 1244);
      if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 2] != v14 >> 12 )
        v15 = 0;
      else
        v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 1];
      sub_10287440(v15, 200.0);
      v16 = *(_DWORD *)(a1 + 1244);
      if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 2] != v16 >> 12 )
        v17 = 0;
      else
        v17 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 1];
      sub_102873A0(v17, 15.0);
      v18 = *(_DWORD *)(a1 + 1244);
      if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 2] != v18 >> 12 )
        v19 = 0;
      else
        v19 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 1];
      sub_102874E0(v19, 0.0020000001);
      v20 = *(_DWORD *)(a1 + 1244);
      if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 2] != v20 >> 12 )
        v21 = 0;
      else
        v21 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 1];
      sub_102872B0(v21, 3.0);
      v22 = *(_DWORD *)(a1 + 1244);
      if ( v22 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 2] != v22 >> 12 )
        v23 = 0;
      else
        v23 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1244) & 0xFFF) + 1];
      sub_10287580(v23, 1000.0);
      if ( v6 && (unsigned __int8)sub_102BE2C0(a1 + 1124) )
      {
        v27 = (float)*(int *)(v6 + 804);
        v24 = sub_1026A890((unsigned int *)(a1 + 1244));
        sub_10287620(v24, (float *)(v6 + 808), v27);
      }
      v25 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 8))(a1, -1);
      sub_1002A0F0((int *)(a1 + 1292), *v25, a1, a1);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v28);
    }
  }
}
