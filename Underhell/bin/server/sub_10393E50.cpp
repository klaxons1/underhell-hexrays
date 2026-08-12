char __usercall sub_10393E50@<al>(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  int v3; // edi
  int v4; // eax
  bool v5; // bl
  char result; // al
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v3 = sub_10261B20();
  else
    v3 = 0;
  v5 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*a1 + 1088))(a1, a2) )
  {
    v4 = a1[1332];
    if ( v4 == 1 || v4 == 3 )
      v5 = 1;
  }
  (*(void (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 504))(a1, v7);
  if ( !v5
    && v3
    && (*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 872))(v3, v7)
    && (*(unsigned __int8 (__thiscall **)(int, _BYTE *, int, _DWORD))(*(_DWORD *)v3 + 544))(v3, v7, 16449, 0) )
  {
    if ( sub_1001ED80((float *)a1 + 1417) )
    {
      (*(void (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*a1 + 2344))(
        a1,
        "TLK_LOOK",
        0,
        0,
        0,
        0);
      *((_BYTE *)a1 + 5672) = 0;
    }
  }
  else
  {
    *((_BYTE *)a1 + 5672) = 1;
    *((float *)a1 + 1417) = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
  result = sub_10023D10(a1, 74);
  if ( result )
    return (*(int (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*a1 + 2344))(
             a1,
             "TLK_PLDEAD",
             0,
             0,
             0,
             0);
  return result;
}
