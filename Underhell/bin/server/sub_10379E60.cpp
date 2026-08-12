void __thiscall sub_10379E60(int this, int a2)
{
  int *v2; // eax
  double v4; // st7
  bool v5; // zf

  v2 = (int *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v2 = &a2;
  }
  *(_DWORD *)(this + 4624) = *v2;
  v4 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         1.0,
         *(float *)(dword_106E9534 + 44));
  v5 = *(_DWORD *)(this + 4624) == 0;
  *(float *)(this + 4628) = v4 + *(float *)(dword_106B31C8 + 12);
  if ( v5 )
  {
    *(float *)(this + 2896) = *(float *)(dword_106E864C + 44);
    *(_DWORD *)(this + 4616) = 0;
  }
  else
  {
    *(float *)(this + 2896) = *(float *)(dword_106E864C + 44) + *(float *)(dword_106E864C + 44);
  }
}
