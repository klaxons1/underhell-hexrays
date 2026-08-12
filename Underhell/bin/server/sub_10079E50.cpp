int __userpurge sub_10079E50@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<esi>,
        float *a4,
        float *a5,
        int a6,
        char a7,
        int a8)
{
  int v8; // edx
  int result; // eax
  float v10[23]; // [esp+24h] [ebp-7Ch] BYREF
  _DWORD v11[8]; // [esp+80h] [ebp-20h] BYREF
  _UNKNOWN *retaddr; // [esp+A0h] [ebp+0h]

  v11[5] = a2;
  v11[6] = retaddr;
  if ( a7 )
    v8 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 420);
  else
    v8 = 0;
  sub_100B8E60(*(_DWORD *)(a1 + 4), *(_BYTE *)(a1 + 8), *(_DWORD *)(a1 + 4), v8, 1);
  sub_1001F180(v10, a4, a5);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v10,
    a6,
    v11,
    a8,
    a3);
  result = dword_106CE63C;
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    return sub_101A0AD0(a8, a8 + 12, 255, 0, 0, 1, -1.0);
  return result;
}
