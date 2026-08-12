int __cdecl sub_10014BD0(int a1, int a2)
{
  int result; // eax
  int v3; // esi

  result = *(_DWORD *)(a1 + 4);
  if ( result != *(_DWORD *)(a2 + 1808) )
  {
    v3 = dword_1047CA8C;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
    sub_10029860(*(_DWORD *)(a1 + 4));
    *(float *)(a2 + 96) = *((float *)off_103DC81C + 3);
    sub_10025680(0.0);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  }
  return result;
}
