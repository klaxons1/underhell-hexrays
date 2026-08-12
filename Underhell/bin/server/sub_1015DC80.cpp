bool __userpurge sub_1015DC80@<al>(int a1@<edi>, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  int v4; // edi
  bool result; // al
  int v6; // [esp-8h] [ebp-Ch]

  result = 0;
  if ( a3 > -1 )
  {
    v3 = (_DWORD *)sub_102D9B20(a3, a1);
    v4 = sub_100BA1B0(v3, v6);
    if ( sub_100CF5D0(a2, a3) < v4 )
      return 1;
  }
  return result;
}
