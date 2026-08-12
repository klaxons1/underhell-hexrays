// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_100A98A0@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        int a3@<esi>,
        float *a4,
        float *a5,
        int a6,
        int a7,
        float *a8)
{
  int v9; // eax
  float *v10; // eax
  int v11; // esi
  unsigned int v12; // eax
  int v13; // eax
  int (__thiscall *v14)(int, float *, int); // eax
  int result; // eax
  float v17[21]; // [esp+24h] [ebp-6Ch] BYREF
  _DWORD v18[2]; // [esp+78h] [ebp-18h] BYREF
  float *v19; // [esp+80h] [ebp-10h]
  int v20; // [esp+84h] [ebp-Ch]
  void *v21; // [esp+88h] [ebp-8h]
  void *retaddr; // [esp+90h] [ebp+0h]

  v20 = a2;
  v21 = retaddr;
  v9 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 36))(a1, a3);
  v10 = (float *)(*(int (__thiscall **)(_DWORD *, int))(*a1 + 32))(a1, v9);
  sub_1000E4B0(v17, a4, a5, v10, v19);
  v11 = a1[2];
  v12 = *(_DWORD *)(v11 + 4);
  if ( v12 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v11 + 4) & 0xFFF) + 2) != v12 >> 12 )
    v13 = 0;
  else
    v13 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v11 + 4) & 0xFFF) + 1);
  sub_1012D400(v13, a7);
  v14 = *(int (__thiscall **)(int, float *, int))(*(_DWORD *)dword_104131A0 + 16);
  v19 = a8;
  v18[1] = v18;
  result = v14(dword_104131A0, v17, a6);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    return sub_10130AC0((int)a8, (int)(a8 + 3), 255, 0, 0, 1, -1.0);
  return result;
}
