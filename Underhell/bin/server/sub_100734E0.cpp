_DWORD *__cdecl sub_100734E0(int a1)
{
  int v1; // esi
  int v2; // edi
  unsigned __int16 v3; // ax
  __int16 v4; // si
  int v5; // eax
  int v6; // edi
  int *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD *result; // eax
  int v12; // [esp+Ch] [ebp-30h] BYREF
  _DWORD v13[5]; // [esp+10h] [ebp-2Ch] BYREF
  int v14; // [esp+24h] [ebp-18h] BYREF
  _DWORD v15[5]; // [esp+28h] [ebp-14h] BYREF

  v1 = *(__int16 *)(a1 + 816);
  v15[0] = 0;
  v15[1] = 0;
  v15[2] = 1;
  v15[3] = 0;
  v15[4] = 0;
  v14 = v1;
  v2 = (unsigned __int16)sub_10071DB0(&off_10607418, (int)&v14);
  sub_102375F0(v15);
  v3 = v2;
  if ( v2 == 0xFFFF )
  {
    v13[0] = 0;
    v13[1] = 0;
    v13[2] = 1;
    v13[3] = 0;
    v13[4] = 0;
    v12 = v1;
    v4 = sub_10073460((int)&off_10607418, (int)&v12);
    sub_102375F0(v13);
    v3 = v4;
  }
  v5 = 32 * v3;
  v6 = *(_DWORD *)(v5 + dword_1060741C + 24);
  v7 = (int *)(v5 + dword_1060741C + 12);
  v8 = *(_DWORD *)(v5 + dword_1060741C + 16);
  if ( v6 + 1 > v8 )
    sub_102ABFC0(v6 - v8 + 1);
  ++v7[3];
  v9 = *v7;
  v10 = v7[3] - v6 - 1;
  v7[4] = *v7;
  if ( v10 > 0 )
    memcpy((void *)(v9 + 4 * v6 + 4), (const void *)(v9 + 4 * v6), 4 * v10);
  result = (_DWORD *)(*v7 + 4 * v6);
  if ( result )
    *result = a1;
  return result;
}
