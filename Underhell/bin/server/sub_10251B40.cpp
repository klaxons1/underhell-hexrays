void __usercall sub_10251B40(int a1@<ecx>, float a2@<ebx>)
{
  char *v3; // eax
  float *v4; // edi
  void (__noreturn ***v5)(); // eax
  const char *v6; // eax
  double v7; // st7
  int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  int *v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // ecx
  double v15; // st7
  const char *v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  float *v19; // eax
  int v20; // eax
  unsigned int v21; // edx
  int *v22; // ecx
  float *v23; // eax
  int v24; // [esp+10h] [ebp-74h] BYREF
  const char *v25; // [esp+14h] [ebp-70h]
  float v26; // [esp+18h] [ebp-6Ch]
  int v27; // [esp+1Ch] [ebp-68h]
  int v28[6]; // [esp+3Ch] [ebp-48h] BYREF
  _DWORD v29[8]; // [esp+54h] [ebp-30h] BYREF
  int v30; // [esp+74h] [ebp-10h] BYREF
  float v31; // [esp+78h] [ebp-Ch]
  float v32; // [esp+7Ch] [ebp-8h]
  unsigned int v33; // [esp+80h] [ebp-4h]

  v3 = sub_100D8070((_DWORD *)a1);
  v4 = (float *)v3;
  if ( v3 )
  {
    *(_DWORD *)(a1 + 960) = *(_DWORD *)(a1 + 212);
    *(_DWORD *)(a1 + 212) = *((_DWORD *)v3 + 53);
    *(float *)(a1 + 808) = ((double (__thiscall *)(char *))*(_DWORD *)(*(_DWORD *)v3 + 292))(v3);
    v10 = *(_DWORD *)(a1 + 940);
    if ( v10 != -1 )
    {
      v11 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 940) & 0xFFF) + 1];
      v12 = v10 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 940) & 0xFFF) + 2] == *(_DWORD *)(a1 + 940) >> 12 )
      {
        if ( *v11 )
        {
          v13 = off_1061BE18[4 * (*(_DWORD *)(a1 + 940) & 0xFFF) + 2] == v12 ? *v11 : 0;
          if ( 0.0 != *(float *)(v13 + 108) )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 940) & 0xFFF) + 2] == v12 )
              v14 = *v11;
            else
              v14 = 0;
            v15 = *(float *)(v14 + 108);
            *(float *)(a1 + 108) = *(float *)(v14 + 108);
            v16 = sub_100D6390((_DWORD *)a1);
            DevMsg(2, "Train %s speed to %4.2f\n", v16, v15);
          }
        }
      }
    }
    *(_DWORD *)(a1 + 940) = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 8))(v4);
    *(_DWORD *)(a1 + 948) = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 8))(v4);
    v17 = *(_DWORD *)(a1 + 940);
    if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 940) & 0xFFF) + 2] != v17 >> 12 )
      v18 = 0;
    else
      v18 = off_1061BE18[4 * (*(_DWORD *)(a1 + 940) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v18 + 248) & 2) != 0 )
    {
      sub_100EAB80((_DWORD *)a1, 8);
      v19 = (float *)sub_10022D70();
      *v19 = (*(float *)(a1 + 340) - *(float *)(a1 + 328)) * 0.5 + *(float *)(a1 + 328);
      v19[1] = (*(float *)(a1 + 344) - *(float *)(a1 + 332)) * 0.5 + *(float *)(a1 + 332);
      v19[2] = 0.5 * (*(float *)(a1 + 348) - *(float *)(a1 + 336)) + *(float *)(a1 + 336);
      *(float *)&v30 = v4[179] - *v19;
      v31 = v4[180] - v19[1];
      v32 = v4[181] - v19[2];
      sub_1025F370(a1, &v30, 0);
      sub_10251830(a1);
    }
    else
    {
      sub_1024DE60((float *)a1, a2, (int)v4);
      v20 = *(_DWORD *)(a1 + 192);
      v21 = v20 & 0xFFFFFFF7;
      v33 = v20 & 0xFFFFFFF7;
      if ( v20 != (v20 & 0xFFFFFFF7) )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v22 = *(int **)(a1 + 24);
          if ( v22 )
          {
            sub_100194B0(v22, 192);
            v21 = v33;
          }
        }
        *(_DWORD *)(a1 + 192) = v21;
      }
      *(_DWORD *)(a1 + 4) = sub_10251830;
      v23 = (float *)sub_10022D70();
      *v23 = (*(float *)(a1 + 340) - *(float *)(a1 + 328)) * 0.5 + *(float *)(a1 + 328);
      v23[1] = (*(float *)(a1 + 344) - *(float *)(a1 + 332)) * 0.5 + *(float *)(a1 + 332);
      v23[2] = 0.5 * (*(float *)(a1 + 348) - *(float *)(a1 + 336)) + *(float *)(a1 + 336);
      *(float *)&v30 = v4[179] - *v23;
      v31 = v4[180] - v23[1];
      v32 = v4[181] - v23[2];
      sub_10246AC0((float *)a1, (float *)&v30, *(float *)(a1 + 108));
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 924) )
    {
      v5 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v5)[10])(v5, *(_DWORD *)(a1 + 924));
      *(_DWORD *)(a1 + 924) = 0;
    }
    if ( *(_DWORD *)(a1 + 920) )
    {
      sub_100D78A0(v29, a1, 0.80000001);
      sub_100F8510((float *)&v24);
      v6 = *(const char **)(a1 + 920);
      v24 = 2;
      v25 = v6;
      if ( !v6 )
        v25 = String;
      v7 = *(float *)(a1 + 928);
      v8 = *(_DWORD *)(a1 + 24);
      v26 = v7;
      v27 = 75;
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v8);
      sub_1023BE40(v29, v9, (int)&v24);
      sub_102375F0(v28);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v29);
    }
  }
}
