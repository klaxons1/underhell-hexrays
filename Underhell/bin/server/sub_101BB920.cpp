void sub_101BB920()
{
  int *v0; // esi
  int v1; // ebx
  int v2; // edi
  void *v3; // esp
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  int *v8; // ebx
  int v9; // ebx
  double (__thiscall *v10)(int); // eax
  double v11; // st7
  double v12; // st7
  int i; // esi
  double v14; // st7
  double v15; // st7
  double v16; // st6
  double v17; // st6
  double v18; // rt0
  double v19; // st6
  float v20; // eax
  int v21; // ecx
  double v22; // st7
  int v23; // edx
  int v24; // ebx
  int v25; // edi
  char *v26; // eax
  const char *v27; // edi
  const char *v28; // eax
  double ArgList_4; // [esp+Ch] [ebp-15Ch]
  double v30; // [esp+14h] [ebp-154h]
  const char *v31; // [esp+1Ch] [ebp-14Ch]
  _BYTE v32[12]; // [esp+20h] [ebp-148h] BYREF
  char Buffer[256]; // [esp+2Ch] [ebp-13Ch] BYREF
  float v34; // [esp+12Ch] [ebp-3Ch]
  int v35[2]; // [esp+130h] [ebp-38h] BYREF
  int v36; // [esp+138h] [ebp-30h]
  int v37; // [esp+13Ch] [ebp-2Ch]
  int v38; // [esp+140h] [ebp-28h]
  int *v39; // [esp+144h] [ebp-24h] BYREF
  int v40; // [esp+148h] [ebp-20h]
  int v41; // [esp+14Ch] [ebp-1Ch]
  int v42; // [esp+150h] [ebp-18h]
  int *v43; // [esp+154h] [ebp-14h]
  int v44; // [esp+158h] [ebp-10h]
  float v45; // [esp+15Ch] [ebp-Ch]
  float v46; // [esp+160h] [ebp-8h]
  float v47; // [esp+164h] [ebp-4h]

  v0 = 0;
  *(float *)&v1 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)dword_106BAFF4 + 180))(dword_106BAFF4));
  *(float *)&v2 = 0.0;
  v46 = *(float *)&v1;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( *(float *)&v1 != 0.0 )
  {
    v3 = alloca(4 * v1);
    v4 = *(_DWORD *)dword_106BAFF4;
    v45 = COERCE_FLOAT(v32);
    (*(void (__thiscall **)(int, _BYTE *))(v4 + 184))(dword_106BAFF4, v32);
    v47 = 0.0;
    if ( v1 <= 0 )
      goto LABEL_18;
    do
    {
      v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(LODWORD(v45) + 4 * LODWORD(v47)) + 68))(*(_DWORD *)(LODWORD(v45) + 4 * LODWORD(v47)));
      v44 = v5;
      if ( v5 )
      {
        v6 = 0;
        if ( v2 <= 0 )
          goto LABEL_9;
        while ( v5 != v0[v6] )
        {
          if ( ++v6 >= v2 )
            goto LABEL_9;
        }
        if ( v6 < 0 )
        {
LABEL_9:
          v7 = v2;
          if ( v2 + 1 > v40 )
          {
            sub_102ABFC0(v2 - v40 + 1);
            v2 = v42;
            v0 = v39;
            v5 = v44;
          }
          v42 = ++v2;
          v43 = v0;
          if ( v2 - v7 - 1 > 0 )
          {
            memcpy(&v0[v7 + 1], &v0[v7], 4 * (v2 - v7 - 1));
            v5 = v44;
          }
          v8 = &v0[v7];
          if ( v8 )
            *v8 = v5;
          *(float *)&v1 = v46;
        }
      }
      ++LODWORD(v47);
    }
    while ( SLODWORD(v47) < v1 );
    v9 = 0;
    if ( *(float *)&v2 == 0.0 )
    {
LABEL_18:
      sub_102375F0(&v39);
      return;
    }
    byte_106BA09C = 1;
    v47 = 0.0;
    v10 = *(double (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 196);
    v35[0] = 0;
    v35[1] = 0;
    v36 = 0;
    v38 = 0;
    v45 = v10(dword_106B31D0);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_106BAFF4 + 136))(0.015);
    v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
    v46 = v11 - v45;
    v37 = 0;
    sub_101B8BA0(v35, 0, v2, 0);
    if ( v2 > 0 )
    {
      do
      {
        for ( i = 0; i < v9; ++i )
          sub_101B5BD0((_DWORD *)v39[i], *(_DWORD *)(v39[i] + 424));
        v45 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_106BAFF4 + 136))(0.015);
        v14 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
        v15 = v14 - v45;
        v16 = v46 - v15;
        if ( v16 <= 1.0 )
        {
          if ( v16 < 0.0000099999997 )
            v16 = 0.0000099999997;
        }
        else
        {
          v16 = 1.0;
        }
        *(float *)(v35[0] + 4 * v9++) = v16;
        v17 = v16 + v47;
        v47 = v17;
        v18 = v17;
        v19 = v15;
        v12 = v18;
        v46 = v19;
      }
      while ( v9 < v2 );
      v0 = v39;
    }
    else
    {
      v12 = v47;
    }
    if ( v12 <= 0.001 )
      v12 = 0.001;
    v47 = v12;
    if ( v2 > 0 )
    {
      LODWORD(v20) = v35[0] - (_DWORD)v39;
      v46 = *(float *)&v2;
      LODWORD(v45) = v35[0] - (_DWORD)v39;
      while ( 1 )
      {
        v21 = *v0;
        v22 = *(float *)((char *)v0 + LODWORD(v20)) / v47;
        v23 = *(_DWORD *)(*v0 + 252) >> 11;
        v44 = *v0;
        v34 = v22;
        if ( (v23 & 1) != 0 )
          sub_100DAE60(v21);
        v24 = *v0;
        if ( (*(_DWORD *)(*v0 + 252) & 0x800) != 0 )
          sub_100DAE60(*v0);
        v25 = *v0;
        if ( (*(_DWORD *)(*v0 + 252) & 0x800) != 0 )
          sub_100DAE60(*v0);
        v26 = sub_1001E280(Buffer, "(%f, %f, %f)", *(float *)(v25 + 580), *(float *)(v24 + 584), *(float *)(v44 + 588));
        v27 = *(const char **)(*v0 + 92);
        if ( !v27 )
          v27 = String;
        v31 = v26;
        v30 = 100.0 * v34;
        ArgList_4 = v34 * v47 * 1000.0;
        v28 = sub_100D6390((_DWORD *)*v0);
        Msg("%s (%s): %.3fms (%.3f%%) @ %s\n", v27, v28, ArgList_4, v30, v31);
        ++v0;
        --LODWORD(v46);
        if ( v46 == 0.0 )
          break;
        v20 = v45;
      }
      v0 = v39;
    }
    byte_106BA09C = 0;
    if ( v36 >= 0 && v35[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v35[0]);
  }
  if ( v41 >= 0 )
  {
    if ( v0 )
      (*(void (__thiscall **)(_DWORD, int *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  }
}
