int __cdecl sub_10250EE0(int a1, wint_t C)
{
  int v3; // [esp+14h] [ebp-Ch] BYREF
  int v4; // [esp+18h] [ebp-8h] BYREF
  int v5; // [esp+1Ch] [ebp-4h] BYREF

  if ( iswcntrl(C) )
    return 0;
  (*(void (__thiscall **)(int, int, _DWORD, int *, int *, int *))(*(_DWORD *)dword_1047CA6C + 280))(
    dword_1047CA6C,
    a1,
    C,
    &v4,
    &v3,
    &v5);
  return v5 + v4 + v3;
}
