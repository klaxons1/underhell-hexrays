int __usercall sub_10169B90@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // edx
  const char *v4; // eax
  const char *v5; // eax
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // eax
  int result; // eax
  float v10[3]; // [esp+8h] [ebp-1Ch] BYREF
  float v11[3]; // [esp+14h] [ebp-10h] BYREF
  _BYTE v12[4]; // [esp+20h] [ebp-4h] BYREF

  sub_10112C00(a1 + 320, 2);
  sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 0x10);
  sub_100E0970(a1, v3, 0, 0);
  v4 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v12);
  if ( !v4 )
    v4 = String;
  sub_100E8220(a2, v4);
  v5 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v12);
  if ( !v5 )
    v5 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, v5);
  v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v12);
  v7 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 1372) = *v6;
  v8 = (*(int (__thiscall **)(int))(v7 + 24))(a1);
  v11[0] = 16.0;
  v11[1] = 16.0;
  v11[2] = 16.0;
  v10[0] = -16.0;
  v10[1] = -16.0;
  *(_DWORD *)(a1 + 1376) = v8;
  v10[2] = 0.0;
  result = sub_1025F360(a1, v10, v11);
  *(_DWORD *)(a1 + 196) = sub_100D1280;
  return result;
}
