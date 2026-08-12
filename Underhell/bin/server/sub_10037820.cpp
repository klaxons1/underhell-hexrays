int __thiscall sub_10037820(int this, int a2)
{
  int v2; // edi
  void (__thiscall *v3)(int, __int16 *, int *); // edx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edi
  int result; // eax
  int *v14; // eax
  int v15; // eax
  int *v16; // eax
  int v17; // eax
  char v18; // bl
  int v19; // eax
  unsigned int v20; // eax
  bool v21; // bl
  int v22; // eax
  __int16 v23; // [esp+Ch] [ebp-22Ch] BYREF
  int v24; // [esp+10h] [ebp-228h]
  char v25[128]; // [esp+14h] [ebp-224h] BYREF
  int v26; // [esp+94h] [ebp-1A4h]
  char String2[128]; // [esp+98h] [ebp-1A0h] BYREF
  char v28[128]; // [esp+118h] [ebp-120h] BYREF
  char v29[128]; // [esp+198h] [ebp-A0h] BYREF
  int v30; // [esp+218h] [ebp-20h] BYREF
  int v31; // [esp+21Ch] [ebp-1Ch]
  int v32; // [esp+220h] [ebp-18h]
  int v33; // [esp+224h] [ebp-14h]
  int v34; // [esp+228h] [ebp-10h]
  int v35; // [esp+22Ch] [ebp-Ch]
  int v36; // [esp+230h] [ebp-8h]
  int v37; // [esp+234h] [ebp-4h]

  v2 = a2;
  v3 = *(void (__thiscall **)(int, __int16 *, int *))(*(_DWORD *)a2 + 8);
  v23 = 5;
  v24 = 0;
  v26 = 0;
  v25[0] = 0;
  String2[0] = 0;
  v28[0] = 0;
  v29[0] = 0;
  v3(a2, &v23, &dword_105FE190);
  if ( v23 >= 2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
    sub_1002FC20(v2, (_DWORD *)(this + 2192));
    sub_1002FC20(v2, (_DWORD *)(this + 2224));
    sub_1002FC20(v2, (_DWORD *)(this + 2256));
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    sub_1002FC20(v2, &v30);
    v5 = v35;
    v6 = ~v36;
    *(_DWORD *)(this + 2316) = ~v37;
    v7 = v34;
    *(_DWORD *)(this + 2312) = v6;
    v8 = ~v33;
    *(_DWORD *)(this + 2304) = ~v7;
    v9 = v31;
    *(_DWORD *)(this + 2300) = v8;
    v10 = v30;
    *(_DWORD *)(this + 2308) = ~v5;
    v11 = ~v32;
    *(_DWORD *)(this + 2292) = ~v9;
    *(_DWORD *)(this + 2288) = ~v10;
    *(_DWORD *)(this + 2296) = v11;
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 32))(v2);
  }
  if ( v23 >= 5 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
    sub_100834F0(v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 32))(v2);
  }
  v12 = sub_100CAFA0(v2);
  if ( !v12 )
    return 0;
  if ( v23 >= 3 )
  {
    if ( String2[0] )
    {
      v14 = (int *)sub_100A7940(String2);
      if ( v14 )
        v15 = *v14;
      else
        v15 = 0;
      *(_DWORD *)(this + 2128) = v15;
    }
    if ( v28[0] )
    {
      v16 = (int *)sub_100A7940(v28);
      if ( v16 )
        v17 = *v16;
      else
        v17 = 0;
      *(_DWORD *)(this + 2160) = v17;
    }
  }
  v18 = 0;
  if ( v23 >= 4 )
  {
    if ( v29[0] )
    {
      if ( sub_10001430((_DWORD *)this) )
      {
        v19 = sub_100BDF40(v29);
        sub_100C1170(v19);
        if ( *(_DWORD *)(this + 908) == -1 )
        {
          sub_10029620((_DWORD *)this, 1, (int)"Discarding missing sequence %s on load.\n");
          sub_100C1170(0);
          v18 = 1;
        }
      }
    }
  }
  v21 = *(_DWORD *)(this + 2324) == 4
     && ((v20 = *(_DWORD *)(this + 2688), v20 == -1)
      || off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 2] != v20 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 1])
     || v18
     || !v25[0]
     || v23 < 3
     || (v24 & 1) != 0 && !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
     || (v24 & 2) != 0 && !sub_10022C40((_DWORD *)this);
  if ( *(int *)(this + 2148) >= 28 )
    *(_DWORD *)(this + 2148) = 1;
  if ( !v21 )
  {
    v22 = sub_100A7940(v25);
    *(_DWORD *)(this + 2124) = v22;
    if ( v22 )
    {
      sub_1042CDD0(&a2);
      sub_1042CDF0(&a2, *(_DWORD *)(*(_DWORD *)(this + 2124) + 4), 8 * *(_DWORD *)(*(_DWORD *)(this + 2124) + 8));
      sub_1042CDE0(&a2);
      if ( a2 != v26 )
        *(_DWORD *)(this + 2124) = 0;
    }
  }
  if ( !*(_DWORD *)(this + 2124) || v21 )
  {
    *(_BYTE *)(this + 2164) = 0;
    sub_1002FA60((float *)this);
    return v12;
  }
  else
  {
    result = v12;
    *(_BYTE *)(this + 2164) = (v24 & 4) != 0;
  }
  return result;
}
