int __thiscall sub_101FA550(int this, int a2)
{
  int result; // eax
  int v4; // edi
  int i; // edi

  result = *(_DWORD *)(this + 64);
  if ( result )
  {
    v4 = 0;
    for ( *(_BYTE *)(this + 77) = 0; v4 < *(_DWORD *)(result + 640); ++v4 )
    {
      (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(*(_DWORD *)(*(_DWORD *)(this + 64) + 628) + 4 * v4)
                                                    + 60))(
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 64) + 628) + 4 * v4),
        this,
        *(_DWORD *)(this + 5976) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 64) + 768) + 4 * v4),
        a2);
      result = *(_DWORD *)(this + 64);
    }
    for ( i = *(_DWORD *)(this + 6008); i; i = *(_DWORD *)(i + 5980) )
      result = sub_101FA550(a2);
    *(float *)(this + 52) = *((float *)off_103EE614 + 67) + *(float *)(*(_DWORD *)(this + 64) + 540);
  }
  return result;
}
