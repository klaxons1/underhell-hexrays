int *__cdecl sub_10072F20(int a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int *result; // eax
  int v5; // [esp+Ch] [ebp-18h] BYREF
  _DWORD v6[5]; // [esp+10h] [ebp-14h] BYREF

  sub_1023E0F0(&a1);
  v1 = a1;
  v2 = *(__int16 *)(a1 + 816);
  v6[0] = 0;
  v6[1] = 0;
  v6[2] = 1;
  v6[3] = 0;
  v6[4] = 0;
  v5 = v2;
  v3 = (unsigned __int16)sub_10071DB0(&off_10607418, (int)&v5);
  sub_102375F0(v6);
  if ( v3 != 0xFFFF )
    sub_1023E0F0(&a1);
  result = dword_10692FE0;
  while ( *result != v1 )
  {
    if ( (int)++result >= (int)&dword_10693000 )
      return result;
  }
  result = 0;
  dword_10693000 = 0;
  dword_10692FE0[0] = 0;
  dword_10692FE4 = 0;
  dword_10692FE8 = 0;
  dword_10692FEC = 0;
  dword_10692FF0 = 0;
  dword_10692FF4 = 0;
  dword_10692FF8 = 0;
  dword_10692FFC = 0;
  return result;
}
