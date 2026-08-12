int __thiscall sub_10149D20(void *this)
{
  int (__thiscall *v1)(int, _DWORD, int); // edx
  int v2; // eax
  __int64 v3; // rcx
  int v4; // esi
  double v5; // st7
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  double v17; // st7
  int v18; // eax
  int *v19; // eax
  float *v20; // eax
  const char *v21; // eax
  int v22; // eax
  const char *v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // eax
  unsigned int v29; // eax
  const char *v30; // esi
  float *v31; // eax
  float *v32; // eax
  float v34; // [esp+7Ch] [ebp-178h]
  _DWORD v35[5]; // [esp+90h] [ebp-164h] BYREF
  int v36; // [esp+A4h] [ebp-150h]
  char v37; // [esp+A8h] [ebp-14Ch]
  int v38; // [esp+ACh] [ebp-148h]
  char v39; // [esp+B0h] [ebp-144h] BYREF
  int v40; // [esp+130h] [ebp-C4h]
  _DWORD v41[8]; // [esp+134h] [ebp-C0h] BYREF
  float v42[11]; // [esp+154h] [ebp-A0h] BYREF
  _BYTE v43[24]; // [esp+180h] [ebp-74h] BYREF
  _DWORD v44[10]; // [esp+198h] [ebp-5Ch] BYREF
  int v45[3]; // [esp+1C0h] [ebp-34h] BYREF
  float v46; // [esp+1CCh] [ebp-28h] BYREF
  float v47; // [esp+1D0h] [ebp-24h]
  float v48; // [esp+1D4h] [ebp-20h]
  float v49; // [esp+1D8h] [ebp-1Ch] BYREF
  float v50; // [esp+1DCh] [ebp-18h]
  float v51; // [esp+1E0h] [ebp-14h]
  float v52; // [esp+1E4h] [ebp-10h]
  int v53; // [esp+1E8h] [ebp-Ch]
  const char *v54; // [esp+1ECh] [ebp-8h]
  char v55; // [esp+1F3h] [ebp-1h]

  HIDWORD(v3) = this;
  v1 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8);
  v55 = 0;
  v2 = v1(dword_106B31E4, 0, 29);
  v4 = v2 + 95;
  v53 = v2 + 95;
  if ( (unsigned int)(v2 - 3) <= 4 )
  {
    v53 = 100;
    v4 = 100;
  }
  v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.85000002,
         1.0)
     + (double)(int)abs32(*(_DWORD *)(HIDWORD(v3) + 220)) * 0.01;
  v52 = v5;
  if ( v5 > 1.0 )
    v52 = 1.0;
  switch ( *(_DWORD *)(HIDWORD(v3) + 812) )
  {
    case 0:
      v54 = "Breakable.Glass";
      v55 = 1;
      goto LABEL_13;
    case 1:
      v54 = "Breakable.Crate";
      v55 = 8;
      goto LABEL_13;
    case 2:
      v54 = "Breakable.Metal";
      v55 = 2;
      goto LABEL_13;
    case 3:
    case 9:
      v54 = "Breakable.Flesh";
      v55 = 4;
      goto LABEL_13;
    case 4:
    case 8:
      v54 = "Breakable.Concrete";
      v55 = 64;
      goto LABEL_13;
    case 5:
      v54 = "Breakable.Ceiling";
      goto LABEL_13;
    case 6:
      v54 = "Breakable.Computer";
      v55 = 2;
LABEL_13:
      v6 = *(_DWORD *)(HIDWORD(v3) + 816);
      if ( v6 != -1 )
      {
        LODWORD(v3) = &off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v3) + 816) & 0xFFF) + 1];
        v7 = v6 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v3) + 816) & 0xFFF) + 2] == v7 )
        {
          if ( *(_DWORD *)v3 )
          {
            v8 = off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v3) + 816) & 0xFFF) + 2] == v7 ? *(_DWORD *)v3 : 0;
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8) )
            {
              v9 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
                     dword_106B31F8,
                     "break_breakable",
                     0);
              if ( v9 )
              {
                v10 = sub_1026A890(HIDWORD(v3) + 816);
                v11 = sub_1001F4B0(v10);
                v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(
                        dword_106B31D0,
                        *(_DWORD *)(v11 + 24));
                (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v9 + 40))(v9, "userid", v12);
                v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                        dword_106B31D0,
                        *(_DWORD *)(HIDWORD(v3) + 24));
                (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v9 + 40))(v9, "entindex", v13);
                (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v9 + 40))(v9, "material", v55);
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v9, 0);
              }
              v4 = v53;
            }
          }
        }
      }
      *(float *)&v35[1] = 1.0;
      v35[2] = 100;
      v35[3] = 100;
      v35[4] = 100;
      v35[0] = 0;
      v39 = 0;
      v37 = 0;
      v38 = 0;
      v40 = 0;
      v36 = 75;
      if ( (unsigned __int8)sub_1023A760(v54, v35, 0) )
      {
        sub_100D78A0(v41, SHIDWORD(v3), 0.80000001);
        sub_100F8510(v42);
        v42[2] = v52;
        v42[0] = *(float *)v35;
        LODWORD(v42[1]) = &v39;
        v14 = *(_DWORD *)(HIDWORD(v3) + 24);
        LODWORD(v42[3]) = v36;
        LODWORD(v42[5]) = v4;
        v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v14);
        sub_1023BE40(v41, v15, v42);
        sub_102375F0(v43);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v41);
      }
      break;
    default:
      break;
  }
  v16 = *(_DWORD *)(HIDWORD(v3) + 820);
  v17 = 0.0;
  if ( v16 )
  {
    v18 = v16 - 1;
    if ( v18 )
    {
      if ( v18 != 1 )
      {
        DevMsg("**ERROR - Unspecified gib dir method in func_breakable!\n");
        goto LABEL_33;
      }
      sub_104222B0(HIDWORD(v3) + 824, &v49, 0, 0);
      v49 = v49 * 200.0;
      v50 = v50 * 200.0;
      v17 = 200.0 * v51;
    }
    else
    {
      v49 = flt_106B4F40 * -200.0;
      v17 = -200.0 * flt_106B4F48;
      v50 = flt_106B4F44 * -200.0;
    }
  }
  else
  {
    v49 = 0.0;
    v50 = 0.0;
  }
  v51 = v17;
