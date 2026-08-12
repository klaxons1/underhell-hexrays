int __usercall sub_10097980@<eax>(int *a1@<ecx>, double a2@<st0>)
{
  int v3; // edi
  int v4; // esi
  int v5; // eax
  _BYTE v7[80]; // [esp+8h] [ebp-50h] BYREF

  if ( !sub_10023D10(a1, 64) )
  {
    a2 = (double)a1[55];
    if ( (double)a1[54] * 0.75 < a2
      || !sub_10096EA0(a1, "TLK_WOUND", 0)
      || ((*(void (__thiscall **)(int *))(*a1 + 1656))(a1), (unsigned __int8)sub_100AFBB0("TLK_WOUND")) )
    {
      a2 = (double)a1[55];
      if ( (double)a1[54] * 0.5 >= a2 && sub_10096EA0(a1, "TLK_MORTAL", 0) )
        (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*a1 + 2244))(
          a1,
          "TLK_MORTAL",
          0,
          0,
          0,
          0);
    }
    else
    {
      sub_10247EC0(v7);
      (*(void (__thiscall **)(int *, _BYTE *))(*a1 + 1624))(a1, v7);
    }
  }
  v3 = a1[906];
  *((_BYTE *)a1 + 3648) = 1;
  if ( !v3 )
    return sub_10045660((int)a1, a2);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 100))(v3);
  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 272))(v3, v4) )
    return v4;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3);
  return sub_1007DB30((_DWORD *)(v5 + 4), v4);
}
