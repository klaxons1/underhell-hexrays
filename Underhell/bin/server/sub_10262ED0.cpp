void __cdecl sub_10262ED0(int a1, int a2, int a3)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  v3 = *(_DWORD **)(a1 + 76);
  if ( v3 )
  {
    v4 = (_DWORD *)v3[6];
    if ( v4 )
    {
      if ( (*v4 & 2) == 0 && (*(_BYTE *)(a1 + 66) & 4) == 0 && 1.0 != *(float *)(a1 + 44) )
        (*(void (__thiscall **)(_DWORD *, int, int, int))(*v3 + 308))(v3, a1, a2, a3);
    }
  }
}
