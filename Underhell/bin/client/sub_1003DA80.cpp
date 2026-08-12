int __cdecl sub_1003DA80(int a1)
{
  int result; // eax
  _WORD *i; // edi
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // [esp+4h] [ebp-8h]
  _BYTE v6[4]; // [esp+8h] [ebp-4h] BYREF

  result = sub_10229170(a1);
  if ( *(_DWORD *)(v5 + 48) )
  {
    sub_1007AA40(v6);
    result = sub_1007AE80(v6);
    for ( i = (_WORD *)result; result; i = (_WORD *)result )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_WORD *))(*(_DWORD *)i + 552))(i) && i[586] == 0xFFFF )
      {
        v3 = (unsigned __int16)sub_100EC160(0);
        sub_1016F8E0(0xFFFF, v3);
        v4 = (_DWORD *)(dword_103D8A7C + 8 * v3);
        if ( v4 )
          *v4 = i;
        i[586] = v3;
      }
      result = sub_1007AE80(v6);
    }
  }
  return result;
}
