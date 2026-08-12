int __userpurge sub_10257F60@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5)
{
  int result; // eax
  int (__thiscall ***v7)(void *, int, int); // esi
  int v8; // eax
  int v9; // ecx
  int v10; // [esp+8h] [ebp-8h] BYREF
  int v11; // [esp+Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+10h] [ebp+0h]

  result = a1[90];
  if ( result >= 0 && result < a1[88] )
  {
    v7 = *(int (__thiscall ****)(void *, int, int))(a1[85] + 4 * result);
    if ( v7 )
    {
      sub_10236170(v7, (int)&v10, (int)&v11);
      v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, a1[80], a2);
      v9 = a4 - v11;
      if ( a4 - v11 <= 6 )
        v9 = 6;
      sub_102361A0(v7, v9, a5 + v8 - (_DWORD)retaddr);
      result = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v7)[31])(v7, 1);
      if ( a4 - v10 <= 0 )
      {
        --a1[90];
        return ((int (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*v7)[31])(v7, 0);
      }
    }
  }
  return result;
}
