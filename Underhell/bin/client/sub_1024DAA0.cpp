int __userpurge sub_1024DAA0@<eax>(
        int a1@<ecx>,
        int a2@<edi>,
        int a3,
        int a4,
        int (__thiscall ***a5)(void *, int, int))
{
  char v6; // al
  double v8; // st7
  float v10; // [esp+24h] [ebp-Ch] BYREF
  int v11; // [esp+28h] [ebp-8h] BYREF
  int v12; // [esp+2Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+30h] [ebp+0h] BYREF
  float v14; // [esp+3Ch] [ebp+Ch]

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1 + 84))(a1, a2) )
  {
    (*(void (__thiscall **)(int, int *, float *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v12, &v10);
    (*(void (__thiscall **)(int, _UNKNOWN **, int *))(*(_DWORD *)dword_1047CA6C + 356))(dword_1047CA6C, &retaddr, &v11);
    v10 = (double)SLODWORD(v10) / (double)v11;
  }
  v12 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 968))(a1) != 0 ? 12 : 18;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 968))(a1);
  sub_102361A0(a5, (int)(*(float *)&v11 * (double)(v6 != 0 ? 12 : 18)), (int)((double)v12 * *(float *)&v11));
  v14 = ceil(*(float *)&v11);
  v8 = ceil(*(float *)&v11 + *(float *)&v11);
  return (*a5)[198](a5, (int)v8, (int)v14);
}
