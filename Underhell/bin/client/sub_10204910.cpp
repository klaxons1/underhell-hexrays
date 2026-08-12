void __thiscall sub_10204910(float *this, int a2, int a3, char a4)
{
  if ( !a4 || 0.0 == this[11] )
  {
    *(_BYTE *)(a3 + 16) = 0;
    (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)this + 112))(*(float *)(a2 + 36), a2, a3);
  }
}
