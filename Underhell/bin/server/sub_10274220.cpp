void __cdecl sub_10274220(int *a1)
{
  _DWORD *v1; // esi
  int (__thiscall *v2)(_DWORD *, _BYTE *); // edx
  float *v3; // eax
  int (__thiscall *v4)(_DWORD *); // edx
  float *v5; // eax
  char *v6; // eax
  const char *i; // esi
  char *v8; // eax
  _DWORD v9[13]; // [esp+8h] [ebp-90h] BYREF
  char v10; // [esp+3Eh] [ebp-5Ah]
  char v11; // [esp+3Fh] [ebp-59h]
  const char *v12; // [esp+54h] [ebp-44h]
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
    v6 = (char *)sub_100634F0(a1, 1);
    for ( i = (const char *)sub_1012C5B0(0, v6, 0, 0, 0); i; i = (const char *)sub_1012C5B0((int)i, v8, 0, 0, 0) )
    {
      sub_10273EB0(i);
      v8 = (char *)sub_100634F0(a1, 1);
    }
  }
  else
  {
    v1 = (_DWORD *)sub_10153490();
    sub_100F5A30(v1, (int)v15, 0, 0);
    v2 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*v1 + 504);
    v17 = v15[0] * 16384.0;
    v18 = v15[1] * 16384.0;
    v19 = 16384.0 * v15[2];
    v3 = (float *)v2(v1, v14);
    v4 = *(int (__thiscall **)(_DWORD *))(*v1 + 504);
    v16[0] = *v3 + v17;
    v16[1] = v3[1] + v18;
    v16[2] = v3[2] + v19;
    v5 = (float *)v4(v1);
    sub_1002A5F0((int)&savedregs, (int)v1, v5, v13, (int)v16, 100679691, (int)v1, 0);
    if ( (*(float *)&v9[11] < 1.0 || v10 || v11) && !sub_10163140(v9) )
      sub_10273EB0(v12);
  }
}
