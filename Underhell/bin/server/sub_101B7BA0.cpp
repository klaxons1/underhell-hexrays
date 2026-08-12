void __cdecl sub_101B7BA0(int *a1, void (__cdecl *a2)())
{
  _DWORD *v2; // esi
  int (__thiscall *v3)(_DWORD *, _BYTE *); // edx
  float *v4; // eax
  int (__thiscall *v5)(_DWORD *); // edx
  float *v6; // eax
  char *v7; // eax
  _DWORD *i; // esi
  char *v9; // eax
  float v10; // [esp+34h] [ebp-64h]
  char v11; // [esp+3Eh] [ebp-5Ah]
  char v12; // [esp+3Fh] [ebp-59h]
  float v13[3]; // [esp+5Ch] [ebp-3Ch] BYREF
  _BYTE v14[12]; // [esp+68h] [ebp-30h] BYREF
  float v15[3]; // [esp+74h] [ebp-24h] BYREF
  float v16[3]; // [esp+80h] [ebp-18h] BYREF
  float v17; // [esp+8Ch] [ebp-Ch]
  float v18; // [esp+90h] [ebp-8h]
  float v19; // [esp+94h] [ebp-4h]
  int savedregs; // [esp+98h] [ebp+0h] BYREF

  if ( *a1 >= 2 )
  {
    v7 = (char *)sub_100634F0(a1, 1);
    for ( i = sub_1012C5B0(0, v7, 0, 0, 0); i; i = sub_1012C5B0((int)i, v9, 0, 0, 0) )
    {
      ((void (__cdecl *)(_DWORD *))a2)(i);
      v9 = (char *)sub_100634F0(a1, 1);
    }
  }
  else
  {
    v2 = (_DWORD *)sub_10153490();
    sub_100F5A30(v2, (int)v15, 0, 0);
    v3 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*v2 + 504);
    v17 = v15[0] * 16384.0;
    v18 = v15[1] * 16384.0;
    v19 = 16384.0 * v15[2];
    v4 = (float *)v3(v2, v14);
    v5 = *(int (__thiscall **)(_DWORD *))(*v2 + 504);
    v16[0] = *v4 + v17;
    v16[1] = v4[1] + v18;
    v16[2] = v4[2] + v19;
    v6 = (float *)v5(v2);
    sub_1002A5F0((int)&savedregs, (int)v2, v6, v13, (int)v16, 100679691, (int)v2, 0);
    if ( v10 < 1.0 || v11 || v12 )
      a2();
  }
}
