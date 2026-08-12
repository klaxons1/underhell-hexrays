int __cdecl sub_101B62B0(int a1)
{
  int v1; // edi
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // edi
  const char *v5; // ebx
  const char *v6; // eax
  double v8; // [esp+10h] [ebp-158h]
  char Buffer[256]; // [esp+24h] [ebp-144h] BYREF
  _BYTE v10[4]; // [esp+124h] [ebp-44h] BYREF
  int v11[3]; // [esp+128h] [ebp-40h] BYREF
  int v12[3]; // [esp+134h] [ebp-34h] BYREF
  float v13[3]; // [esp+140h] [ebp-28h] BYREF
  int v14[3]; // [esp+14Ch] [ebp-1Ch] BYREF
  int v15[3]; // [esp+158h] [ebp-10h] BYREF
  const char *v16; // [esp+164h] [ebp-4h]

  v1 = a1;
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 316))(a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2) )
  {
    do
    {
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v2 + 16))(v2, v15);
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v2 + 20))(v2, v13);
      *(float *)v14 = 1.0;
      *(float *)&v14[1] = 1.0;
      *(float *)&v14[2] = 1.0;
      *(float *)v11 = -1.0;
      *(float *)&v11[1] = -1.0;
      *(float *)&v11[2] = -1.0;
      sub_1011BB20((int)v15, (int)v11, (int)v14, 0, 255, 0, 32, 0.0);
      *(float *)v12 = *(float *)v15 - v13[0] * 20.0;
      *(float *)&v12[1] = *(float *)&v15[1] - v13[1] * 20.0;
      *(float *)&v12[2] = *(float *)&v15[2] - 20.0 * v13[2];
      sub_1011BC50((float *)v15, (float *)v12, 0, 255, 0, 0, 0.0);
      v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 8))(v2, 1);
      v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 68))(v3);
      v16 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v4 + 28))(v4, v10);
      if ( !v16 )
        v16 = String;
      v5 = (const char *)v4[23];
      if ( !v5 )
        v5 = String;
      v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v2 + 52))(v2);
      v6 = sub_100D6390(v4);
      sub_1001E280(Buffer, "%s (%s): %s [%0.2f]", v5, v16, v6, v8);
      sub_1011CF30((float *)v15, (int)Buffer, 0, 0.0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 48))(v2);
    }
    while ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2) );
    v1 = a1;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 44))(v2, 1);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 320))(v1, v2);
}
