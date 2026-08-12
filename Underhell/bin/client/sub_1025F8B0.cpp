int __usercall sub_1025F8B0@<eax>(_DWORD **a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  void (__thiscall **v8)(_DWORD *, int); // edi
  int v9; // eax
  unsigned __int16 v10[256]; // [esp+18h] [ebp-3FCh] BYREF
  unsigned __int16 v11[254]; // [esp+218h] [ebp-1FCh] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1[238] + 128))(a1[238]) )
    return ((int (__thiscall *)(_DWORD **))(*a1)[282])(a1);
  result = (*(int (__thiscall **)(_DWORD *))(*a1[238] + 204))(a1[238]);
  if ( (_BYTE)result )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*a1[238] + 508))(a1[238], a2);
    ((void (__thiscall *)(_DWORD **, unsigned __int16 *, int))(*a1)[194])(a1, v10, 255);
    v4 = 0;
    if ( (*(int (__thiscall **)(_DWORD *))(*a1[238] + 932))(a1[238]) > 0 )
    {
      while ( 1 )
      {
        v5 = (*(int (__thiscall **)(_DWORD *, int))(*a1[238] + 936))(a1[238], v4);
        v6 = sub_1026B780(v5);
        (*(void (__thiscall **)(int, unsigned __int16 *, int))(*(_DWORD *)v6 + 776))(v6, v11, 255);
        if ( !wcscmp(v11, v10) )
          break;
        if ( ++v4 >= (*(int (__thiscall **)(_DWORD *))(*a1[238] + 932))(a1[238]) )
          goto LABEL_10;
      }
      if ( v4 >= 0 )
      {
        v7 = (*(int (__thiscall **)(_DWORD *, int))(*a1[238] + 936))(a1[238], v4);
        sub_1026C340(v7);
      }
    }
LABEL_10:
    (*(void (__thiscall **)(_DWORD *, _DWORD **, _DWORD *, _DWORD *))(*a1[238] + 768))(a1[238], a1, a1[241], a1[242]);
    v8 = (void (__thiscall **)(_DWORD *, int))(*a1[238] + 904);
    v9 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))a1);
    (*v8)(a1[238], v9);
    sub_1026C7A0(a1[238]);
    ((void (__thiscall *)(_DWORD **))(*a1)[53])(a1);
    ((void (__thiscall *)(_DWORD **, _DWORD *))(*a1)[264])(a1, a1[238]);
    (*(void (__thiscall **)(_DWORD *, int))(*a1[238] + 124))(a1[238], 1);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1[238] + 48))(a1[238], 0);
    sub_10252560(a1);
    (*(void (__thiscall **)(_DWORD *, int))(*a1[239] + 908))(a1[239], 1);
    return ((int (__thiscall *)(_DWORD **))(*a1)[4])(a1);
  }
  return result;
}