LABEL_33:
  v19 = (int *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 576))(HIDWORD(v3));
  v45[0] = *v19;
  v45[1] = v19[1];
  v45[2] = v19[2];
  sub_10219BB0(v44);
  v44[0] = &CPVSFilter::`vftable';
  sub_1021A300(v45);
  v20 = (float *)sub_10022D70();
  *v20 = *(float *)(HIDWORD(v3) + 340) - *(float *)(HIDWORD(v3) + 328);
  v20[1] = *(float *)(HIDWORD(v3) + 344) - *(float *)(HIDWORD(v3) + 332);
  v20[2] = *(float *)(HIDWORD(v3) + 348) - *(float *)(HIDWORD(v3) + 336);
  v46 = *v20;
  v47 = v20[1];
  v48 = v20[2];
  v21 = *(const char **)(dword_106B16F4 + 48);
  v54 = (const char *)(int)(((v48 + v46) * v47 + v46 * v48) * 0.0023148148);
  if ( (int)v54 > (int)v21 )
    v54 = v21;
  sub_1042CBA0("breakable_disable_gib_limit");
  if ( !*(_DWORD *)(v44[9] + 48) && v54 )
  {
    v22 = *(_DWORD *)(HIDWORD(v3) + 960);
    if ( v22 == 1 )
    {
      v54 = 0;
    }
    else if ( v22 == 3 )
    {
      v54 = (const char *)(int)((double)(int)v54 * *(float *)(dword_106B173C + 44));
      if ( (int)v54 <= 1 )
        v54 = (const char *)1;
    }
  }
  if ( *(_DWORD *)(HIDWORD(v3) + 864) )
  {
    v53 = 0;
    if ( (int)v54 > 0 )
    {
      LODWORD(v52) = v55;
      do
      {
        v23 = *(const char **)(HIDWORD(v3) + 864);
        if ( !v23 )
          v23 = String;
        v24 = *(_DWORD *)dword_106B31F0;
        v25 = sub_10215C30(v23, -1);
        v26 = (*(int (__thiscall **)(int, int))(v24 + 8))(dword_106B31F0, v25);
        LODWORD(v3) = 0;
        if ( v53 )
          LODWORD(v3) = 128;
        v27 = (int)*off_1065C5EC;
        v28 = (*(int (__thiscall **)(int, float *, float *, int, int, int, _DWORD, _DWORD))(*(_DWORD *)(HIDWORD(v3) + 320)
                                                                                          + 36))(
                HIDWORD(v3) + 320,
                &v46,
                &v49,
                v26,
                100,
                1,
                2.5,
                v3 | LODWORD(v52));
        (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, int *, int))(v27 + 48))(
          off_1065C5EC,
          v44,
          0.0,
          v45,
          v28);
        ++v53;
      }
      while ( v53 < (int)v54 );
    }
  }
  sub_10148F20(SHIDWORD(v3));
  *(_DWORD *)(HIDWORD(v3) + 260) = 0;
  sub_101129A0((unsigned __int16 *)(HIDWORD(v3) + 320), *(_WORD *)(HIDWORD(v3) + 356) | 4);
  v29 = *(_DWORD *)(HIDWORD(v3) + 816);
  if ( v29 == -1 || off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v3) + 816) & 0xFFF) + 2] != v29 >> 12 )
    LODWORD(v3) = 0;
  else
    LODWORD(v3) = off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v3) + 816) & 0xFFF) + 1];
  sub_1010DD80((_DWORD *)(HIDWORD(v3) + 872), v3, 0.0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 592))(HIDWORD(v3));
  sub_100EC3F0((_DWORD *)HIDWORD(v3), (int)sub_10246D70, 0.0, 0);
  v34 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)HIDWORD(v3), v34, 0);
  if ( *(_DWORD *)(HIDWORD(v3) + 840) )
  {
    v30 = *(const char **)(HIDWORD(v3) + 840);
    if ( !v30 )
      v30 = String;
    v31 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(HIDWORD(v3) + 320) + 36))(HIDWORD(v3) + 320);
    sub_100E3960((int)v30, (float *)v45, v31, SHIDWORD(v3));
  }
  if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)(HIDWORD(v3) + 800) + 32))(HIDWORD(v3) + 800) > 0.0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(HIDWORD(v3) + 800) + 32))(HIDWORD(v3) + 800);
    (*(void (__thiscall **)(int))(*(_DWORD *)(HIDWORD(v3) + 800) + 36))(HIDWORD(v3) + 800);
    v32 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(HIDWORD(v3) + 320) + 36))(HIDWORD(v3) + 320);
    sub_1013D530((float *)v45, v32, SHIDWORD(v3), (int)0.0, (int)0.0, 1, 0.0, 0, 0, -1);
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v44);
}
