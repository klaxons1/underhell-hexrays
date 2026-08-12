int __usercall sub_1003A010@<eax>(_DWORD *a1@<ecx>, double a2@<st0>)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  v3 = sub_100BF270(a1[227], a1[596], 0);
  if ( v3 == -1 )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1416))(a1, a1[595]);
  v4 = a1[596];
  if ( v3 == v4 )
    return sub_10033690((int)a1, a2, a1[595], v4, a1[597], a1[598]);
  v9 = 2;
  v8 = 2;
  v5 = sub_100C0B90(v3);
  if ( v5 != -1 )
    sub_10039D10(a1, v5, &v7, &v8, &v9);
  return sub_10033690((int)a1, a2, 2, v3, v8, v9);
}
