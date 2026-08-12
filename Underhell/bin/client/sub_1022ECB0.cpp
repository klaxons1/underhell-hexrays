void __thiscall sub_1022ECB0(int this, void *Src, size_t Size)
{
  int v4; // eax
  int v5; // ecx

  if ( Size && (*(_BYTE *)(this + 20) & 1) == 0 && (*(_BYTE *)(this + 21) & 8) == 0 )
  {
    v4 = *(_DWORD *)(this + 16);
    v5 = *(_DWORD *)(this + 32);
    if ( v4 >= v5 && *(_DWORD *)(this + 4) >= (signed int)(Size + v4 - v5)
      || (*(unsigned __int8 (__thiscall **)(int, size_t))(this + 40))(this, Size) )
    {
      memcpy_0((void *)(*(_DWORD *)this + *(_DWORD *)(this + 16) - *(_DWORD *)(this + 32)), Src, Size);
      *(_DWORD *)(this + 16) += Size;
      sub_1022E6D0((_DWORD *)this);
    }
    else
    {
      *(_BYTE *)(this + 20) |= 1u;
    }
  }
}
