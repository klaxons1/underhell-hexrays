int __cdecl sub_101312F0(int a1, int a2)
{
  int v2; // edi
  int result; // eax

  *(_WORD *)a2 = 255;
  *(_BYTE *)(a2 + 2) = 0;
  v2 = 20;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C) < 95 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C) >= 90 )
      v2 = 25;
  }
  else
  {
    v2 = 50;
  }
  result = a1;
  if ( a1 < v2 )
  {
    if ( a1 >= 15 )
      *(_BYTE *)(a2 + 1) = -1;
  }
  else
  {
    *(_WORD *)a2 = -256;
  }
  return result;
}
