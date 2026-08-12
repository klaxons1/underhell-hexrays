int __cdecl sub_1011BB20(int a1, int a2, int a3, int a4, int a5, int a6, int a7, float a8)
{
  int result; // eax

  if ( dword_106B3200 )
    return (*(int (__stdcall **)(int, int, int, float *, int, int, int, int, _DWORD))(*(_DWORD *)dword_106B3200 + 4))(
             a1,
             a2,
             a3,
             &flt_106F1CB4,
             a4,
             a5,
             a6,
             a7,
             LODWORD(a8));
  return result;
}
