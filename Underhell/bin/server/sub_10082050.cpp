char __thiscall sub_10082050(_DWORD *this, int a2, float a3, _DWORD *a4)
{
  if ( (*(unsigned __int8 (__stdcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)(*(this - 1) + 2104) + 16))(
         a2,
         LODWORD(a3),
         a4) )
  {
    return 1;
  }
  if ( sub_1007FAD0((int)(this - 2), a2 + 68) )
  {
    *a4 = 0;
    *(_DWORD *)(a2 + 56) |= 2u;
    *(float *)(a2 + 40) = a3;
    return 1;
  }
  return 0;
}
