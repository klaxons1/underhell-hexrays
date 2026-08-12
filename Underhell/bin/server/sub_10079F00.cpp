int __userpurge sub_10079F00@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        int a9,
        int a10)
{
  int v11; // esi
  int v12; // edi
  int result; // eax
  float v16[23]; // [esp+24h] [ebp-7Ch] BYREF
  _DWORD v17[8]; // [esp+80h] [ebp-20h] BYREF
  _UNKNOWN *retaddr; // [esp+A0h] [ebp+0h]

  v17[5] = a2;
  v17[6] = retaddr;
  sub_100B8E60(*(_DWORD *)(a1 + 4), *(_BYTE *)(a1 + 8), *(_DWORD *)(a1 + 4), *(_DWORD *)(*(_DWORD *)(a1 + 4) + 420), 1);
  sub_1001F200(v16, a5, a6, a7, a8);
  v11 = *(_DWORD *)(a1 + 12);
  if ( v11 && (*(_DWORD *)(v11 + 4) || *(_DWORD *)(v11 + 28)) )
  {
    v12 = a10;
    result = (*(int (__thiscall **)(int, float *, int, int, _DWORD *, int, int, int))(*(_DWORD *)dword_106B31F4 + 28))(
               dword_106B31F4,
               v16,
               v11,
               a9,
               v17,
               a10,
               a3,
               a4);
  }
  else
  {
    v12 = a10;
    result = (*(int (__thiscall **)(int, float *, int, _DWORD *, int, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
               dword_106B31F4,
               v16,
               a9,
               v17,
               a10,
               a3,
               a4);
  }
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    return sub_101A0AD0(v12, v12 + 12, 255, 255, 0, 1, -1.0);
  return result;
}
