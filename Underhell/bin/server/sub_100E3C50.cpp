int __stdcall sub_100E3C50(int **a1, int a2)
{
  int v2; // ebx
  int *v3; // edi
  int (__thiscall *v4)(int); // eax
  int result; // eax
  _DWORD v6[9]; // [esp+Ch] [ebp-4Ch] BYREF
  int v7; // [esp+30h] [ebp-28h]
  int v8; // [esp+34h] [ebp-24h]
  int v9; // [esp+38h] [ebp-20h]
  int v10; // [esp+3Ch] [ebp-1Ch]
  _DWORD v11[4]; // [esp+40h] [ebp-18h] BYREF
  __int16 v12; // [esp+50h] [ebp-8h]
  int v13; // [esp+54h] [ebp-4h]
  int v14; // [esp+60h] [ebp+8h]

  v2 = 0;
  v11[0] = v6;
  v3 = *a1;
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 56);
  v6[0] = 10;
  v6[1] = "elems";
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 131073;
  memset(&v6[5], 0, 12);
  v6[8] = &dword_1060F318;
  v7 = -1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11[1] = 1;
  v11[2] = &unk_10487748;
  v11[3] = 0;
  v12 = 0;
  v13 = 0;
  v14 = v4(a2);
  v3[3] = 0;
  sub_100DE5C0(v3, 0, v14, 0);
  result = v14;
  v7 = 0;
  if ( v14 > 0 )
  {
    do
    {
      result = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a2 + 8))(a2, v2 + *v3, v11);
      v2 += 16;
      --v14;
    }
    while ( v14 );
  }
  return result;
}
