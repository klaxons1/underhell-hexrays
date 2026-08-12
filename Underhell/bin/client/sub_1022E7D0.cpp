void __thiscall sub_1022E7D0(_BYTE *this, void *a2, size_t Size)
{
  char v4; // cl
  int v5; // eax
  int v6; // ecx

  v4 = this[20];
  if ( (v4 & 2) == 0 )
  {
    v5 = *((_DWORD *)this + 3);
    if ( *((_DWORD *)this + 7) >= (signed int)(v5 + Size) )
    {
      v6 = *((_DWORD *)this + 8);
      if ( v5 >= v6 && *((_DWORD *)this + 1) >= (signed int)(Size + v5 - v6)
        || (*((unsigned __int8 (__thiscall **)(_BYTE *, size_t))this + 9))(this, Size) )
      {
        memcpy_0(a2, (const void *)(*(_DWORD *)this + *((_DWORD *)this + 3) - *((_DWORD *)this + 8)), Size);
        *((_DWORD *)this + 3) += Size;
      }
      else
      {
        this[20] |= 2u;
      }
    }
    else
    {
      this[20] = v4 | 2;
    }
  }
}
