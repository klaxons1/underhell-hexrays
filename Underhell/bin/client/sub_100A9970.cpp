// bad sp value at call has been detected, the output may be wrong!
_DWORD *__userpurge sub_100A9970@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        _DWORD *a5,
        float *a6,
        int a7,
        int a8)
{
  int v9; // eax
  float *v10; // eax
  unsigned int v11; // eax
  int v12; // edi
  void (__thiscall *v13)(int, float *, int); // edx
  int v14; // ecx
  _DWORD *result; // eax
  float v17[20]; // [esp+28h] [ebp-6Ch] BYREF
  _DWORD v18[3]; // [esp+78h] [ebp-1Ch] BYREF
  float *v19; // [esp+84h] [ebp-10h]
  int v20; // [esp+88h] [ebp-Ch]
  void *v21; // [esp+8Ch] [ebp-8h]
  void *retaddr; // [esp+94h] [ebp+0h]

  v20 = a2;
  v21 = retaddr;
  v9 = (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 36))(a1, a3, a4);
  v10 = (float *)(*(int (__thiscall **)(_DWORD *, int))(*a1 + 32))(a1, v9);
  sub_1000E4B0(v17, a6, a6, v10, v19);
  v11 = *(_DWORD *)(a1[2] + 4);
  if ( v11 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1[2] + 4) & 0xFFF) + 2) != v11 >> 12 )
    v12 = 0;
  else
    v12 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1[2] + 4) & 0xFFF) + 1);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 44))(a1, 0);
  sub_1012D400(v12, a7);
  v13 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_104131A0 + 16);
  v19 = (float *)a8;
  v18[2] = v18;
  v13(dword_104131A0, v17, a8);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0(a8, a8 + 12, 255, 0, 0, 1, -1.0);
  if ( ((*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 44))(a1, 0) & *(_DWORD *)(a8 + 48)) != 0 && *(_DWORD *)(a8 + 76) )
  {
    v14 = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a8 + 76) + 8))(*(_DWORD *)(a8 + 76));
    result = a5;
    *a5 = v14;
  }
  else
  {
    result = a5;
    *a5 = -1;
  }
  return result;
}
