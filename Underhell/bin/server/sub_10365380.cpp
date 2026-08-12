int __usercall sub_10365380@<eax>(int a1@<ecx>, double a2@<st0>)
{
  char v3; // bl
  int v4; // edi
  _DWORD *v5; // ecx
  int result; // eax
  int *v7; // ecx
  _DWORD *v8; // ecx
  float *v9; // eax
  float *v10; // [esp-14h] [ebp-30h]
  __int64 v11; // [esp-8h] [ebp-24h]
  _BYTE v12[12]; // [esp+Ch] [ebp-10h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF

  sub_10041D00((_DWORD *)a1);
  v3 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1868))(a1) + 17) != 0;
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1868))(a1) + 17) )
  {
    v4 = dword_106B31C8;
    sub_10021820((void *)a1);
    if ( *(float *)(v4 + 12) - a2 >= 0.5 )
      v3 = 0;
  }
  if ( *(_BYTE *)(a1 + 3704) != v3 )
  {
    v5 = (_DWORD *)(a1 + 3732);
    HIDWORD(v11) = a1;
    LODWORD(v11) = a1;
    if ( !v3 )
      v5 = (_DWORD *)(a1 + 3708);
    sub_1010DD80(v5, v11, 0.0);
    *(_BYTE *)(a1 + 3704) = v3;
  }
  result = dword_106E7DE4;
  if ( *(_DWORD *)(dword_106E7DE4 + 48) )
  {
    v7 = *(int **)(a1 + 2796);
    *(_DWORD *)(a1 + 236) |= 4u;
    if ( v7 )
    {
      result = sub_100B16F0(v7, 1);
      if ( result > 1 )
      {
        v8 = *(_DWORD **)(a1 + 2796);
        if ( v8 )
        {
          for ( result = sub_100B1560(v8, &v13, 1); result; result = sub_100B1630(*(_DWORD **)(a1 + 2796), &v13, 1) )
          {
            v10 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)result + 504))(result, v12);
            v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
            sub_1011BC50(v9, v10, 255, 255, 0, 0, 0.1);
          }
        }
      }
    }
  }
  return result;
}
