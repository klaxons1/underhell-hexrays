int __userpurge sub_10279CE0@<eax>(_DWORD *a1@<ecx>, int a2@<esi>, int (__thiscall ***a3)(_DWORD))
{
  _DWORD *v4; // edi
  int result; // eax
  _BYTE *v6; // esi
  void (__thiscall *v7)(_BYTE *, _DWORD); // edx
  _BYTE *v8; // esi
  void (__thiscall *v9)(_BYTE *, int); // edx
  _DWORD *v10; // esi
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // [esp-4h] [ebp-10h]

  v4 = a1 + 52;
  result = sub_10237C80(a1 + 52);
  if ( (int (__thiscall ***)(_DWORD))result != a3 )
  {
    v13 = a2;
    if ( sub_10237C80(v4) )
    {
      v6 = (_BYTE *)sub_10237C80(v4);
      if ( v6[352] )
      {
        v7 = *(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v6 + 264);
        v6[352] = 0;
        v7(v6, 0);
        (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v6 + 244))(v6, 0, 0);
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v6 + 16))(v6, v13);
      }
    }
    sub_102393F0(v4, a3);
    if ( sub_10237C80(v4) )
    {
      v8 = (_BYTE *)sub_10237C80(v4);
      if ( v8[352] != 1 )
      {
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v8 + 48))(v8, 0);
        v9 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v8 + 264);
        v8[352] = 1;
        v9(v8, 1);
        (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v8 + 244))(v8, 0, 0);
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 16))(v8);
      }
    }
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 16))(a1, v13);
    v10 = (_DWORD *)sub_10229D00(32);
    if ( v10 )
    {
      if ( sub_10237C80(v4) )
        v11 = *(_DWORD *)(sub_10237C80(v4) + 292);
      else
        v11 = -1;
      v12 = sub_1022B1A0(v10, (int)"ItemSelected", "itemID", v11);
    }
    else
    {
      v12 = 0;
    }
    return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 180))(a1, v12);
  }
  return result;
}
