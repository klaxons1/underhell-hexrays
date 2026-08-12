char __thiscall sub_100DD020(
        _DWORD *this,
        char *String2,
        int a3,
        _DWORD *a4,
        const char *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  bool v10; // zf
  _DWORD *v11; // ebx
  int v12; // ecx
  int v13; // eax
  int *v14; // edi
  int v15; // ebx
  int v16; // esi
  const char *v17; // eax
  const char *v18; // ecx
  _DWORD *v20; // esi
  int v21; // esi
  int v22; // eax
  int v23; // ecx
  const char *v24; // edi
  const char *v25; // esi
  const char *v26; // ecx
  const char *v27; // eax
  int v28; // eax
  void (__thiscall *v29)(_DWORD *, _DWORD *); // edx
  int v30; // ecx
  _DWORD *v31; // esi
  _DWORD *v32; // ecx
  double ArgList; // [esp+0h] [ebp-160h]
  double ArgList_4; // [esp+4h] [ebp-15Ch]
  char Buffer[256]; // [esp+24h] [ebp-13Ch] BYREF
  _DWORD v36[8]; // [esp+124h] [ebp-3Ch] BYREF
  int v37; // [esp+144h] [ebp-1Ch] BYREF
  float v38; // [esp+148h] [ebp-18h]
  float v39; // [esp+14Ch] [ebp-14h]
  int v40; // [esp+150h] [ebp-10h] BYREF
  float v41; // [esp+154h] [ebp-Ch]
  float v42; // [esp+158h] [ebp-8h]
  _DWORD *v43; // [esp+15Ch] [ebp-4h]

  v10 = *(_DWORD *)(dword_106973E4 + 48) == 0;
  v11 = this;
  v43 = this;
  if ( !v10 )
  {
    if ( a4 )
    {
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      if ( (a4[63] & 0x800) != 0 )
        sub_100DAE60((int)a4);
      sub_1011BC50((int)(a4 + 145), (int)(v11 + 145), 255, 255, 255, 0, 3.0);
      v12 = a4[63];
      *(float *)&v37 = 4.0;
      v38 = 4.0;
      v39 = 4.0;
      *(float *)&v40 = -4.0;
      v41 = -4.0;
      v42 = -4.0;
      if ( (v12 & 0x800) != 0 )
        sub_100DAE60((int)a4);
      sub_1011BB20((int)(a4 + 145), (int)&v40, (int)&v37, 255, 0, 0, 0, 3.0);
    }
    if ( (v11[63] & 0x800) != 0 )
      sub_100DAE60((int)v11);
    sub_1011CF30((int)(v11 + 145), (int)String2, 0, 3.0);
    v13 = v11[63];
    *(float *)&v40 = 4.0;
    v41 = 4.0;
    v42 = 4.0;
    *(float *)&v37 = -4.0;
    v38 = -4.0;
    v39 = -4.0;
    if ( (v13 & 0x800) != 0 )
      sub_100DAE60((int)v11);
    sub_1011BB20((int)(v11 + 145), (int)&v37, (int)&v40, 0, 255, 0, 0, 3.0);
  }
  v14 = (int *)(*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11);
  if ( !v14 )
  {
LABEL_23:
    v17 = (const char *)v11[65];
    if ( !v17 )
    {
      v17 = (const char *)v11[23];
      if ( !v17 )
        v17 = String;
    }
    v18 = (const char *)v11[23];
    if ( !v18 )
      v18 = String;
    DevMsg(2, "unhandled input: (%s) -> (%s,%s)\n", String2, v18, v17);
    return 0;
  }
  while ( 1 )
  {
    v15 = 0;
    if ( v14[1] > 0 )
      break;
LABEL_21:
    v14 = (int *)v14[3];
    if ( !v14 )
    {
      v11 = v43;
      goto LABEL_23;
    }
  }
  v16 = 0;
  while ( (*(_BYTE *)(*v14 + v16 + 18) & 8) == 0 || _stricmp(*(const char **)(*v14 + v16 + 20), String2) )
  {
    ++v15;
    v16 += 52;
    if ( v15 >= v14[1] )
      goto LABEL_21;
  }
  if ( a4 )
  {
    if ( a9 != 2 )
      sub_1010D460(&a5);
    v20 = v43;
    ArgList = *(float *)(dword_106B31C8 + 12);
    sub_10429A00(Buffer, 0x100u, "(%0.2f) input %s: %s.%s(%s)\n", SLOBYTE(ArgList));
  }
  else
  {
    if ( a9 != 2 )
      sub_1010D460(&a5);
    ArgList_4 = *(float *)(dword_106B31C8 + 12);
    sub_10429A00(Buffer, 0x100u, "(%0.2f) input <NULL>: %s.%s(%s)\n", SLOBYTE(ArgList_4));
    v20 = v43;
  }
  DevMsg(2, Buffer);
  if ( (v20[59] & 0x10) != 0 )
    sub_100D63C0(v20, String2, (int)a4, a5, a6, a7, a8, a9);
  v21 = 52 * v15;
  v22 = *(_DWORD *)(52 * v15 + *v14);
  v23 = a9;
  if ( a9 != v22 && (a9 || v22 != 2) )
  {
    if ( !(unsigned __int8)sub_1010D100(*(_DWORD *)(52 * v15 + *v14)) )
    {
      if ( a4 )
      {
        if ( a4[65] )
          v24 = (const char *)a4[65];
        else
          v24 = String;
        if ( a4[23] )
          v25 = (const char *)a4[23];
        else
          v25 = String;
      }
      else
      {
        v24 = "<null>";
        v25 = "<null>";
      }
      if ( v43[65] )
      {
        v26 = (const char *)v43[65];
      }
      else
      {
        v26 = (const char *)v43[23];
        if ( !v26 )
          v26 = String;
      }
      v27 = (const char *)v43[23];
      if ( !v27 )
        v27 = String;
      Warning(
        "!! ERROR: bad input/output link:\n!! %s(%s,%s) doesn't match type from %s(%s)\n",
        v27,
        v26,
        String2,
        v25,
        v24);
      return 0;
    }
    v23 = a9;
  }
  v28 = *v14;
  v29 = *(void (__thiscall **)(_DWORD *, _DWORD *))(*v14 + v21 + 28);
  if ( v29 )
  {
    v36[0] = a3;
    v36[1] = a4;
    v36[2] = a5;
    v36[3] = a6;
    v36[4] = a7;
    v36[6] = v23;
    v36[5] = a8;
    v36[7] = a10;
    v29(v43, v36);
    return 1;
  }
  if ( (*(_BYTE *)(v28 + v21 + 18) & 4) != 0 )
  {
    v30 = *(_DWORD *)(v28 + v21 + 8);
    v31 = v43;
    sub_1010C350((char *)v43 + v30);
    if ( *((_BYTE *)v31 + 84) )
    {
      *((_BYTE *)v31 + 88) |= 1u;
      return 1;
    }
    v32 = (_DWORD *)v31[6];
    if ( v32 )
    {
      *v32 |= 0x101u;
      *(_WORD *)(sub_10153460(v32) + 2) = 0;
    }
  }
  return 1;
}
