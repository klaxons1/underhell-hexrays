char __thiscall sub_10326250(int this, float a2)
{
  int v3; // eax
  char result; // al
  int v5; // eax
  int (__thiscall *v6)(int, int); // edx
  int (__thiscall *v7)(int); // edx
  float *v8; // edi
  float *v9; // eax
  double v10; // st7
  int (__thiscall *v11)(int, int); // edx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  unsigned int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18[1536]; // [esp+14h] [ebp-1800h] BYREF

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  *(_DWORD *)(v3 + 252) |= 0x100000u;
  if ( !*(_BYTE *)(this + 3692) && a2 + 100.0 > *(float *)(this + 3668) )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Barnacle.Scream", 0.0, 0);
    *(_BYTE *)(this + 3692) = 1;
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( a2 <= *(float *)(this + 588) - *(float *)(this + 3716) )
  {
    sub_10325150(this, 0);
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 264))(v12);
    if ( result )
    {
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v14 = __RTDynamicCast(
              v13,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CBaseAnimating `RTTI Type Descriptor',
              0);
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v14 + 776))(v14, v18, 524032);
      v15 = *(_DWORD *)(this + 3740);
      if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 2] != v15 >> 12 )
        v16 = 0;
      else
        v16 = off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 1];
      v17 = this + 3744;
      sub_10217FF0((int *)(v16 + 1132), v17, (int)v18, 0.2);
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 776))(v14, v17, 524032);
    }
  }
  else
  {
    result = sub_10325FE0(this, a2);
    if ( result )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 220))(v5) == 19 )
      {
        if ( *(_DWORD *)(dword_10698344 + 48) )
        {
          v6 = *(int (__thiscall **)(int, int))(*(_DWORD *)this + 1416);
          *(_BYTE *)(this + 3676) = 0;
          return v6(this, dword_106E5088);
        }
        else
        {
          return sub_10325740((int *)this);
        }
      }
      else
      {
        v7 = *(int (__thiscall **)(int))(*(_DWORD *)this + 368);
        *(_BYTE *)(this + 3676) = 0;
        v8 = (float *)v7(this);
        v9 = (float *)sub_10022D70();
        *v9 = v8[85] - v8[82];
        v9[1] = v8[86] - v8[83];
        v10 = v8[87] - v8[84];
        v9[2] = v10;
        v11 = *(int (__thiscall **)(int, int))(*(_DWORD *)this + 1416);
        if ( v10 >= 40.0 )
          return v11(this, dword_106E50A0);
        else
          return v11(this, dword_106E5088);
      }
    }
  }
  return result;
}
