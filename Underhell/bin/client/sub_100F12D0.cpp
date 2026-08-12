int __cdecl sub_100F12D0(int a1, int a2, unsigned __int8 a3)
{
  int result; // eax
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // edi
  int v7; // [esp+1Ch] [ebp+10h]

  result = a3;
  if ( dword_10435CD8[a3] )
  {
    result = sub_100F2BF0(a2, a1 + 12, 3.0, 10);
    v4 = (_DWORD *)result;
    if ( result )
    {
      v5 = *(_DWORD *)(result + 4);
      v6 = *(_DWORD *)result;
      v7 = *(_DWORD *)(result + 8);
      sub_100F0EE0((_DWORD *)result, a1);
      result = v7;
      *v4 = v6;
      v4[1] = v5;
      v4[2] = v7;
    }
  }
  return result;
}
