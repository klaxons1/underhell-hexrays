int __usercall sub_101862D0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int result; // eax
  int *v5; // edi
  float *v6; // eax
  int v7; // edx
  int *v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  void (__thiscall *v12)(_DWORD *, float *); // edx
  int v14; // [esp+24h] [ebp-20h] BYREF
  int v15; // [esp+28h] [ebp-1Ch]
  int v16; // [esp+2Ch] [ebp-18h]
  _DWORD v17[3]; // [esp+30h] [ebp-14h] BYREF
  float v18[2]; // [esp+3Ch] [ebp-8h] BYREF

  v3 = a1[1584];
  if ( v3 )
  {
    result = sub_1007A6A0(off_103DCD78, v3);
    v5 = (int *)result;
    if ( result )
    {
      v6 = sub_101356D0();
      *(float *)v17 = *v6;
      *(float *)&v17[1] = v6[1];
      v7 = *v5;
      *(float *)&v17[2] = v6[2];
      v8 = (int *)(*(int (__thiscall **)(int *, int))(v7 + 536))(v5, a2);
      v14 = *v8;
      v15 = v8[1];
      v16 = v8[2];
      v9 = a1[1584];
      if ( v9 <= 17 )
        (*(void (__thiscall **)(_DWORD *, int, _DWORD *, int *))(a1[62] + 12))(a1 + 62, v9 - 1, v17, &v14);
      v10 = *a1;
      v11 = (*(int (__thiscall **)(_DWORD *, float *))(*a1 + 116))(a1, v18);
      (*(void (__thiscall **)(_DWORD *, int))(v10 + 108))(a1, v11);
      return (*(int (__thiscall **)(_DWORD *, int))(*a1 + 112))(a1, v15);
    }
  }
  else
  {
    v12 = *(void (__thiscall **)(_DWORD *, float *))(*a1 + 108);
    v18[0] = 512.0;
    v18[1] = 512.0;
    v12(a1, v18);
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 112))(a1, 0.0);
  }
  return result;
}
