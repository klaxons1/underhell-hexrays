unsigned int __cdecl _controlfp(unsigned int NewValue, unsigned int Mask)
{
  unsigned int v2; // edi
  int v3; // edx
  unsigned int v4; // eax
  unsigned int result; // eax
  __int16 v6; // ax
  __int16 v7; // bx
  unsigned int v8; // edx
  int v9; // eax
  int v10; // esi
  __int16 v11; // ax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  __int16 v17; // dx
  int v18; // ecx
  int v19; // edx
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // [esp+10h] [ebp-10h]
  int v23; // [esp+18h] [ebp-8h]

  v2 = Mask & 0xFFF7FFFF;
  v3 = 0;
  if ( (Mask & 1) != 0 )
    v3 = 16;
  if ( (Mask & 4) != 0 )
    v3 |= 8u;
  if ( (Mask & 8) != 0 )
    v3 |= 4u;
  if ( (Mask & 0x10) != 0 )
    v3 |= 2u;
  if ( (Mask & 0x20) != 0 )
    v3 |= 1u;
  if ( (Mask & 2) != 0 )
    v3 |= 0x80000u;
  v4 = Mask & 0xC00;
  if ( (Mask & 0xC00) != 0 )
  {
    switch ( v4 )
    {
      case 0x400u:
        v3 |= 0x100u;
        break;
      case 0x800u:
        v3 |= 0x200u;
        break;
      case 0xC00u:
        v3 |= 0x300u;
        break;
    }
  }
  if ( (Mask & 0x300) != 0 )
  {
    if ( (Mask & 0x300) == 0x200 )
      v3 |= 0x10000u;
  }
  else
  {
    v3 |= 0x20000u;
  }
  if ( (Mask & 0x1000) != 0 )
    v3 |= 0x40000u;
  result = NewValue & v2 | v3 & ~v2;
  v22 = result;
  if ( result != v3 )
  {
    v6 = _hw_cw(NewValue & v2 | v3 & ~v2);
    v7 = v6;
    v8 = 0;
    if ( (v6 & 1) != 0 )
      v8 = 16;
    if ( (v6 & 4) != 0 )
      v8 |= 8u;
    if ( (v6 & 8) != 0 )
      v8 |= 4u;
    if ( (v6 & 0x10) != 0 )
      v8 |= 2u;
    if ( (v6 & 0x20) != 0 )
      v8 |= 1u;
    if ( (v6 & 2) != 0 )
      v8 |= 0x80000u;
    v9 = v6 & 0xC00;
    if ( (v7 & 0xC00) != 0 )
    {
      switch ( v9 )
      {
        case 1024:
          v8 |= 0x100u;
          break;
        case 2048:
          v8 |= 0x200u;
          break;
        case 3072:
          v8 |= 0x300u;
          break;
      }
    }
    if ( (v7 & 0x300) != 0 )
    {
      if ( (v7 & 0x300) == 0x200 )
        v8 |= 0x10000u;
    }
    else
    {
      v8 |= 0x20000u;
    }
    if ( (v7 & 0x1000) != 0 )
      v8 |= 0x40000u;
    result = v8;
    v22 = v8;
  }
  v10 = 0;
  if ( dword_1048ACE8 )
  {
    v11 = _mm_getcsr();
    if ( (v11 & 0x80u) != 0 )
      v10 = 16;
    if ( (v11 & 0x200) != 0 )
      v10 |= 8u;
    if ( (v11 & 0x400) != 0 )
      v10 |= 4u;
    if ( (v11 & 0x800) != 0 )
      v10 |= 2u;
    if ( (v11 & 0x1000) != 0 )
      v10 |= 1u;
    if ( (v11 & 0x100) != 0 )
      v10 |= 0x80000u;
    v12 = v11 & 0x6000;
    if ( (v11 & 0x6000) != 0 )
    {
      switch ( v12 )
      {
        case 8192:
          v10 |= 0x100u;
          break;
        case 16384:
          v10 |= 0x200u;
          break;
        case 24576:
          v10 |= 0x300u;
          break;
      }
    }
    v13 = (v11 & 0x8040) - 64;
    if ( v13 )
    {
      v14 = v13 - 32704;
      if ( v14 )
      {
        if ( v14 == 64 )
          v10 |= 0x1000000u;
      }
      else
      {
        v10 |= 0x3000000u;
      }
    }
    else
    {
      v10 |= 0x2000000u;
    }
    v15 = NewValue & Mask & 0x300031F | v10 & ~(Mask & 0x300031F);
    if ( v15 == v10 )
    {
      v16 = v10;
    }
    else
    {
      v23 = __hw_cw_sse2(v12, v15);
      __set_fpsr_sse2(v23);
      v17 = _mm_getcsr();
      v16 = 0;
      if ( (v17 & 0x80u) != 0 )
        v16 = 16;
      if ( (v17 & 0x200) != 0 )
        v16 |= 8u;
      if ( (v17 & 0x400) != 0 )
        v16 |= 4u;
      if ( (v17 & 0x800) != 0 )
        v16 |= 2u;
      if ( (v17 & 0x1000) != 0 )
        v16 |= 1u;
      if ( (v17 & 0x100) != 0 )
        v16 |= 0x80000u;
      v18 = v17 & 0x6000;
      if ( (v17 & 0x6000) != 0 )
      {
        switch ( v18 )
        {
          case 8192:
            v16 |= 0x100u;
            break;
          case 16384:
            v16 |= 0x200u;
            break;
          case 24576:
            v16 |= 0x300u;
            break;
        }
      }
      v19 = (v17 & 0x8040) - 64;
      if ( v19 )
      {
        v20 = v19 - 32704;
        if ( v20 )
        {
          if ( v20 == 64 )
            v16 |= 0x1000000u;
        }
        else
        {
          v16 |= 0x3000000u;
        }
      }
      else
      {
        v16 |= 0x2000000u;
      }
    }
    v21 = v22 ^ v16;
    result = v22 | v16;
    if ( (v21 & 0x8031F) != 0 )
      result |= 0x80000000;
  }
  return result;
}
