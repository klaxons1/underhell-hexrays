int __userpurge sub_101D73C0@<eax>(int a1@<ecx>, double a2@<st0>, int a3, _DWORD *a4)
{
  double v5; // st7
  _BYTE v7[2]; // [esp+Ch] [ebp-30h] BYREF
  _BYTE v8[2]; // [esp+Eh] [ebp-2Eh] BYREF
  float v9; // [esp+10h] [ebp-2Ch]
  float v10; // [esp+14h] [ebp-28h]
  unsigned __int8 v11[16]; // [esp+18h] [ebp-24h] BYREF
  unsigned __int8 v12[16]; // [esp+28h] [ebp-14h] BYREF

  sub_101DAFD0(a3, 16, (int)v7, v11, 8, 0, *(unsigned __int8 *)(a1 + 10), 8, 0, 1);
  v9 = a2;
  v5 = 0.0;
  if ( 0.0 == v9 )
    v5 = 3.4028235e38;
  else
    sub_101DAFD0(a3, 16, (int)v8, v12, 6, 1, *(unsigned __int8 *)(a1 + 10), 8, 0, 1);
  v10 = v5;
  if ( v10 < (double)v9 )
    sub_101D6B90(a4, v8, v12);
  else
    sub_101D6B90(a4, v7, v11);
  return 0;
}
