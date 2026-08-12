int __cdecl sub_10262460(int a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // ecx

  v2 = sub_10262330();
  if ( v2
    && (*(unsigned __int8 (__thiscall **)(int, int, int, void *, int))(*(_DWORD *)dword_106B31D0 + 56))(
         dword_106B31D0,
         a1,
         a2,
         &unk_106C80C4,
         0x2000)
    && (v3 = v2[3]) != 0 )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
  }
  else
  {
    return 0;
  }
}
