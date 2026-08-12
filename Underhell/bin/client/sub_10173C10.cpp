int __cdecl sub_10173C10(int a1, int a2, float *a3, int a4, float a5, int a6)
{
  float v7; // [esp+14h] [ebp-8h]
  float v8; // [esp+34h] [ebp+18h]

  v8 = a5 * 10.0;
  v7 = (float)a6;
  ((void (__thiscall *)(int (__stdcall ***)(char), float *, int, _DWORD, _DWORD))(*off_103DFD80)[2])(
    off_103DFD80,
    a3,
    a4,
    LODWORD(v8),
    LODWORD(v7));
  return sub_10173AD0(a3, v8, a6);
}
