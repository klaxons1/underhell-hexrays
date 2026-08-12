int __usercall sub_100DB170@<eax>(int a1@<esi>, int *a2)
{
  int v2; // ebx
  const char *v3; // eax
  char *v4; // edi
  int v5; // esi
  int (__thiscall *v6)(int, _BYTE *); // edx
  float *v7; // eax
  int (__thiscall *v8)(int); // edx
  float *v9; // eax
  void (__thiscall *v10)(char *, _BYTE *, _DWORD, _DWORD); // edx
  _BYTE v12[8]; // [esp+14h] [ebp-88h] BYREF
  float v13; // [esp+1Ch] [ebp-80h]
  float v14; // [esp+34h] [ebp-68h]
  float v15[3]; // [esp+5Ch] [ebp-40h] BYREF
  _BYTE v16[12]; // [esp+68h] [ebp-34h] BYREF
  float v17[3]; // [esp+74h] [ebp-28h] BYREF
  float v18[3]; // [esp+80h] [ebp-1Ch] BYREF
  float v19; // [esp+8Ch] [ebp-10h]
  float v20; // [esp+90h] [ebp-Ch]
  float v21; // [esp+94h] [ebp-8h]
  int v22; // [esp+98h] [ebp-4h]
  int savedregs; // [esp+9Ch] [ebp+0h] BYREF

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  LOBYTE(v22) = sub_100E8650();
  sub_100E8660(1);
  if ( *a2 > 1 )
    v3 = (const char *)a2[259];
  else
    v3 = String;
  v4 = (char *)sub_101811E0(v3, -1);
  if ( v4 )
  {
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v4 + 100))(v4, a1);
    sub_10260750(v4);
    v5 = sub_10153490();
    sub_100F5A30(v17, 0, 0);
    v6 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 504);
    v19 = v17[0] * 56755.84;
    v20 = v17[1] * 56755.84;
    v21 = 56755.84 * v17[2];
    v7 = (float *)v6(v5, v16);
    v8 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 504);
    v18[0] = *v7 + v19;
    v18[1] = v7[1] + v20;
    v18[2] = v7[2] + v21;
    v9 = (float *)v8(v5);
    sub_1002A5F0((int)&savedregs, v5, v9, v15, (int)v18, 33570827, v5, 0);
    if ( 1.0 != v14 )
    {
      v10 = *(void (__thiscall **)(char *, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v4 + 416);
      v13 = v13 + 12.0;
      v10(v4, v12, 0, 0);
      sub_102615C0(v4, 33570827, 0);
    }
  }
  sub_100E8660(v22);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
}
